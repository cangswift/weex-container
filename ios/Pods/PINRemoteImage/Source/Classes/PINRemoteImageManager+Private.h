//
//  PINRemoteImageManager+Private.h
//  PINRemoteImage
//
//  Created by Garrett Moon on 5/18/17.
//  Copyright © 2017 Pinterest. All rights reserved.
//

#ifndef PINRemoteImageManager_Private_h
#define PINRemoteImageManager_Private_h

#import "PINRemoteImageDownloadQueue.h"

typedef void (^PINRemoteImageManagerDataCompletion)(NSData *data, NSError *error);

@interface PINRemoteImageManager (private)

@property (nonatomic, strong, readonly) dispatch_queue_t callbackQueue;
@property (nonatomic, strong, readonly) PINOperationQueue *concurrentOperationQueue;
@property (nonatomic, strong, readonly) PINRemoteImageDownloadQueue *urlSessionTaskQueue;
@property (nonatomic, strong, readonly) PINURLSessionManager *sessionManager;

@property (nonatomic, readonly) NSArray <NSNumber *> *progressThresholds;
@property (nonatomic, readonly) NSTimeInterval estimatedRemainingTimeThreshold;
@property (nonatomic, readonly) BOOL shouldBlurProgressive;
@property (nonatomic, readonly) CGSize maxProgressiveRenderSize;

@end

#endif /* PINRemoteImageManager_Private_h */