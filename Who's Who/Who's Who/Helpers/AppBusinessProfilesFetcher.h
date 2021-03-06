//
//  AppBusinessProfilesFetcher.h
//  Who's Who
//
//  Created by Ken Boucher on 10/05/2014.
//  Copyright (c) 2014 Ken Boucher. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AppBusinessProfilesFetcher : NSObject

+ (NSArray *)fetchCachedProfilesInContext:(NSManagedObjectContext *)context;
+ (NSArray *)fetchProfiles:(NSError **)error;

@end
