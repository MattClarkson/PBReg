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

configure_file(${CMAKE_SOURCE_DIR}/UsePBReg.cmake.in ${CMAKE_BINARY_DIR}/UsePBReg.cmake @ONLY IMMEDIATE)
configure_file(${CMAKE_SOURCE_DIR}/PBRegConfig.cmake.in ${CMAKE_BINARY_DIR}/PBRegConfig.cmake @ONLY IMMEDIATE)
if(NOT BUILDING_GUIS)
  install(FILES ${CMAKE_BINARY_DIR}/UsePBReg.cmake DESTINATION . COMPONENT CONFIG)
  install(FILES ${CMAKE_BINARY_DIR}/PBRegConfig.cmake DESTINATION . COMPONENT CONFIG)
endif()
