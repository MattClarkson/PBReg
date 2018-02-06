#/*============================================================================
#
#  PBREG: A software package for point based registration, including ICP for surfaces.
#
#  Copyright (c) University College London (UCL). All rights reserved.
#
#  This software is distributed WITHOUT ANY WARRANTY; without even
#  the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
#  PURPOSE.
#
#  See LICENSE.txt in the top level directory for details.
#
#============================================================================*/

option(BUILD_Boost "Build Boost." ON)

if(BUILD_Boost)
  list(APPEND PBREG_BOOST_LIBS "filesystem")
  list(APPEND PBREG_BOOST_LIBS "system")
  list(APPEND PBREG_BOOST_LIBS "date_time")
  list(APPEND PBREG_BOOST_LIBS "regex")
  list(APPEND PBREG_BOOST_LIBS "thread")
  list(APPEND PBREG_BOOST_LIBS "iostreams")
  list(APPEND PBREG_BOOST_LIBS "program_options")
endif()
