// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Web Risk API (webrisk/v1)
// Documentation:
//   https://cloud.google.com/web-risk/

#import <GoogleAPIClientForREST/GTLRWebRiskObjects.h>

// ----------------------------------------------------------------------------
// Constants

// GTLRWebRisk_GoogleCloudWebriskV1ComputeThreatListDiffResponse.responseType
NSString * const kGTLRWebRisk_GoogleCloudWebriskV1ComputeThreatListDiffResponse_ResponseType_Diff = @"DIFF";
NSString * const kGTLRWebRisk_GoogleCloudWebriskV1ComputeThreatListDiffResponse_ResponseType_Reset = @"RESET";
NSString * const kGTLRWebRisk_GoogleCloudWebriskV1ComputeThreatListDiffResponse_ResponseType_ResponseTypeUnspecified = @"RESPONSE_TYPE_UNSPECIFIED";

// GTLRWebRisk_GoogleCloudWebriskV1SearchHashesResponseThreatHash.threatTypes
NSString * const kGTLRWebRisk_GoogleCloudWebriskV1SearchHashesResponseThreatHash_ThreatTypes_Malware = @"MALWARE";
NSString * const kGTLRWebRisk_GoogleCloudWebriskV1SearchHashesResponseThreatHash_ThreatTypes_SocialEngineering = @"SOCIAL_ENGINEERING";
NSString * const kGTLRWebRisk_GoogleCloudWebriskV1SearchHashesResponseThreatHash_ThreatTypes_ThreatTypeUnspecified = @"THREAT_TYPE_UNSPECIFIED";
NSString * const kGTLRWebRisk_GoogleCloudWebriskV1SearchHashesResponseThreatHash_ThreatTypes_UnwantedSoftware = @"UNWANTED_SOFTWARE";

// GTLRWebRisk_GoogleCloudWebriskV1SearchUrisResponseThreatUri.threatTypes
NSString * const kGTLRWebRisk_GoogleCloudWebriskV1SearchUrisResponseThreatUri_ThreatTypes_Malware = @"MALWARE";
NSString * const kGTLRWebRisk_GoogleCloudWebriskV1SearchUrisResponseThreatUri_ThreatTypes_SocialEngineering = @"SOCIAL_ENGINEERING";
NSString * const kGTLRWebRisk_GoogleCloudWebriskV1SearchUrisResponseThreatUri_ThreatTypes_ThreatTypeUnspecified = @"THREAT_TYPE_UNSPECIFIED";
NSString * const kGTLRWebRisk_GoogleCloudWebriskV1SearchUrisResponseThreatUri_ThreatTypes_UnwantedSoftware = @"UNWANTED_SOFTWARE";

// GTLRWebRisk_GoogleCloudWebriskV1Submission.threatTypes
NSString * const kGTLRWebRisk_GoogleCloudWebriskV1Submission_ThreatTypes_Malware = @"MALWARE";
NSString * const kGTLRWebRisk_GoogleCloudWebriskV1Submission_ThreatTypes_SocialEngineering = @"SOCIAL_ENGINEERING";
NSString * const kGTLRWebRisk_GoogleCloudWebriskV1Submission_ThreatTypes_ThreatTypeUnspecified = @"THREAT_TYPE_UNSPECIFIED";
NSString * const kGTLRWebRisk_GoogleCloudWebriskV1Submission_ThreatTypes_UnwantedSoftware = @"UNWANTED_SOFTWARE";

// GTLRWebRisk_GoogleCloudWebriskV1SubmitUriMetadata.state
NSString * const kGTLRWebRisk_GoogleCloudWebriskV1SubmitUriMetadata_State_Cancelled = @"CANCELLED";
NSString * const kGTLRWebRisk_GoogleCloudWebriskV1SubmitUriMetadata_State_Failed = @"FAILED";
NSString * const kGTLRWebRisk_GoogleCloudWebriskV1SubmitUriMetadata_State_Running = @"RUNNING";
NSString * const kGTLRWebRisk_GoogleCloudWebriskV1SubmitUriMetadata_State_StateUnspecified = @"STATE_UNSPECIFIED";
NSString * const kGTLRWebRisk_GoogleCloudWebriskV1SubmitUriMetadata_State_Succeeded = @"SUCCEEDED";

// ----------------------------------------------------------------------------
//
//   GTLRWebRisk_GoogleCloudWebriskV1ComputeThreatListDiffResponse
//

@implementation GTLRWebRisk_GoogleCloudWebriskV1ComputeThreatListDiffResponse
@dynamic additions, checksum, newVersionToken, recommendedNextDiff, removals,
         responseType;
@end


// ----------------------------------------------------------------------------
//
//   GTLRWebRisk_GoogleCloudWebriskV1ComputeThreatListDiffResponseChecksum
//

@implementation GTLRWebRisk_GoogleCloudWebriskV1ComputeThreatListDiffResponseChecksum
@dynamic sha256;
@end


// ----------------------------------------------------------------------------
//
//   GTLRWebRisk_GoogleCloudWebriskV1RawHashes
//

@implementation GTLRWebRisk_GoogleCloudWebriskV1RawHashes
@dynamic prefixSize, rawHashes;
@end


// ----------------------------------------------------------------------------
//
//   GTLRWebRisk_GoogleCloudWebriskV1RawIndices
//

@implementation GTLRWebRisk_GoogleCloudWebriskV1RawIndices
@dynamic indices;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"indices" : [NSNumber class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRWebRisk_GoogleCloudWebriskV1RiceDeltaEncoding
//

@implementation GTLRWebRisk_GoogleCloudWebriskV1RiceDeltaEncoding
@dynamic encodedData, entryCount, firstValue, riceParameter;
@end


// ----------------------------------------------------------------------------
//
//   GTLRWebRisk_GoogleCloudWebriskV1SearchHashesResponse
//

@implementation GTLRWebRisk_GoogleCloudWebriskV1SearchHashesResponse
@dynamic negativeExpireTime, threats;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"threats" : [GTLRWebRisk_GoogleCloudWebriskV1SearchHashesResponseThreatHash class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRWebRisk_GoogleCloudWebriskV1SearchHashesResponseThreatHash
//

@implementation GTLRWebRisk_GoogleCloudWebriskV1SearchHashesResponseThreatHash
@dynamic expireTime, hashProperty, threatTypes;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"hashProperty" : @"hash" };
}

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"threatTypes" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRWebRisk_GoogleCloudWebriskV1SearchUrisResponse
//

@implementation GTLRWebRisk_GoogleCloudWebriskV1SearchUrisResponse
@dynamic threat;
@end


// ----------------------------------------------------------------------------
//
//   GTLRWebRisk_GoogleCloudWebriskV1SearchUrisResponseThreatUri
//

@implementation GTLRWebRisk_GoogleCloudWebriskV1SearchUrisResponseThreatUri
@dynamic expireTime, threatTypes;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"threatTypes" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRWebRisk_GoogleCloudWebriskV1Submission
//

@implementation GTLRWebRisk_GoogleCloudWebriskV1Submission
@dynamic threatTypes, uri;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"threatTypes" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRWebRisk_GoogleCloudWebriskV1SubmitUriMetadata
//

@implementation GTLRWebRisk_GoogleCloudWebriskV1SubmitUriMetadata
@dynamic createTime, state, updateTime;
@end


// ----------------------------------------------------------------------------
//
//   GTLRWebRisk_GoogleCloudWebriskV1SubmitUriRequest
//

@implementation GTLRWebRisk_GoogleCloudWebriskV1SubmitUriRequest
@dynamic submission;
@end


// ----------------------------------------------------------------------------
//
//   GTLRWebRisk_GoogleCloudWebriskV1ThreatEntryAdditions
//

@implementation GTLRWebRisk_GoogleCloudWebriskV1ThreatEntryAdditions
@dynamic rawHashes, riceHashes;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"rawHashes" : [GTLRWebRisk_GoogleCloudWebriskV1RawHashes class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRWebRisk_GoogleCloudWebriskV1ThreatEntryRemovals
//

@implementation GTLRWebRisk_GoogleCloudWebriskV1ThreatEntryRemovals
@dynamic rawIndices, riceIndices;
@end


// ----------------------------------------------------------------------------
//
//   GTLRWebRisk_GoogleLongrunningCancelOperationRequest
//

@implementation GTLRWebRisk_GoogleLongrunningCancelOperationRequest
@end


// ----------------------------------------------------------------------------
//
//   GTLRWebRisk_GoogleLongrunningListOperationsResponse
//

@implementation GTLRWebRisk_GoogleLongrunningListOperationsResponse
@dynamic nextPageToken, operations;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"operations" : [GTLRWebRisk_GoogleLongrunningOperation class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"operations";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRWebRisk_GoogleLongrunningOperation
//

@implementation GTLRWebRisk_GoogleLongrunningOperation
@dynamic done, error, metadata, name, response;
@end


// ----------------------------------------------------------------------------
//
//   GTLRWebRisk_GoogleLongrunningOperation_Metadata
//

@implementation GTLRWebRisk_GoogleLongrunningOperation_Metadata

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRWebRisk_GoogleLongrunningOperation_Response
//

@implementation GTLRWebRisk_GoogleLongrunningOperation_Response

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRWebRisk_GoogleProtobufEmpty
//

@implementation GTLRWebRisk_GoogleProtobufEmpty
@end


// ----------------------------------------------------------------------------
//
//   GTLRWebRisk_GoogleRpcStatus
//

@implementation GTLRWebRisk_GoogleRpcStatus
@dynamic code, details, message;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"details" : [GTLRWebRisk_GoogleRpcStatus_Details_Item class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRWebRisk_GoogleRpcStatus_Details_Item
//

@implementation GTLRWebRisk_GoogleRpcStatus_Details_Item

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end
