/*=============================================================================

  PBREG: A software package for point based registration, including ICP for surfaces.

  Copyright (c) University College London (UCL). All rights reserved.

  This software is distributed WITHOUT ANY WARRANTY; without even
  the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
  PURPOSE.

  See LICENSE.txt in the top level directory for details.

=============================================================================*/

#ifndef pbrQtVTKModelWin32ExportHeader_h
#define pbrQtVTKModelWin32ExportHeader_h

/**
* \file pbrQtVTKModelWin32ExportHeader.h
* \brief Header to sort Windows dllexport/dllimport.
*/

#if (defined(_WIN32) || defined(WIN32)) && !defined(PBREG_STATIC)
  #ifdef PBREG_QTVTKMODEL_WINDOWS_EXPORT
    #define PBREG_QTVTKMODELWINEXPORT __declspec(dllexport)
  #else
    #define PBREG_QTVTKMODELWINEXPORT __declspec(dllimport)
  #endif
#else
  #define PBREG_QTVTKMODELWINEXPORT
#endif

#endif
