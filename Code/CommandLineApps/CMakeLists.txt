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

set(_command_line_apps
  pbrMyFirstApp
)

foreach(_app ${_command_line_apps})
  add_executable(${_app} ${_app}.cpp)
  target_link_libraries(${_app} ${PBREG_LIBRARIES} ${ALL_THIRD_PARTY_LIBRARIES})
  PBREG_INSTALL_CL(TARGETS ${_app})
endforeach()
