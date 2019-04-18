//
//  ANN9Analytics.m
//  ANN9FirebaseAnalytics
//
//  Created by 晓松 on 2019/4/11.
//  Copyright © 2019 ann9. All rights reserved.
//

#import "ANN9Analytics.h"
#import "Firebase.h"

@implementation ANN9Analytics

+ (void)aLogEventWithName:(NSString *)name parameters:(NSDictionary<NSString *,id> *)parameters {
    [FIRAnalytics logEventWithName:name parameters:parameters];
}

+ (void)aSetUserPropertyString:(nullable NSString *)value forName:(NSString *)name
NS_SWIFT_NAME(setUserProperty(_:forName:)) {
    [FIRAnalytics setUserPropertyString:value forName:name];
}


+ (void)aSetUserID:(nullable NSString *)userID {
    [FIRAnalytics setUserID:userID];
}

+ (void)aSetScreenName:(nullable NSString *)screenName
           screenClass:(nullable NSString *)screenClassOverride {
    [FIRAnalytics setScreenName:screenName screenClass:screenClassOverride];
}

+ (void)aSetAnalyticsCollectionEnabled:(BOOL)analyticsCollectionEnabled {
    
}

+ (void)aSetSessionTimeoutInterval:(NSTimeInterval)sessionTimeoutInterval {
    
}


+ (NSString *)aAppInstanceID {
    return [FIRAnalytics appInstanceID];
}


+ (void)aResetAnalyticsData {
    [FIRAnalytics resetAnalyticsData];
}

@end
