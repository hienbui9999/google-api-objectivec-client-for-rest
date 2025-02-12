// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Transcoder API (transcoder/v1)
// Description:
//   This API converts video files into formats suitable for consumer
//   distribution.
// Documentation:
//   https://cloud.google.com/transcoder/docs/

#import <GoogleAPIClientForREST/GTLRTranscoder.h>

// ----------------------------------------------------------------------------
// Authorization scope

NSString * const kGTLRAuthScopeTranscoderCloudPlatform = @"https://www.googleapis.com/auth/cloud-platform";

// ----------------------------------------------------------------------------
//   GTLRTranscoderService
//

@implementation GTLRTranscoderService

- (instancetype)init {
  self = [super init];
  if (self) {
    // From discovery.
    self.rootURLString = @"https://transcoder.googleapis.com/";
    self.batchPath = @"batch";
    self.prettyPrintQueryParameterNames = @[ @"prettyPrint" ];
  }
  return self;
}

@end
