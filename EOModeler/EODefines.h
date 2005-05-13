/* -*-objc-*-
   EODefines.h

   Copyright (C) 2005 Free Software Foundation, Inc.

   Author: Matt Rice <ratmice@yahoo.com>
   Date: Apr 2005

   This file is part of the GNUstep Database Library.

   This library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   This library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with this library; if not, write to the Free Software
   Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#ifndef __EOModeler_EODefines_h__
#define __EOModeler_EODefines_h__

#ifdef GNUSTEP_WITH_DLL

#if BUILD_libEOModeler_DLL
#  define GDL2MODELER_EXPORT  __declspec(dllexport)
#  define GDL2MODELER_DECLARE __declspec(dllexport)
#else
#  define GDL2MODELER_EXPORT  extern __declspec(dllimport)
#  define GDL2MODELER_DECLARE __declspec(dllimport)
#endif

#else /* GNUSTEP_WITH[OUT]_DLL */

#  define GDL2MODELER_EXPORT extern
#  define GDL2MODELER_DECLARE

#endif

#endif /* __EOMODELER_EODefines_h__ */
