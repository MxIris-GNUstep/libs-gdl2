/* 
   EODetailDataSource.m

   Copyright (C) 2000 Free Software Foundation, Inc.

   Author: Mirko Viviani <mirko.viviani@rccr.cremona.it>
   Date: July 2000

   This file is part of the GNUstep Database Library.

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
*/

#ifndef __EODetailDataSource_h__
#define __EODetailDataSource_h__

#import <EOControl/EODataSource.h>


@class EOKeyValueUnarchiver;


@interface EODetailDataSource : EODataSource <NSCoding>
{
  EODataSource *_masterDataSource;
  id _masterObject;
  NSString *_detailKey;
  NSString *_masterClassDescriptionName;
}

+ (EODetailDataSource *)detailDataSourceWithMasterDataSource: (EODataSource *)master 
                                                   detailKey: (NSString *)detailKey;

- initWithMasterClassDescription: (EOClassDescription *)masterClassDescription
               detailKey: (NSString *)detailKey;

- initWithMasterDataSource: (EODataSource *)master
		 detailKey: (NSString *)detailKey;

- (id) initWithKeyValueUnarchiver: (EOKeyValueUnarchiver *)unarchiver;

- (EODataSource *)masterDataSource;

- (EOClassDescription *)masterClassDescription;
- (void)setMasterClassDescription: (EOClassDescription *)classDescription;
- (EOClassDescription *)classDescriptionForObjects;

- (void)qualifyWithRelationshipKey: (NSString *)key
			  ofObject: masterObject;
- (NSString *)detailKey;
- (id)masterObject;

- (EOEditingContext *)editingContext;

@end

#endif /* __EODetailDataSource_h__ */
