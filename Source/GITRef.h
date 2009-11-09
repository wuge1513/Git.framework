//
//  GITRef.h
//  Git.framework
//
//  Created by Geoff Garside on 20/09/2009.
//  Copyright 2009 Geoff Garside. All rights reserved.
//

#import <Foundation/Foundation.h>


@class GITRepo;
@interface GITRef : NSObject {
    GITRepo *repo;

    BOOL link;
    NSString *name;
    NSString *targetName;
}

@property (retain) GITRepo *repo;
@property (copy) NSString *name;
@property (assign, getter=isLink) BOOL link;
@property (copy) NSString *targetName;

+ (id)refWithName: (NSString *)theName andTarget: (NSString *)theTarget inRepo: (GITRepo *)theRepo;

- (id)initWithName: (NSString *)theName andTarget: (NSString *)theTarget inRepo: (GITRepo *)theRepo;

// Could be a commit, tag
//- (GIT *)target;
- (GITRef*)resolve;

@end