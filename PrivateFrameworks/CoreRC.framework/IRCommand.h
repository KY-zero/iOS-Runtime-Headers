/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
 */

@class IRProtocol;

@interface IRCommand : NSObject {
    BOOL _isRepeat;
    unsigned long long _payload;
    IRProtocol *_protocol;
    unsigned long long _timestamp;
}

@property(readonly) BOOL isRepeat;
@property(readonly) unsigned long long payload;
@property(readonly) IRProtocol * protocol;
@property unsigned long long timestamp;

- (void)dealloc;
- (id)init;
- (id)initWithProtocol:(id)arg1 payload:(unsigned long long)arg2 repeat:(BOOL)arg3;
- (BOOL)isRepeat;
- (unsigned long long)payload;
- (id)protocol;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;

@end