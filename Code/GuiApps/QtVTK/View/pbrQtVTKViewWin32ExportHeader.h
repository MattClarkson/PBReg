/*=============================================================================

  PBREG: A software package for point based registration, including ICP for surfaces.

  Copyright (c) University College London (UCL). All rights reserved.

  This software is distributed WITHOUT ANY WARRANTY; without even
  the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
  PURPOSE.

  See LICENSE.txt in the top level directory for details.

=============================================================================*/

#ifndef pbrQtVTKViewWin32ExportHeader_h
#define pbrQtVTKViewWin32ExportHeader_h

/**
* \file pbrQtVTKViewWin32ExportHeader.h
* \brief Header to sort Windows dllexport/dllimport.
*/

#if (defined(_WIN32) || defined(WIN32)) && !defined(PBREG_STATIC)
  #ifdef PBREG_QTVTKVIEW_WINDOWS_EXPORT
    #define PBREG_QTVTKVIEWWINEXPORT __declspec(dllexport)
  #else
    #define PBREG_QTVTKVIEWWINEXPORT __declspec(dllimport)
  #endif
#else
  #define PBREG_QTVTKVIEWWINEXPORT
#endif

#endif
