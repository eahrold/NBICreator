//
//  NBCDeployStudioWorkflowModifyNBI.h
//  NBICreator
//
//  Created by Erik Berglund on 2015-05-18.
//  Copyright (c) 2015 NBICreator. All rights reserved.
//

#import <Foundation/Foundation.h>

@class NBCTargetController;
@class NBCWorkflowItem;
@class NBCWorkflowProgressViewController;

@interface NBCDeployStudioWorkflowModifyNBI : NSObject

// ------------------------------------------------------
//  Class Instance Properties
// ------------------------------------------------------
@property NBCTargetController *targetController;
@property NBCWorkflowProgressViewController *progressView;
@property NBCWorkflowItem *workflowItem;

// ------------------------------------------------------
//  Instance Methods
// ------------------------------------------------------
- (void)runWorkflow:(NBCWorkflowItem *)workflowItem;

@end
