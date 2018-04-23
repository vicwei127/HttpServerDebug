//
//  HSDHttpConnection+View.h
//  HttpServerDebug
//
//  Created by chenjun on 2017/10/30.
//  Copyright © 2017年 chenjun. All rights reserved.
//

#import "HSDHttpConnection.h"

@interface HSDHttpConnection (View)

- (NSObject<HTTPResponse> *)fetchViewDebugResponseForMethod:(NSString *)method URI:(NSString *)path;

- (NSObject<HTTPResponse> *)fetchViewDebugAPIResponsePaths:(NSArray *)paths parameters:(NSDictionary *)params;

@end