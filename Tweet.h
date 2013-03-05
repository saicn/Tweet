//
//  Tweet.h
//  Tweet
//
//  Created by Sai Chaitanya Nandigam on 4/26/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Tweet : NSObject
{
    NSString *_tweetContent;
    double _latitude;
    double _longitude;
    NSDate *_tweetDate;
}

@property (readwrite) double latitude;
@property (readwrite) double longitude;
@property (readwrite, retain) NSDate *tweetDate;
@property (readwrite, retain) NSString *tweetContent;

@end
