//
//  LMNetwork.h
//  LMFramework
//
//  Created by ruie on 2019/10/16.
//  Copyright © 2019 ruie. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <AFNetworking/AFNetworkReachabilityManager.h>

NS_ASSUME_NONNULL_BEGIN

#define kNetwork_TimeOut_Max            (10)
#define kNetwork_TimeOut_Min            (10)

typedef enum : NSUInteger {
    LMRequestTypePost,
    LMRequestTypeGet,
} LMRequestType;

typedef NS_ENUM(NSUInteger, LMNetworkSSLPinningMode) {
    LMNetworkSSLPinningMode_None,
    LMNetworkSSLPinningMode_PublicKey,
    LMNetworkSSLPinningMode_Certificate,
};

typedef NS_ENUM(NSUInteger, LMNetworkRequestType) {
    LMNetworkRequestType_HTTP,
    LMNetworkRequestType_JSON,
    LMNetworkRequestType_PropertyList,
};

typedef NS_ENUM(NSUInteger, LMNetworkResponseType) {
    LMNetworkResponseType_HTTP,
    LMNetworkResponseType_JSON,
    LMNetworkResponseType_XMLParser,
    LMNetworkResponseType_PropertyList,
    LMNetworkResponseType_Image,
};

typedef NS_ENUM(NSUInteger, LMNetworkHeaderType) {
    LMNetworkHeaderType_Aqara,
    LMNetworkHeaderType_LG,
//    LMNetworkHeaderType_Logout,
};

typedef NS_ENUM(NSInteger, LMNetworkReachabilityStatus) {
    LMNetworkReachabilityStatusUnknown          = -1,
    LMNetworkReachabilityStatusNotReachable     = 0,
    LMNetworkReachabilityStatusReachableViaWWAN = 1,
    LMNetworkReachabilityStatusReachableViaWiFi = 2,
};

typedef void(^LMNetworkCallBack)(NSURLSessionDataTask * _Nullable task, _Nullable id responseData, NSError *_Nullable error);
typedef void(^LMProgressCallBack)(NSProgress *downloadProgress);
typedef NSURL * _Nullable (^LMDownloadDestinationCallBack)(NSURL *targetPath, NSURLResponse *response);
typedef void(^LMDownloadCallBack)(NSURLResponse *response, NSURL * _Nullable filePath, NSError * _Nullable error);

/// AppKey编码的Key
extern NSString *const kLMAppKeyCodecKey;
extern NSString *const kLMAppKeyIVKey;

/// APPID & APPKEY
extern NSString *const kLMAppId_RELEASE;
extern NSString *const kLMAppId_DEBUG;

/// 下面这个key是加密过的，使用的时候要解密，或者直接用LMRegionModel里的key
extern NSString *const kLMAppKey_RELEASE;
extern NSString *const kLMAppKey_DEBUG;

extern NSString *const kLMRegion_DEBUG;
extern NSString *const kLMRegion_CN_Test;
extern NSString *const kLMRegion_CN_Prev;
extern NSString *const kLMRegion_CN;
extern NSString *const kLMRegion_US;
extern NSString *const kLMRegion_Other;
extern NSString *const KLMRegion_EUROPE;
extern NSString *const KLMRegion_KR;
extern NSString *const kLMRegion_RU;
///4.0.5之前的旧数据
extern NSString* const OldRegionModelKey;

@interface LMRegionModel <NSCoding,NSCopying>: NSObject

@property (nonatomic, copy) NSString *serverCode;
@property (nonatomic, copy) NSString *countryCode;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *server;
@property (nonatomic, copy) NSString *coapServer;
@property (nonatomic, copy) NSString *supportDeviceArea;
@property (nonatomic, copy) NSString *appId;
@property (nonatomic, copy) NSString *appKey;
@property (nonatomic, strong) NSArray *subordinates;
@property (nonatomic, strong) NSString *appImgPrefix;
@property (nonatomic, strong) NSString *staticsResPrefix;
//@property (nonatomic, strong) NSDictionary *allName;


/// homekit模式下，需要返回homekit
- (NSString *)getRealSupportDeviceArea;

@end


@interface LMNetwork : NSObject

/// 网络链接状态
@property(nonatomic, assign, readonly) LMNetworkReachabilityStatus networkStatus;


//LMNetwork初始化时会初始化
@property(nonatomic, copy,readonly)NSString *baseUrl;//域名

@property(nonatomic, copy,readonly)NSString *coapServer;//设备入网的域名

@property(nonatomic, copy,readonly)NSString *appId;

@property(nonatomic, copy,readonly)NSString *appKey;

@property(nonatomic, copy,readonly)NSString *imageBaseUrl;

@property(nonatomic, copy,readonly)NSString *prdBaseUrl; // PRD平台图片CDN前缀

@property(nonatomic, copy,readonly)NSString *countryCode;

@property(nonatomic, copy,readonly)NSString *serverCode;
@property(nonatomic, copy,readonly)NSString *supportDeviceArea;

//header里的字段：登陆成功后能拿到
@property(nonatomic, copy)NSString *token;

@property(nonatomic, copy)NSString *userId;

@property(nonatomic, copy)NSString *lang;//app语言

@property(nonatomic, copy)NSString *udid;//手机的udid

@property(nonatomic, copy)NSString *clientId;//推送

@property(nonatomic, copy)NSString *pushToken;//推送token

@property(nonatomic, assign)LMNetworkHeaderType headerType;//header类型

/// 当前域名，图片服务器，countryCode等信息
@property(nonatomic, strong)LMRegionModel *regionModel;

///当前的域名，主要注意这里返回会带https，主要是给AI接口用的
@property(nonatomic, strong)NSString *currentDomain;

+ (instancetype)sharedInstance;

/// GET请求，网络请求回调在主队列，不推荐使用
/// @param URLString path
/// @param parameters 参数
/// @param callBack 回调
- (NSUInteger)GET:(NSString*)URLString
       parameters:(nullable id)parameters
         callBack:(LMNetworkCallBack)callBack;

/// GET请求，用这个方法，网络请求回调在后台队列，不会卡住主队列, UI操作请自行切换到主队列
/// @param URLString path
/// @param parameters 参数
/// @param callBack 回调
- (NSUInteger)GET:(NSString*)URLString
       parameters:(nullable id)parameters
callBackToBackQueue:(LMNetworkCallBack)callBack;

///GET请求，对http原始错误和AIot错误进行了合并，网络请求回调在主队列，不推荐使用
/// @param URLString path
/// @param parameters 参数
/// @param callBack 回调
- (NSUInteger)ErrorHandleGET:(NSString*)URLString
                  parameters:(nullable id)parameters
                    callBack:(LMNetworkCallBack)callBack;

/// GET请求，对http原始错误和AIot错误进行了合并，用这个方法，网络请求回调在后台队列，不会卡住主队列, UI操作请自行切换到主队列
/// @param URLString path
/// @param parameters 参数
/// @param callBack 回调
- (NSUInteger)ErrorHandleGET:(NSString*)URLString
                  parameters:(nullable id)parameters
         callBackToBackQueue:(LMNetworkCallBack)callBack;

/// GET请求，网络请求回调在主队列，不推荐使用
/// @param URLString path
/// @param parameters 参数
/// @param callBack 回调
- (NSUInteger)GET:(NSString*)URLString
       parameters:(nullable id)parameters
          headers:(nullable NSDictionary*)headers
         callBack:(LMNetworkCallBack)callBack;
 

/// GET请求，用这个方法，网络请求回调在后台队列，不会卡住主队列, UI操作请自行切换到主队列
/// @param URLString path
/// @param parameters 参数
/// @param callBack 回调
- (NSUInteger)GET:(NSString*)URLString
       parameters:(nullable id)parameters
          headers:(nullable NSDictionary*)headers
callBackToBackQueue:(LMNetworkCallBack)callBack;

/// GET请求，网络请求回调在主队列，不推荐使用
/// @param URLString path
/// @param parameters 参数
/// @param callBack 回调
- (NSUInteger)GET:(NSString*)URLString
       parameters:(nullable id)parameters
          headers:(nullable NSDictionary*)headers
          timeout:(NSInteger)timeout
         callBack:(LMNetworkCallBack)callBack;

/// GET请求，用这个方法，网络请求回调在后台队列，不会卡住主队列, UI操作请自行切换到主队列
/// @param URLString path
/// @param parameters 参数
/// @param callBack 回调
- (NSUInteger)GET:(NSString*)URLString
       parameters:(nullable id)parameters
          headers:(nullable NSDictionary*)headers
          timeout:(NSInteger)timeout
callBackToBackQueue:(LMNetworkCallBack)callBack;


/// POST请求，网络请求回调在主队列，不推荐使用
/// @param URLString path
/// @param parameters 参数
/// @param callBack 回调
- (NSUInteger)POST:(NSString*)URLString
        parameters:(nullable id)parameters
          callBack:(LMNetworkCallBack)callBack;


/// POST请求，用这个方法，网络请求回调在后台队列，不会卡住主队列, UI操作请自行切换到主队列
/// @param URLString path
/// @param parameters 参数
/// @param callBack 回调
- (NSUInteger)POST:(NSString*)URLString
        parameters:(id)parameters
callBackToBackQueue:(LMNetworkCallBack)callBack;

///POST请求，对http原始错误和AIot错误进行了合并，用这个方法，网络请求回调在后台队列，不会卡住主队列, UI操作请自行切换到主队列
/// @param URLString path
/// @param parameters 参数
/// @param callBack 回调
- (NSUInteger)ErrorHandlePOST:(NSString*)URLString
                   parameters:(nullable id)parameters
          callBackToBackQueue:(LMNetworkCallBack)callBack;

///
/// POST请求，对http原始错误和AIot错误进行了合并，网络请求回调在主队列，不推荐使用
/// @param URLString path
/// @param parameters 参数
/// @param callBack 回调
- (NSUInteger)ErrorHandlePOST:(NSString*)URLString
                   parameters:(nullable id)parameters
                     callBack:(LMNetworkCallBack)callBack;


/// POST请求，网络请求回调在主队列，不推荐使用
/// @param URLString path
/// @param parameters 参数
/// @param callBack 回调
- (NSUInteger)POST:(NSString*)URLString
       parameters:(id)parameters
          headers:(nullable NSDictionary*)headers
         callBack:(LMNetworkCallBack)callBack;

/// POST请求，用这个方法，网络请求回调在后台队列，不会卡住主队列, UI操作请自行切换到主队列
/// @param URLString path
/// @param parameters 参数
/// @param callBack 回调
- (NSUInteger)POST:(NSString*)URLString
       parameters:(id)parameters
          headers:(nullable NSDictionary*)headers
callBackToBackQueue:(LMNetworkCallBack)callBack;

/// POST请求，网络请求回调在主队列，不推荐使用
/// @param URLString path
/// @param parameters 参数
/// @param callBack 回调
- (NSUInteger)POST:(NSString*)URLString
       parameters:(id)parameters
          headers:(nullable NSDictionary*)headers
           timeout:(NSInteger)timeout
         callBack:(LMNetworkCallBack)callBack;
 
/// POST请求，用这个方法，网络请求回调在后台队列，不会卡住主队列, UI操作请自行切换到主队列
/// @param URLString path
/// @param parameters 参数
/// @param callBack 回调
- (NSUInteger)POST:(NSString*)URLString
       parameters:(id)parameters
          headers:(nullable NSDictionary*)headers
           timeout:(NSInteger)timeout
callBackToBackQueue:(LMNetworkCallBack)callBack;

 
/**
 创建一个下载请求
 
 @param request 下载请求request.
 @param downloadProgressBlock 下载进度更新回调，调用队列是session queue而不是main queue
 @param destination 下载目的地回调。确定最终下载结果保存的文件URL，这个block入参是target path（默认路径）和response，返回值是最终保存的文件URL。下载过程中用到的临时文件，会在文件移动到block返回的目标文件后自动删除。
 @param completionHandler 下载完成后的回调。
 
 */
- (NSURLSessionDownloadTask *)downloadTaskWithRequest:(NSURLRequest *)request
                             progress:(nullable LMProgressCallBack)downloadProgressBlock
                          destination:(nullable LMDownloadDestinationCallBack)destination
                    completionHandler:(nullable LMDownloadCallBack)completionHandler;

/// 上传图片到腾讯云
/// @param image 图片
/// @param filePath 上传图片地址
/// @param completion 结果回调 secretKey-加密的秘钥
- (NSURLSessionDataTask *)uploadImageToCloudWithImage:(UIImage *)image
                           filePath:(NSString *)filePath
                         completion:(void(^)(NSError *error, NSDictionary *result, NSString *secretKey))completion;

/// 从腾讯云下载图片 - 会缓存到沙盒 (Library -> Cache)
/// @param imgUrl 下载地址
/// @param secretKey 解密私钥
/// @param completion 完成回调
- (NSURLSessionDownloadTask *)downImageFromCloudWithImgUrl:(NSString *)imgUrl
                           secretKey:(NSString *)secretKey
                          completion:(void(^)(UIImage *image, NSString *imgUrl, NSError *error))completion;

/// 从腾讯云下载图片 - 会缓存到沙盒
/// @param cachePath 缓存地址
/// @param imgUrl 下载地址
/// @param secretKeyData 解密私钥
/// @param completion 完成回调
- (NSURLSessionDownloadTask *)downImageFromCloudWithCachePath:(NSString *)cachePath
                                                       imgUrl:(NSString *)imgUrl
                                                secretKeyData:(NSData *)secretKeyData
                                                   completion:(void(^)(UIImage *image, NSString *imgUrl, NSError *error))completion;

/// 从腾讯云下载图片 - 会缓存到沙盒 (Library -> Cache)
/// @param imgUrl 下载地址
/// @param secretKeyData 解密私钥
/// @param completion 完成回调
- (NSURLSessionDownloadTask *)downImageFromCloudWithImgUrl:(NSString *)imgUrl
                                             secretKeyData:(NSData *)secretKeyData
                                                completion:(void(^)(UIImage *image, NSString *imgUrl, NSError *error))completion;

/// 文件下载
/// @param savePath 下载文件保存路径
/// @param downLoadUrl 下载文件的url
/// @param progressBlock 下载文件的进度显示
/// @param completion 下载文件的回调
- (void)downLoadFileWithSavaPath:(NSString *)savePath downLoadUrl:(NSString *)downLoadUrl withDownLoadProgress:(LMProgressCallBack)progressBlock completion:(LMDownloadCallBack)completion;

///仅仅生成一个task
- (NSURLSessionDataTask*)generateDataTaskRequestType:(LMRequestType)requesetType
                                                path:(NSString*)path
                                          parameters:(id)parameters
                                             headers:(NSDictionary*)headers
                                     timeoutInterval:(NSTimeInterval)timeoutInterval
                                comletionQueueIsMain:(BOOL)mainQueue
                                            callBack:(LMNetworkCallBack)callBack;


/// 检测网络是否真正可用 (比如连上未插入网线的路由器WiFi时,网络并不真正可用)
/// @param completion 完成回调
+ (void)checkNetworkActuallyAvailable:(void(^)(BOOL available,NSError* error))completion;
  
@end

NS_ASSUME_NONNULL_END

