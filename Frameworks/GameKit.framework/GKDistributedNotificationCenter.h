/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class CPDistributedNotificationCenter;

@interface GKDistributedNotificationCenter : NSObject {
    id _internal;
}

@property(retain) CPDistributedNotificationCenter * notificationCenter;

+ (id)defaultCenter;

- (void)addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3;
- (void)dealloc;
- (id)init;
- (id)notificationCenter;
- (void)postNotificationName:(id)arg1 userInfo:(id)arg2 toBundleIdentifier:(id)arg3;
- (void)postNotificationName:(id)arg1 userInfo:(id)arg2;
- (void)postNotificationName:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)setNotificationCenter:(id)arg1;

@end