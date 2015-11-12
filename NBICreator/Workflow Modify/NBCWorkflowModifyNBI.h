//
//  NBCWorkflowModifyNBI.h
//  NBICreator
//
//  Created by Erik Berglund on 2015-10-30.
//  Copyright © 2015 NBICreator. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NBCWorkflowProgressDelegate.h"
#import "NBCInstallerPackageController.h"
@class NBCWorkflowItem;

@interface NBCWorkflowModifyNBI : NSObject <NBCInstallerPackageDelegate>
@property NBCWorkflowItem *workflowItem;
@property (nonatomic, weak) id delegate;
@property BOOL isNBI;

@property NSString *currentVolume;
@property NSURL *currentVolumeURL;
@property NSDictionary *currentVolumeResources;

@property BOOL modificationsApplied;
@property BOOL updatedKernelCache;
@property BOOL addedUsers;
@property NSString *creationTool;
@property int workflowType;

// Methods

- (id)initWithDelegate:(id<NBCWorkflowProgressDelegate>)delegate;
- (void)modifyNBI:(NBCWorkflowItem *)workflowItem;

@end