//
//  AppRouter.h
//  Pods
//
//  Created by Sojan P.R. on 5/6/16.
//
//

@interface AppRouter : NSObject

/*
 * Method for handling routing to app or to fallback options based on the app launch configuration
 */
+ (BOOL) handleAppRouting:(AppLaunchConfig *)appLaunchConfig withDelegate:(id)callback;

@end