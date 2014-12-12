//
//  iAdsAddon.h
//

#import "CodeaAddon.h"

#import <Foundation/Foundation.h>
#import <iAd/iAd.h>

// This class conforms to the ADBannerViewDelegate Protocols

@interface iAdsAddon : CodeaAddon<ADBannerViewDelegate>

+ (instancetype) sharedInstance;

@property (atomic, assign) BOOL isBannerVisible;
@property (atomic, assign) BOOL showBannerFromTop;
@property (atomic, assign) BOOL adsAllowed;

@property (strong, nonatomic) ADBannerView *bannerView;

@end

