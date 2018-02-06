/*=============================================================================

  PBREG: A software package for point based registration, including ICP for surfaces.

  Copyright (c) University College London (UCL). All rights reserved.

  This software is distributed WITHOUT ANY WARRANTY; without even
  the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
  PURPOSE.

  See LICENSE.txt in the top level directory for details.

=============================================================================*/

#ifndef pbrQtVTKControllerWin32ExportHeader_h
#define pbrQtVTKControllerWin32ExportHeader_h

/**
* \file pbrQtVTKControllerWin32ExportHeader.h
* \brief Header to sort Windows dllexport/dllimport.
*/

#if (defined(_WIN32) || defined(WIN32)) && !defined(PBREG_STATIC)
  #ifdef PBREG_QTVTKCONTROLLER_WINDOWS_EXPORT
    #define PBREG_QTVTKCONTROLLERWINEXPORT __declspec(dllexport)
  #else
    #define PBREG_QTVTKCONTROLLERWINEXPORT __declspec(dllimport)
  #endif
#else
  #define PBREG_QTVTKCONTROLLERWINEXPORT
#endif

#endif
