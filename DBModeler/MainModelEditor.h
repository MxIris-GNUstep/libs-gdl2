#ifndef __MainModelEditor_H_
#define __MainModelEditor_H_

/*
    MainModelerEditor.h
 
    Author: Matt Rice <ratmice@yahoo.com>
    Date: Apr 2005

    This file is part of DBModeler.

    DBModeler is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    DBModeler is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with DBModeler; if not, write to the Free Software
    Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/ 

#include <EOModeler/EOModelerEditor.h>

#include <AppKit/NSBox.h>
#include <AppKit/NSOutlineView.h>
#include <AppKit/NSWindow.h>

@interface MainModelEditor : EOModelerCompoundEditor
{
  NSBox         *_box;
  NSWindow      *_window;
  NSOutlineView *_iconPath;
}

@end

#endif