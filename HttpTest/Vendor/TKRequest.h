//
//  TKRequest.h
//  HttpTest
//
//  Created by PolyGumail on 2019/10/11.
//  Copyright © 2019 PolyGumail. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AFNetworking.h>

typedef comResult void(^comResult)(BOOL status,id data);

NS_ASSUME_NONNULL_BEGIN

@interface TKRequest : NSObject

@property (nonatomic , copy) void(^comResult)(BOOL status,id data);

+ (id) TKRequestWithPost:(id) url:(NSString *)url callBack:()

@end

NS_ASSUME_NONNULL_END
