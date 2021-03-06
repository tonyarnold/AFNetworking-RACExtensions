//
//  AFHTTPSessionManager+RACSupport.h
//  Reactive AFNetworking Example
//
//  Created by Robert Widmann on 5/20/14.
//  Copyright (c) 2014 CodaFi. All rights reserved.
//

#import "AFHTTPSessionManager.h"
#import <ReactiveCocoa/ReactiveCocoa.h>

#if (defined(__IPHONE_OS_VERSION_MAX_ALLOWED) && __IPHONE_OS_VERSION_MAX_ALLOWED >= 70000) || (defined(__MAC_OS_X_VERSION_MAX_ALLOWED) && __MAC_OS_X_VERSION_MAX_ALLOWED >= 1090)

@interface AFHTTPSessionManager (RACSupport)

/// A convenience around -GET:parameters:success:failure: that returns a cold signal of the
/// resulting JSON object or error.
- (RACSignal *)rac_GET:(NSString *)path parameters:(NSDictionary *)parameters;

/// A convenience around -HEAD:parameters:success:failure: that returns a cold signal of the
/// resulting JSON object or error.
- (RACSignal *)rac_HEAD:(NSString *)path parameters:(NSDictionary *)parameters;

/// A convenience around -POST:parameters:success:failure: that returns a cold signal of the
/// result.
- (RACSignal *)rac_POST:(NSString *)path parameters:(NSDictionary *)parameters;

/// A convenience around -POST:parameters:constructingBodyWithBlock:success:failure: that returns a
/// cold signal of the resulting JSON object or error.
- (RACSignal *)rac_POST:(NSString *)path parameters:(NSDictionary *)parameters constructingBodyWithBlock:(void (^)(id <AFMultipartFormData> formData))block;

/// A convenience around -PUT:parameters:success:failure: that returns a cold signal of the
/// resulting JSON object or error.
- (RACSignal *)rac_PUT:(NSString *)path parameters:(NSDictionary *)parameters;

/// A convenience around -PATCH:parameters:success:failure: that returns a cold signal of the
/// resulting JSON object or error.
- (RACSignal *)rac_PATCH:(NSString *)path parameters:(NSDictionary *)parameters;

/// A convenience around -DELETE:parameters:success:failure: that returns a cold signal of the
/// resulting JSON object or error.
- (RACSignal *)rac_DELETE:(NSString *)path parameters:(NSDictionary *)parameters;

@end

#endif