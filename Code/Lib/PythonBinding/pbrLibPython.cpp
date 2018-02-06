/*=============================================================================

  PBREG: A software package for point based registration, including ICP for surfaces.

  Copyright (c) University College London (UCL). All rights reserved.

  This software is distributed WITHOUT ANY WARRANTY; without even
  the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
  PURPOSE.

  See LICENSE.txt in the top level directory for details.

=============================================================================*/

#include <boost/python.hpp>
#include "pbrMyFunctions.h"

BOOST_PYTHON_MODULE(pbregpython)
{
  boost::python::def("my_first_add_function", pbr::MyFirstAddFunction);
}
