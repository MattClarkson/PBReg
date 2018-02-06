/*=============================================================================

  PBREG: A software package for point based registration, including ICP for surfaces.

  Copyright (c) University College London (UCL). All rights reserved.

  This software is distributed WITHOUT ANY WARRANTY; without even
  the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
  PURPOSE.

  See LICENSE.txt in the top level directory for details.

=============================================================================*/

#include <pbrMyFunctions.h>
#include <pbrExceptionMacro.h>
#include <iostream>

#ifdef BUILD_gflags
#include "gflags/gflags.h"
#endif

#ifdef BUILD_glog
#include <glog/logging.h>
#endif

#ifdef BUILD_Eigen
#include <Eigen/Dense>
#include <unsupported/Eigen/NonLinearOptimization>
#endif

#ifdef BUILD_Boost
#include <boost/math/special_functions/round.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>
#include <boost/filesystem/path.hpp>
#endif

/**
 * \brief Demo file to check that #includes and library linkage is correct.
 */
int main(int argc, char** argv)
{

  int returnStatus = EXIT_FAILURE;

#ifdef BUILD_glog
  google::InitGoogleLogging(argv[0]);
#endif

  try
  {

#ifdef BUILD_gflags
    gflags::SetVersionString("1.0.0");
#endif

#ifdef BUILD_Eigen
    Eigen::MatrixXd m(2,2);
    std::cout << "Printing 2x2 Eigen::MatrixXd ..." << std::endl << m << std::endl;
#endif

#ifdef BUILD_Boost
    std::cout << "Rounding to ... " << boost::math::round(0.123) << std::endl;
    boost::posix_time::ptime startTime = boost::posix_time::second_clock::local_time();
    boost::filesystem::path pathname( "/tmp/tmp.txt" );
#endif

    std::cout << "Calculating ... " << pbr::MyFirstAddFunction(1, 2) << std::endl;

    returnStatus = EXIT_SUCCESS;
  }
  catch (pbr::Exception& e)
  {
    std::cerr << "Caught pbr::Exception: " << e.GetDescription() << std::endl;
  }
  catch (std::exception& e)
  {
    std::cerr << "Caught std::exception: " << e.what() << std::endl;
  }

  return returnStatus;
}
