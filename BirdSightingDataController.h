//
//  BirdSightingDataController.h
//  BirdWatching
//
//  Created by Feorlen on 10/16/13.
//  Copyright (c) 2013 Feorlen.org. All rights reserved.
//

#import <Foundation/Foundation.h>

@class BirdSighting;

@interface BirdSightingDataController : NSObject

@property (nonatomic, copy) NSMutableArray *masterBirdSightingList;
- (NSUInteger)countOfList;
- (BirdSighting *)objectInListAtIndex:(NSUInteger)theIndex;
- (void)addBirdSightingWithSighting:(BirdSighting *)sighting;

@end
