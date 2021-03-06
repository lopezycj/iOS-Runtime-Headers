/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class MFMessage, MFMessageLibrary;

@interface _MFDALibraryConsumerFactory : NSObject <MFMessageDataConsumerFactory> {
    MFMessageLibrary *_library;
    MFMessage *_message;
}

@property(retain) MFMessageLibrary * library;
@property(retain) MFMessage * message;

- (id)dataConsumerForPart:(id)arg1;
- (void)dealloc;
- (id)library;
- (id)message;
- (void)setLibrary:(id)arg1;
- (void)setMessage:(id)arg1;

@end
