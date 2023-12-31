//
//  MDModeStrategy.h
//  MD360Player4IOS
//
//  Created by ashqal on 16/4/11.
//  Copyright © 2016年 ashqal. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>


#pragma mark IMDModeStrategy
@protocol IMDModeStrategy <NSObject>
@optional
-(void) on;
-(void) off;
-(void) handleDragDistX:(float)distX distY:(float)distY;
-(void)resize:(CGRect)frame;
@end

#pragma mark MDModeManager
@interface MDModeManager : NSObject<IMDModeStrategy>
@property(nonatomic,readonly) int mMode;
@property (nonatomic,strong) id<IMDModeStrategy> mStrategy;
- (instancetype)initWithDefault:(int)mode;
- (void) prepare;
- (void) switchMode:(int)mode;
- (void) switchMode;
- (void)resize:(CGRect)frame;
- (id<IMDModeStrategy>) createStrategy:(int)mode;
@end
