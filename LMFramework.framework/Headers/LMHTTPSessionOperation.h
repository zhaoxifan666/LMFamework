//
//  AFSessionOperation.h
//
//  Created by Robert Ryan on 8/6/15.
//  Copyright (c) 2015 Robert Ryan. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LMNetwork.h"


NS_ASSUME_NONNULL_BEGIN


/**
 
 情况1: op1,op2,op3,串行执行。
 stop 为真，op1失败，后边的任务被cancel。
 stop 为假，op1失败，后边的任务还会继续执行。

   - (void)chainOperation{
     
     NSOperationQueue* queue = [[NSOperationQueue alloc]init];
     需要设置任务并发数是1
     queue.maxConcurrentOperationCount = 1;
     
     isStop:为真时，如果前一个请求失败，后边的任务会被cancel。
     LMHTTPSessionOperation* op1 = [LMHTTPSessionOperation GET:@"xxxx" queue:queue isStop:YES parameters:idListDic callback:nil];

     LMHTTPSessionOperation* op2 = [LMHTTPSessionOperation GET:@"xxxx" queue:queue isStop:YES parameters:idListDic callback:nil];
     
     LMHTTPSessionOperation* op3 = [LMHTTPSessionOperation GET:@"xxxx" queue:queue isStop:YES parameters:idListDic callback:nil];
     
     [queue addOperations:@[op1,op2,op3] waitUntilFinished:NO];
   }

  情况2: op1,op2,op3,并发执行，结束后执行op4
 
 - (void)concurrentOperation{
   
   NSOperationQueue* queue = [[NSOperationQueue alloc]init];
  
   LMHTTPSessionOperation* op1 = [LMHTTPSessionOperation GET:@"xxxx" queue:queue isStop:YES parameters:idListDic callback:nil];

   LMHTTPSessionOperation* op2 = [LMHTTPSessionOperation GET:@"xxxx" queue:queue isStop:YES parameters:idListDic callback:nil];
   
   LMHTTPSessionOperation* op3 = [LMHTTPSessionOperation GET:@"xxxx" queue:queue isStop:YES parameters:idListDic callback:nil];
  
   NSOperation* op4 = [NSBlockOperation blockOperationWithBlock:^{
     NSLog(@"-----finished:4444");
   }];
   
   [op4 addDependency:op1];
   [op4 addDependency:op2];
   [op4 addDependency:op3];
   note:先设置依赖关系，再加入到queue
   [queue addOperations:@[op4,op1,op2,op3] waitUntilFinished:NO];
 
   if (@available(iOS 13.0, *)) {
     note:这个方法更简单但是只在iOS13后可用。
     [queue addBarrierBlock:^{
       NSLog(@"-----finished:4444");
     }];
   } else {
     // Fallback on earlier versions
   }
 }

 */


@interface LMHTTPSessionOperation : NSOperation


+ (instancetype)POST:(NSString*)path
               queue:(nonnull NSOperationQueue*)queue
              isStop:(BOOL)stopped
           parameters:(id)parameters
            callBack:(LMNetworkCallBack)callBack;

/**
 串行执行时：isStop为真：如果前一个请求失败，后边的任务会被cancel。
 并发时没有作用。
 */
+ (instancetype)GET:(NSString*)path
               queue:(nonnull NSOperationQueue*)queue
              isStop:(BOOL)stopped
           parameters:(id)parameters
           callBack:(LMNetworkCallBack)callBack;

@end

NS_ASSUME_NONNULL_END
