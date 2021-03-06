//
//  Profile.h
//  Who's Who
//
//  Created by Ken Boucher on 21/05/2014.
//  Copyright (c) 2014 Ken Boucher. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Photo;

@interface Profile : NSManagedObject

@property (nonatomic, retain) NSString * biography;
@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSString * position;
@property (nonatomic, retain) NSSet *photos;
@end

@interface Profile (CoreDataGeneratedAccessors)

- (void)addPhotosObject:(Photo *)value;
- (void)removePhotosObject:(Photo *)value;
- (void)addPhotos:(NSSet *)values;
- (void)removePhotos:(NSSet *)values;

@end
