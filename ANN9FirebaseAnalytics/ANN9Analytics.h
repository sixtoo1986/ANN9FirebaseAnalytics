//
//  ANN9Analytics.h
//  ANN9FirebaseAnalytics
//
//  Created by 晓松 on 2019/4/11.
//  Copyright © 2019 ann9. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ANN9Analytics : NSObject


/// Logs an app event. The event can have up to 25 parameters. Events with the same name must have
/// the same parameters. Up to 500 event names are supported. Using predefined events and/or
/// parameters is recommended for optimal reporting.
///
/// The following event names are reserved and cannot be used:
/// <ul>
///     <li>ad_activeview</li>
///     <li>ad_click</li>
///     <li>ad_exposure</li>
///     <li>ad_impression</li>
///     <li>ad_query</li>
///     <li>adunit_exposure</li>
///     <li>app_clear_data</li>
///     <li>app_remove</li>
///     <li>app_update</li>
///     <li>error</li>
///     <li>first_open</li>
///     <li>in_app_purchase</li>
///     <li>notification_dismiss</li>
///     <li>notification_foreground</li>
///     <li>notification_open</li>
///     <li>notification_receive</li>
///     <li>os_update</li>
///     <li>screen_view</li>
///     <li>session_start</li>
///     <li>user_engagement</li>
/// </ul>
+ (void)aLogEventWithName:(NSString *)name
               parameters:(nullable NSDictionary<NSString *, id> *)parameters
NS_SWIFT_NAME(logEvent(_:parameters:));

/// @param value The value of the user property. Values can be up to 36 characters long. Setting the
///     value to nil removes the user property.
/// @param name The name of the user property to set. Should contain 1 to 24 alphanumeric characters
///     or underscores and must start with an alphabetic character. The "firebase_", "google_", and
///     "ga_" prefixes are reserved and should not be used for user property names.
+ (void)aSetUserPropertyString:(nullable NSString *)value forName:(NSString *)name
NS_SWIFT_NAME(setUserProperty(_:forName:));


+ (void)aSetUserID:(nullable NSString *)userID;

+ (void)aSetScreenName:(nullable NSString *)screenName
           screenClass:(nullable NSString *)screenClassOverride;

+ (void)aSetAnalyticsCollectionEnabled:(BOOL)analyticsCollectionEnabled;

+ (void)aSetSessionTimeoutInterval:(NSTimeInterval)sessionTimeoutInterval;


+ (NSString *)aAppInstanceID;


+ (void)aResetAnalyticsData;

@end

NS_ASSUME_NONNULL_END
