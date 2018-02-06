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

set(PBREG_LIBRARY_NAME pbreg)

set(PBREG_LIBRARY_SRCS
  pbrBasicTypes.cpp
  pbrMyFunctions.cpp
  pbrException.cpp
)

set(PBREG_LIBRARY_HDRS
  pbrExceptionMacro.h
)

add_library(${PBREG_LIBRARY_NAME} ${PBREG_LIBRARY_HDRS} ${PBREG_LIBRARY_SRCS})

if(BUILD_SHARED_LIBS)
  if(WIN32)
    add_definitions(-DPBREG_WINDOWS_EXPORT)
  endif(WIN32)
endif(BUILD_SHARED_LIBS)

target_link_libraries(${PBREG_LIBRARY_NAME} PRIVATE ${ALL_THIRD_PARTY_LIBRARIES})

PBREG_INSTALL_HEADERS()
PBREG_INSTALL_LIBRARY(${PBREG_LIBRARY_NAME})

if(BUILD_PYTHON_BINDINGS)
  add_subdirectory(PythonBinding)
endif()
