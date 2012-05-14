//
//  JunoTaskController.h
//  JunoTaskController
//
//  Created by Jae Kim on 1/13/12.
//  Copyright (c) 2012 Mobile Media Solutions, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface JunoTaskController : NSObject {
    NSString *jtcAppId;
    NSString *evtName;
}
@property (nonatomic, retain) NSString *jtcAppId;
@property (nonatomic, retain) NSString *evtName;

+(void) trackPayPerEngagement:(NSString*)advKey;
+(void) trackPayPerEngagement:(NSString*)advKey withEvent:(NSString*)evtName;

@end
