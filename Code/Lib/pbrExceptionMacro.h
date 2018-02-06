/*=============================================================================

  PBREG: A software package for point based registration, including ICP for surfaces.

  Copyright (c) University College London (UCL). All rights reserved.

  This software is distributed WITHOUT ANY WARRANTY; without even
  the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
  PURPOSE.

  See LICENSE.txt in the top level directory for details.

=============================================================================*/

#ifndef pbrExceptionMacro_h
#define pbrExceptionMacro_h

#include "pbrException.h"

#define pbrExceptionThrow() throw pbr::Exception(__FILE__,__LINE__)

#endif
