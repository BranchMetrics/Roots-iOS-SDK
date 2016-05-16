//
//  Roots.h
//  Pods
//
//  Created by Sojan P.R. on 5/3/16.
//
//
#import "RootsFinder.h"
#import "RootsLinkOptions.h"

enum RootsError {
    unknown_error,
    invalid_url    
};


@protocol RootsEventsDelegate <NSObject>

- (void) applicationLaunched:(NSString *)appName appStoreID:(NSString *)appStoreID;
- (void) fallbackUrlOpened:(NSString *)fallbackUrl;
- (void) appStoreOpened:(NSString *)appName appStoreID:(NSString *)appStoreID;
- (void) rootsError:(enum RootsError)error;

@end


@protocol RootsRoutingDelegate <NSObject>

- (void) configureControlWithRoutingData:(NSDictionary *) routingParams;

@end


@interface Roots : NSObject

/**
 * Method route to matchong app for the given url. Routing results are provided through the delegate
 */
+ (void) connect:(NSString *)url withDelegate:(id)callback;

/**
 * Method route to matchong app for the given url. Routing results are provided through the delegate.
 * Method provides  option to set routing prefrence by passing RootsLinkOptions
 */
+ (void) connect:(NSString *)url withDelegate:(id)callback andWithOptions:(RootsLinkOptions *)options;

/**
 * Method to debug the app link routing with given app link data
 */
+ (void) debugConnect:(NSString *)url applinkMetadataJsonArray:(NSString *)applinkData andCallback:(id)callback;

@end
