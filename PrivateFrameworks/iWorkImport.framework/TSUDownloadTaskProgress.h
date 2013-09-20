/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUDownloadTaskProgress : NSObject {
    BOOL _isActive;
    long long _totalBytesDownloaded;
    long long _totalBytesExpectedToBeDownloaded;
}

@property BOOL isActive;
@property long long totalBytesDownloaded;
@property long long totalBytesExpectedToBeDownloaded;

- (id)description;
- (BOOL)isActive;
- (void)setIsActive:(BOOL)arg1;
- (void)setTotalBytesDownloaded:(long long)arg1;
- (void)setTotalBytesExpectedToBeDownloaded:(long long)arg1;
- (long long)totalBytesDownloaded;
- (long long)totalBytesExpectedToBeDownloaded;

@end