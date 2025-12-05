#if __IPHONE_OS_VERSION_MIN_REQUIRED
#import <UIKit/UIKit.h>
#else
#import <Foundation/Foundation.h>
#endif

//! Project version number for SSignalKit.
FOUNDATION_EXPORT double SSignalKitVersionNumber;

//! Project version string for SSignalKit.
FOUNDATION_EXPORT const unsigned char SSignalKitVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <HYSSignalKit/PublicHeader.h>

#import <HYSSignalKit/SAtomic.h>
#import <HYSSignalKit/SBag.h>
#import <HYSSignalKit/SSignal.h>
#import <HYSSignalKit/SSubscriber.h>
#import <HYSSignalKit/SDisposable.h>
#import <HYSSignalKit/SDisposableSet.h>
#import <HYSSignalKit/SBlockDisposable.h>
#import <HYSSignalKit/SMetaDisposable.h>
#import <HYSSignalKit/SSignal+Single.h>
#import <HYSSignalKit/SSignal+Mapping.h>
#import <HYSSignalKit/SSignal+Meta.h>
#import <HYSSignalKit/SSignal+Dispatch.h>
#import <HYSSignalKit/SSignal+Catch.h>
#import <HYSSignalKit/SSignal+SideEffects.h>
#import <HYSSignalKit/SSignal+Combine.h>
#import <HYSSignalKit/SSignal+Timing.h>
#import <HYSSignalKit/SSignal+Take.h>
#import <HYSSignalKit/SSignal+Pipe.h>
#import <HYSSignalKit/STimer.h>
#import <HYSSignalKit/SVariable.h>
#import <HYSSignalKit/SQueueLocalObject.h>
