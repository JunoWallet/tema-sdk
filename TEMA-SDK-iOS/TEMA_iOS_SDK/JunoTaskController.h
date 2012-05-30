//
//  JunoTaskController.h
//  JunoTaskController
//
//  Copyright (c) 2012 Mobile Media Solutions, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface JunoTaskController : NSObject {
    //
}

+(void) trackPayPerEngagement;
+(void) trackPayPerEngagement:(NSString*)advKey;
+(void) trackPayPerEngagement:(NSString*)advKey withEvent:(NSString*)evtName;
+(void) trackPayPerEngagement:(NSString*)advKey withMx:(int)mm;
+(void) trackPayPerEngagement:(NSString*)advKey withEvent:(NSString*)evtName withMx:(int)mm;

@end
