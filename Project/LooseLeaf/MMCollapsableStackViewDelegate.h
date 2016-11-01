//
//  MMCollapsableStackViewDelegate.h
//  LooseLeaf
//
//  Created by Adam Wulf on 9/8/16.
//  Copyright © 2016 Milestone Made, LLC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MMTutorialStackViewDelegate.h"

@protocol MMCollapsableStackViewDelegate <MMTutorialStackViewDelegate>

- (void)didAskToSwitchToStack:(NSString*)stackUUID animated:(BOOL)animated;

- (void)didAskToCollapseStack:(NSString*)stackUUID animated:(BOOL)animated;

@end