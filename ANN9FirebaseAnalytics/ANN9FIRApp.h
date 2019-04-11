//
//  ANN9FIRApp.h
//  ANN9FirebaseAnalytics
//
//  Created by 晓松 on 2019/4/11.
//  Copyright © 2019 ann9. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ANN9FIRApp : NSObject

/**
 * Configures a default Firebase app. Raises an exception if any configuration step fails. The
 * default app is named "__FIRAPP_DEFAULT". This method should be called after the app is launched
 * and before using Firebase services. This method is thread safe and contains synchronous file I/O
 * (reading GoogleService-Info.plist from disk).
 */
+(void)configure;

@end

NS_ASSUME_NONNULL_END
