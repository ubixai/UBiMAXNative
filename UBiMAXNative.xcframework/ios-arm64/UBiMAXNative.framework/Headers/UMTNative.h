//
//  UMTNative.h
//  UMTNative
//
//  Created by UbiX on 2024/7/3.
//

#import <UBiMAXAdSDK/UMTAd.h>

NS_ASSUME_NONNULL_BEGIN
@class UMTNative;
@class UMTNativeOffer;

@protocol UMTNativeLoadDelegate <UMTAdDelegate>
/// 信息流加载成功
- (void)umtNativeAd:(UMTNative *)native didLoadWithAds:(NSArray <UMTNativeOffer*> *)ads;
/// 信息流加载失败
- (void)umtNativeAd:(UMTNative *)native didLoadFailed:(UMTError *)error;

@end



@interface UMTNative : UMTAd

@property (nonatomic) CGSize size;

@end

NS_ASSUME_NONNULL_END
