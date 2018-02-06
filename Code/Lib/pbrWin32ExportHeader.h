/*=============================================================================

  PBREG: A software package for point based registration, including ICP for surfaces.

  Copyright (c) University College London (UCL). All rights reserved.

  This software is distributed WITHOUT ANY WARRANTY; without even
  the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
  PURPOSE.

  See LICENSE.txt in the top level directory for details.

=============================================================================*/

#ifndef pbrWin32ExportHeader_h
#define pbrWin32ExportHeader_h

/**
* \file pbrWin32ExportHeader.h
* \brief Header to sort Windows dllexport/dllimport.
*/

#if (defined(_WIN32) || defined(WIN32)) && !defined(PBREG_STATIC)
  #ifdef PBREG_WINDOWS_EXPORT
    #define PBREG_WINEXPORT __declspec(dllexport)
  #else
    #define PBREG_WINEXPORT __declspec(dllimport)
  #endif  /* PBREG_WINEXPORT */
#else
/* linux/mac needs nothing */
  #define PBREG_WINEXPORT
#endif

#endif
