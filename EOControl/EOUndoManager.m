/** 
   EOUndoManager.m <title>EOUndoManager</title>

   Copyright (C) 2000-2002 Free Software Foundation, Inc.

   Author: Manuel Guesdon <mguesdon@orange-concept.com>
   Date: October 2000

   $Revision$
   $Date$

   <abstract></abstract>

   This file is part of the GNUstep Database Library.

   <license>
   This library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public
   License as published by the Free Software Foundation; either
   version 2 of the License, or (at your option) any later version.

   This library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU Library General Public
   License along with this library; see the file COPYING.LIB.
   If not, write to the Free Software Foundation,
   59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
   </license>
**/

static char rcsId[] = "$Id$";

#import <Foundation/Foundation.h>

#import <EOControl/EOUndoManager.h>


@implementation EOUndoManager

- (void) forgetAllWithTarget: (id)param0
{
  EOFLOGObjectFnStart();

  [self notImplemented: _cmd]; //TODO

  EOFLOGObjectFnStop();
}

- (void) forgetAll
{
  EOFLOGObjectFnStart();

  [self notImplemented: _cmd]; //TODO

  EOFLOGObjectFnStop();
}

- (void) registerUndoWithTarget: (id)target
                       selector: (SEL)sel
                            arg: (id)arg
{
  EOFLOGObjectFnStart();

  [self notImplemented: _cmd]; //TODO
//  [self _registerUndoObject:_NSUndoLightInvocation target/selector/object];
/*_registerUndoObject: 
          call _prepareEventGrouping
                      beginUndoGrouping
                           _prepareEventGrouping
                                 postNotificationName:NSUndoManagerDidOpenUndoGroupNotification object:self
*/
  EOFLOGObjectFnStop();
}

- (void) reenableUndoRegistration
{
  EOFLOGObjectFnStart();

  [self notImplemented: _cmd]; //TODO

  EOFLOGObjectFnStop();
}

@end
