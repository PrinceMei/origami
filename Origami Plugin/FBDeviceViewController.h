/*
 *  Copyright (c) 2016-present, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under the license found in the
 *  LICENSE file in the root directory of this source tree.
 *
 */

#import <Cocoa/Cocoa.h>

@interface FBDeviceViewController : NSViewController

@property (strong) IBOutlet NSView *noDeviceView;
@property (strong) IBOutlet NSView *deviceIsConnectedView;
@property (weak) IBOutlet NSTextField *deviceName;

@end
