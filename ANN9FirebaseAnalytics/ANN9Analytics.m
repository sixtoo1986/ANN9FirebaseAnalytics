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

@end
