/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class BKSSignal, NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>, NSString;

@interface BKSProcessAssertion : NSObject {
    id _acquisitionHandler;
    NSString *_bundleIdentifier;
    unsigned int _flags;
    id _invalidationHandler;
    BKSSignal *_invalidationSignal;
    NSString *_name;
    int _pid;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned int _reason;
    NSObject<OS_xpc_object> *_serverConnection;
    BOOL _valid;
}

@property(copy) id acquisitionHandler;
@property unsigned int flags;
@property(copy) id invalidationHandler;
@property(copy) NSString * name;
@property(readonly) unsigned int reason;
@property(readonly) BOOL valid;

+ (id)NameForReason:(unsigned int)arg1;

- (id)acquisitionHandler;
- (void)dealloc;
- (unsigned int)flags;
- (id)init;
- (id)initWithBundleIdentifier:(id)arg1 flags:(unsigned int)arg2 reason:(unsigned int)arg3 name:(id)arg4 withHandler:(id)arg5;
- (id)initWithPID:(int)arg1 flags:(unsigned int)arg2 reason:(unsigned int)arg3 name:(id)arg4 withHandler:(id)arg5;
- (void)invalidate;
- (id)invalidationHandler;
- (id)name;
- (void)queue_acquireAssertion;
- (void)queue_invalidate:(BOOL)arg1;
- (void)queue_notifyAssertionAcquired:(BOOL)arg1;
- (void)queue_registerWithServer;
- (void)queue_updateAssertion;
- (unsigned int)reason;
- (void)setAcquisitionHandler:(id)arg1;
- (void)setFlags:(unsigned int)arg1;
- (void)setInvalidationHandler:(id)arg1;
- (void)setName:(id)arg1;
- (void)setReason:(unsigned int)arg1;
- (void)setValid:(BOOL)arg1;
- (BOOL)valid;

@end
