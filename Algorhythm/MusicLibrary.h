//
//  MusicLibrary.h
//  Algorhythm
//
//  Created by Thiago Heitling on 2015-12-30.
//  Copyright © 2015 Thiago Heitling. All rights reserved.
//

#import <Foundation/Foundation.h>

extern NSString *const kTitle;
extern NSString *const kDescription;
extern NSString *const kIcon;
extern NSString *const kLargeIcon;
extern NSString *const kBackgroundColor;
extern NSString *const kArtists;

@interface MusicLibrary : NSObject

@property (strong, nonatomic) NSArray *library;

@end
