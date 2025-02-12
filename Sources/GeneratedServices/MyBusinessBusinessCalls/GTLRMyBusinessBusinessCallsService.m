// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   My Business Business Calls API (mybusinessbusinesscalls/v1)
// Description:
//   The My Business Business Calls API manages business calls information of a
//   location on Google.
// Documentation:
//   https://developers.google.com/my-business/

#import <GoogleAPIClientForREST/GTLRMyBusinessBusinessCalls.h>

@implementation GTLRMyBusinessBusinessCallsService

- (instancetype)init {
  self = [super init];
  if (self) {
    // From discovery.
    self.rootURLString = @"https://mybusinessbusinesscalls.googleapis.com/";
    self.batchPath = @"batch";
    self.prettyPrintQueryParameterNames = @[ @"prettyPrint" ];
  }
  return self;
}

@end
