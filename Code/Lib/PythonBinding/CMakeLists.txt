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

if(NOT BUILDING_GUIS)

  set(PBREG_PYTHON_LIBRARY_NAME ${PBREG_LIBRARY_NAME}python)

  set(PBREG_PYTHON_SRCS
    pbrLibPython.cpp
  )

  link_libraries(${PBREG_LIBRARY_NAME})
  PYTHON_ADD_MODULE(${PBREG_PYTHON_LIBRARY_NAME} ${PBREG_PYTHON_SRCS})
  install(TARGETS ${PBREG_PYTHON_LIBRARY_NAME} DESTINATION ${PBREG_INSTALL_LIB_DIR})

endif()
