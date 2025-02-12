// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Analytics Hub API (analyticshub/v1beta1)
// Description:
//   Exchange data and analytics assets securely and efficiently.
// Documentation:
//   https://cloud.google.com/bigquery/docs/analytics-hub-introduction

#import <GoogleAPIClientForREST/GTLRAnalyticsHubObjects.h>

// ----------------------------------------------------------------------------
// Constants

// GTLRAnalyticsHub_AuditLogConfig.logType
NSString * const kGTLRAnalyticsHub_AuditLogConfig_LogType_AdminRead = @"ADMIN_READ";
NSString * const kGTLRAnalyticsHub_AuditLogConfig_LogType_DataRead = @"DATA_READ";
NSString * const kGTLRAnalyticsHub_AuditLogConfig_LogType_DataWrite = @"DATA_WRITE";
NSString * const kGTLRAnalyticsHub_AuditLogConfig_LogType_LogTypeUnspecified = @"LOG_TYPE_UNSPECIFIED";

// GTLRAnalyticsHub_Listing.categories
NSString * const kGTLRAnalyticsHub_Listing_Categories_CategoryAdvertisingAndMarketing = @"CATEGORY_ADVERTISING_AND_MARKETING";
NSString * const kGTLRAnalyticsHub_Listing_Categories_CategoryClimateAndEnvironment = @"CATEGORY_CLIMATE_AND_ENVIRONMENT";
NSString * const kGTLRAnalyticsHub_Listing_Categories_CategoryCommerce = @"CATEGORY_COMMERCE";
NSString * const kGTLRAnalyticsHub_Listing_Categories_CategoryDemographics = @"CATEGORY_DEMOGRAPHICS";
NSString * const kGTLRAnalyticsHub_Listing_Categories_CategoryEconomics = @"CATEGORY_ECONOMICS";
NSString * const kGTLRAnalyticsHub_Listing_Categories_CategoryEducation = @"CATEGORY_EDUCATION";
NSString * const kGTLRAnalyticsHub_Listing_Categories_CategoryEnergy = @"CATEGORY_ENERGY";
NSString * const kGTLRAnalyticsHub_Listing_Categories_CategoryFinancial = @"CATEGORY_FINANCIAL";
NSString * const kGTLRAnalyticsHub_Listing_Categories_CategoryGaming = @"CATEGORY_GAMING";
NSString * const kGTLRAnalyticsHub_Listing_Categories_CategoryGeospatial = @"CATEGORY_GEOSPATIAL";
NSString * const kGTLRAnalyticsHub_Listing_Categories_CategoryHealthcareAndLifeScience = @"CATEGORY_HEALTHCARE_AND_LIFE_SCIENCE";
NSString * const kGTLRAnalyticsHub_Listing_Categories_CategoryMedia = @"CATEGORY_MEDIA";
NSString * const kGTLRAnalyticsHub_Listing_Categories_CategoryOthers = @"CATEGORY_OTHERS";
NSString * const kGTLRAnalyticsHub_Listing_Categories_CategoryPublicSector = @"CATEGORY_PUBLIC_SECTOR";
NSString * const kGTLRAnalyticsHub_Listing_Categories_CategoryRetail = @"CATEGORY_RETAIL";
NSString * const kGTLRAnalyticsHub_Listing_Categories_CategoryScienceAndResearch = @"CATEGORY_SCIENCE_AND_RESEARCH";
NSString * const kGTLRAnalyticsHub_Listing_Categories_CategorySports = @"CATEGORY_SPORTS";
NSString * const kGTLRAnalyticsHub_Listing_Categories_CategoryTransportationAndLogistics = @"CATEGORY_TRANSPORTATION_AND_LOGISTICS";
NSString * const kGTLRAnalyticsHub_Listing_Categories_CategoryTravelAndTourism = @"CATEGORY_TRAVEL_AND_TOURISM";
NSString * const kGTLRAnalyticsHub_Listing_Categories_CategoryUnspecified = @"CATEGORY_UNSPECIFIED";

// GTLRAnalyticsHub_Listing.state
NSString * const kGTLRAnalyticsHub_Listing_State_Active        = @"ACTIVE";
NSString * const kGTLRAnalyticsHub_Listing_State_StateUnspecified = @"STATE_UNSPECIFIED";

// ----------------------------------------------------------------------------
//
//   GTLRAnalyticsHub_AuditConfig
//

@implementation GTLRAnalyticsHub_AuditConfig
@dynamic auditLogConfigs, service;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"auditLogConfigs" : [GTLRAnalyticsHub_AuditLogConfig class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAnalyticsHub_AuditLogConfig
//

@implementation GTLRAnalyticsHub_AuditLogConfig
@dynamic exemptedMembers, logType;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"exemptedMembers" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAnalyticsHub_BigQueryDatasetSource
//

@implementation GTLRAnalyticsHub_BigQueryDatasetSource
@dynamic dataset;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAnalyticsHub_Binding
//

@implementation GTLRAnalyticsHub_Binding
@dynamic condition, members, role;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"members" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAnalyticsHub_DataExchange
//

@implementation GTLRAnalyticsHub_DataExchange
@dynamic descriptionProperty, displayName, documentation, icon, listingCount,
         name, primaryContact;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"descriptionProperty" : @"description" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAnalyticsHub_DataProvider
//

@implementation GTLRAnalyticsHub_DataProvider
@dynamic name, primaryContact;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAnalyticsHub_DestinationDataset
//

@implementation GTLRAnalyticsHub_DestinationDataset
@dynamic datasetReference, descriptionProperty, friendlyName, labels, location;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"descriptionProperty" : @"description" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAnalyticsHub_DestinationDataset_Labels
//

@implementation GTLRAnalyticsHub_DestinationDataset_Labels

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAnalyticsHub_DestinationDatasetReference
//

@implementation GTLRAnalyticsHub_DestinationDatasetReference
@dynamic datasetId, projectId;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAnalyticsHub_Empty
//

@implementation GTLRAnalyticsHub_Empty
@end


// ----------------------------------------------------------------------------
//
//   GTLRAnalyticsHub_Expr
//

@implementation GTLRAnalyticsHub_Expr
@dynamic descriptionProperty, expression, location, title;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"descriptionProperty" : @"description" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAnalyticsHub_GetIamPolicyRequest
//

@implementation GTLRAnalyticsHub_GetIamPolicyRequest
@dynamic options;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAnalyticsHub_GetPolicyOptions
//

@implementation GTLRAnalyticsHub_GetPolicyOptions
@dynamic requestedPolicyVersion;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAnalyticsHub_ListDataExchangesResponse
//

@implementation GTLRAnalyticsHub_ListDataExchangesResponse
@dynamic dataExchanges, nextPageToken;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"dataExchanges" : [GTLRAnalyticsHub_DataExchange class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"dataExchanges";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAnalyticsHub_Listing
//

@implementation GTLRAnalyticsHub_Listing
@dynamic bigqueryDataset, categories, dataProvider, descriptionProperty,
         displayName, documentation, icon, name, primaryContact, publisher,
         requestAccess, state;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"descriptionProperty" : @"description" };
}

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"categories" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAnalyticsHub_ListListingsResponse
//

@implementation GTLRAnalyticsHub_ListListingsResponse
@dynamic listings, nextPageToken;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"listings" : [GTLRAnalyticsHub_Listing class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"listings";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAnalyticsHub_ListLocationsResponse
//

@implementation GTLRAnalyticsHub_ListLocationsResponse
@dynamic locations, nextPageToken;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"locations" : [GTLRAnalyticsHub_Location class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"locations";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAnalyticsHub_ListOrgDataExchangesResponse
//

@implementation GTLRAnalyticsHub_ListOrgDataExchangesResponse
@dynamic dataExchanges, nextPageToken;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"dataExchanges" : [GTLRAnalyticsHub_DataExchange class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"dataExchanges";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAnalyticsHub_Location
//

@implementation GTLRAnalyticsHub_Location
@dynamic displayName, labels, locationId, metadata, name;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAnalyticsHub_Location_Labels
//

@implementation GTLRAnalyticsHub_Location_Labels

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAnalyticsHub_Location_Metadata
//

@implementation GTLRAnalyticsHub_Location_Metadata

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAnalyticsHub_OperationMetadata
//

@implementation GTLRAnalyticsHub_OperationMetadata
@dynamic apiVersion, cancelRequested, createTime, endTime, statusDetail, target,
         verb;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAnalyticsHub_Policy
//

@implementation GTLRAnalyticsHub_Policy
@dynamic auditConfigs, bindings, ETag, version;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"ETag" : @"etag" };
}

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"auditConfigs" : [GTLRAnalyticsHub_AuditConfig class],
    @"bindings" : [GTLRAnalyticsHub_Binding class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAnalyticsHub_Publisher
//

@implementation GTLRAnalyticsHub_Publisher
@dynamic name, primaryContact;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAnalyticsHub_SetIamPolicyRequest
//

@implementation GTLRAnalyticsHub_SetIamPolicyRequest
@dynamic policy, updateMask;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAnalyticsHub_SubscribeListingRequest
//

@implementation GTLRAnalyticsHub_SubscribeListingRequest
@dynamic destinationDataset;
@end


// ----------------------------------------------------------------------------
//
//   GTLRAnalyticsHub_SubscribeListingResponse
//

@implementation GTLRAnalyticsHub_SubscribeListingResponse
@end


// ----------------------------------------------------------------------------
//
//   GTLRAnalyticsHub_TestIamPermissionsRequest
//

@implementation GTLRAnalyticsHub_TestIamPermissionsRequest
@dynamic permissions;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"permissions" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRAnalyticsHub_TestIamPermissionsResponse
//

@implementation GTLRAnalyticsHub_TestIamPermissionsResponse
@dynamic permissions;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"permissions" : [NSString class]
  };
  return map;
}

@end
