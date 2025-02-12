// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Analytics Hub API (analyticshub/v1beta1)
// Description:
//   Exchange data and analytics assets securely and efficiently.
// Documentation:
//   https://cloud.google.com/bigquery/docs/analytics-hub-introduction

#import <GoogleAPIClientForREST/GTLRObject.h>

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRAnalyticsHub_AuditConfig;
@class GTLRAnalyticsHub_AuditLogConfig;
@class GTLRAnalyticsHub_BigQueryDatasetSource;
@class GTLRAnalyticsHub_Binding;
@class GTLRAnalyticsHub_DataExchange;
@class GTLRAnalyticsHub_DataProvider;
@class GTLRAnalyticsHub_DestinationDataset;
@class GTLRAnalyticsHub_DestinationDataset_Labels;
@class GTLRAnalyticsHub_DestinationDatasetReference;
@class GTLRAnalyticsHub_Expr;
@class GTLRAnalyticsHub_GetPolicyOptions;
@class GTLRAnalyticsHub_Listing;
@class GTLRAnalyticsHub_Location;
@class GTLRAnalyticsHub_Location_Labels;
@class GTLRAnalyticsHub_Location_Metadata;
@class GTLRAnalyticsHub_Policy;
@class GTLRAnalyticsHub_Publisher;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Constants - For some of the classes' properties below.

// ----------------------------------------------------------------------------
// GTLRAnalyticsHub_AuditLogConfig.logType

/**
 *  Admin reads. Example: CloudIAM getIamPolicy
 *
 *  Value: "ADMIN_READ"
 */
FOUNDATION_EXTERN NSString * const kGTLRAnalyticsHub_AuditLogConfig_LogType_AdminRead;
/**
 *  Data reads. Example: CloudSQL Users list
 *
 *  Value: "DATA_READ"
 */
FOUNDATION_EXTERN NSString * const kGTLRAnalyticsHub_AuditLogConfig_LogType_DataRead;
/**
 *  Data writes. Example: CloudSQL Users create
 *
 *  Value: "DATA_WRITE"
 */
FOUNDATION_EXTERN NSString * const kGTLRAnalyticsHub_AuditLogConfig_LogType_DataWrite;
/**
 *  Default case. Should never be this.
 *
 *  Value: "LOG_TYPE_UNSPECIFIED"
 */
FOUNDATION_EXTERN NSString * const kGTLRAnalyticsHub_AuditLogConfig_LogType_LogTypeUnspecified;

// ----------------------------------------------------------------------------
// GTLRAnalyticsHub_Listing.categories

/** Value: "CATEGORY_ADVERTISING_AND_MARKETING" */
FOUNDATION_EXTERN NSString * const kGTLRAnalyticsHub_Listing_Categories_CategoryAdvertisingAndMarketing;
/** Value: "CATEGORY_CLIMATE_AND_ENVIRONMENT" */
FOUNDATION_EXTERN NSString * const kGTLRAnalyticsHub_Listing_Categories_CategoryClimateAndEnvironment;
/** Value: "CATEGORY_COMMERCE" */
FOUNDATION_EXTERN NSString * const kGTLRAnalyticsHub_Listing_Categories_CategoryCommerce;
/** Value: "CATEGORY_DEMOGRAPHICS" */
FOUNDATION_EXTERN NSString * const kGTLRAnalyticsHub_Listing_Categories_CategoryDemographics;
/** Value: "CATEGORY_ECONOMICS" */
FOUNDATION_EXTERN NSString * const kGTLRAnalyticsHub_Listing_Categories_CategoryEconomics;
/** Value: "CATEGORY_EDUCATION" */
FOUNDATION_EXTERN NSString * const kGTLRAnalyticsHub_Listing_Categories_CategoryEducation;
/** Value: "CATEGORY_ENERGY" */
FOUNDATION_EXTERN NSString * const kGTLRAnalyticsHub_Listing_Categories_CategoryEnergy;
/** Value: "CATEGORY_FINANCIAL" */
FOUNDATION_EXTERN NSString * const kGTLRAnalyticsHub_Listing_Categories_CategoryFinancial;
/** Value: "CATEGORY_GAMING" */
FOUNDATION_EXTERN NSString * const kGTLRAnalyticsHub_Listing_Categories_CategoryGaming;
/** Value: "CATEGORY_GEOSPATIAL" */
FOUNDATION_EXTERN NSString * const kGTLRAnalyticsHub_Listing_Categories_CategoryGeospatial;
/** Value: "CATEGORY_HEALTHCARE_AND_LIFE_SCIENCE" */
FOUNDATION_EXTERN NSString * const kGTLRAnalyticsHub_Listing_Categories_CategoryHealthcareAndLifeScience;
/** Value: "CATEGORY_MEDIA" */
FOUNDATION_EXTERN NSString * const kGTLRAnalyticsHub_Listing_Categories_CategoryMedia;
/** Value: "CATEGORY_OTHERS" */
FOUNDATION_EXTERN NSString * const kGTLRAnalyticsHub_Listing_Categories_CategoryOthers;
/** Value: "CATEGORY_PUBLIC_SECTOR" */
FOUNDATION_EXTERN NSString * const kGTLRAnalyticsHub_Listing_Categories_CategoryPublicSector;
/** Value: "CATEGORY_RETAIL" */
FOUNDATION_EXTERN NSString * const kGTLRAnalyticsHub_Listing_Categories_CategoryRetail;
/** Value: "CATEGORY_SCIENCE_AND_RESEARCH" */
FOUNDATION_EXTERN NSString * const kGTLRAnalyticsHub_Listing_Categories_CategoryScienceAndResearch;
/** Value: "CATEGORY_SPORTS" */
FOUNDATION_EXTERN NSString * const kGTLRAnalyticsHub_Listing_Categories_CategorySports;
/** Value: "CATEGORY_TRANSPORTATION_AND_LOGISTICS" */
FOUNDATION_EXTERN NSString * const kGTLRAnalyticsHub_Listing_Categories_CategoryTransportationAndLogistics;
/** Value: "CATEGORY_TRAVEL_AND_TOURISM" */
FOUNDATION_EXTERN NSString * const kGTLRAnalyticsHub_Listing_Categories_CategoryTravelAndTourism;
/** Value: "CATEGORY_UNSPECIFIED" */
FOUNDATION_EXTERN NSString * const kGTLRAnalyticsHub_Listing_Categories_CategoryUnspecified;

// ----------------------------------------------------------------------------
// GTLRAnalyticsHub_Listing.state

/**
 *  Subscribable state. Users with dataexchange.listings.subscribe permission
 *  can subscribe to this listing.
 *
 *  Value: "ACTIVE"
 */
FOUNDATION_EXTERN NSString * const kGTLRAnalyticsHub_Listing_State_Active;
/**
 *  Default value. This value is unused.
 *
 *  Value: "STATE_UNSPECIFIED"
 */
FOUNDATION_EXTERN NSString * const kGTLRAnalyticsHub_Listing_State_StateUnspecified;

/**
 *  Specifies the audit configuration for a service. The configuration
 *  determines which permission types are logged, and what identities, if any,
 *  are exempted from logging. An AuditConfig must have one or more
 *  AuditLogConfigs. If there are AuditConfigs for both `allServices` and a
 *  specific service, the union of the two AuditConfigs is used for that
 *  service: the log_types specified in each AuditConfig are enabled, and the
 *  exempted_members in each AuditLogConfig are exempted. Example Policy with
 *  multiple AuditConfigs: { "audit_configs": [ { "service": "allServices",
 *  "audit_log_configs": [ { "log_type": "DATA_READ", "exempted_members": [
 *  "user:jose\@example.com" ] }, { "log_type": "DATA_WRITE" }, { "log_type":
 *  "ADMIN_READ" } ] }, { "service": "sampleservice.googleapis.com",
 *  "audit_log_configs": [ { "log_type": "DATA_READ" }, { "log_type":
 *  "DATA_WRITE", "exempted_members": [ "user:aliya\@example.com" ] } ] } ] }
 *  For sampleservice, this policy enables DATA_READ, DATA_WRITE and ADMIN_READ
 *  logging. It also exempts `jose\@example.com` from DATA_READ logging, and
 *  `aliya\@example.com` from DATA_WRITE logging.
 */
@interface GTLRAnalyticsHub_AuditConfig : GTLRObject

/** The configuration for logging of each type of permission. */
@property(nonatomic, strong, nullable) NSArray<GTLRAnalyticsHub_AuditLogConfig *> *auditLogConfigs;

/**
 *  Specifies a service that will be enabled for audit logging. For example,
 *  `storage.googleapis.com`, `cloudsql.googleapis.com`. `allServices` is a
 *  special value that covers all services.
 */
@property(nonatomic, copy, nullable) NSString *service;

@end


/**
 *  Provides the configuration for logging a type of permissions. Example: {
 *  "audit_log_configs": [ { "log_type": "DATA_READ", "exempted_members": [
 *  "user:jose\@example.com" ] }, { "log_type": "DATA_WRITE" } ] } This enables
 *  'DATA_READ' and 'DATA_WRITE' logging, while exempting jose\@example.com from
 *  DATA_READ logging.
 */
@interface GTLRAnalyticsHub_AuditLogConfig : GTLRObject

/**
 *  Specifies the identities that do not cause logging for this type of
 *  permission. Follows the same format of Binding.members.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *exemptedMembers;

/**
 *  The log type that this config enables.
 *
 *  Likely values:
 *    @arg @c kGTLRAnalyticsHub_AuditLogConfig_LogType_AdminRead Admin reads.
 *        Example: CloudIAM getIamPolicy (Value: "ADMIN_READ")
 *    @arg @c kGTLRAnalyticsHub_AuditLogConfig_LogType_DataRead Data reads.
 *        Example: CloudSQL Users list (Value: "DATA_READ")
 *    @arg @c kGTLRAnalyticsHub_AuditLogConfig_LogType_DataWrite Data writes.
 *        Example: CloudSQL Users create (Value: "DATA_WRITE")
 *    @arg @c kGTLRAnalyticsHub_AuditLogConfig_LogType_LogTypeUnspecified
 *        Default case. Should never be this. (Value: "LOG_TYPE_UNSPECIFIED")
 */
@property(nonatomic, copy, nullable) NSString *logType;

@end


/**
 *  A reference to a shared dataset. It is an existing BigQuery dataset with a
 *  collection of objects such as tables and views that you want to share with
 *  subscribers. When subscriber's subscribe to a listing, Analytics Hub creates
 *  a linked dataset in the subscriber's project. A Linked dataset is an opaque,
 *  read-only BigQuery dataset that serves as a _symbolic link_ to a shared
 *  dataset.
 */
@interface GTLRAnalyticsHub_BigQueryDatasetSource : GTLRObject

/**
 *  Resource name of the dataset source for this listing. e.g.
 *  `projects/myproject/datasets/123`
 */
@property(nonatomic, copy, nullable) NSString *dataset;

@end


/**
 *  Associates `members`, or principals, with a `role`.
 */
@interface GTLRAnalyticsHub_Binding : GTLRObject

/**
 *  The condition that is associated with this binding. If the condition
 *  evaluates to `true`, then this binding applies to the current request. If
 *  the condition evaluates to `false`, then this binding does not apply to the
 *  current request. However, a different role binding might grant the same role
 *  to one or more of the principals in this binding. To learn which resources
 *  support conditions in their IAM policies, see the [IAM
 *  documentation](https://cloud.google.com/iam/help/conditions/resource-policies).
 */
@property(nonatomic, strong, nullable) GTLRAnalyticsHub_Expr *condition;

/**
 *  Specifies the principals requesting access for a Google Cloud resource.
 *  `members` can have the following values: * `allUsers`: A special identifier
 *  that represents anyone who is on the internet; with or without a Google
 *  account. * `allAuthenticatedUsers`: A special identifier that represents
 *  anyone who is authenticated with a Google account or a service account. *
 *  `user:{emailid}`: An email address that represents a specific Google
 *  account. For example, `alice\@example.com` . * `serviceAccount:{emailid}`:
 *  An email address that represents a service account. For example,
 *  `my-other-app\@appspot.gserviceaccount.com`. * `group:{emailid}`: An email
 *  address that represents a Google group. For example, `admins\@example.com`.
 *  * `deleted:user:{emailid}?uid={uniqueid}`: An email address (plus unique
 *  identifier) representing a user that has been recently deleted. For example,
 *  `alice\@example.com?uid=123456789012345678901`. If the user is recovered,
 *  this value reverts to `user:{emailid}` and the recovered user retains the
 *  role in the binding. * `deleted:serviceAccount:{emailid}?uid={uniqueid}`: An
 *  email address (plus unique identifier) representing a service account that
 *  has been recently deleted. For example,
 *  `my-other-app\@appspot.gserviceaccount.com?uid=123456789012345678901`. If
 *  the service account is undeleted, this value reverts to
 *  `serviceAccount:{emailid}` and the undeleted service account retains the
 *  role in the binding. * `deleted:group:{emailid}?uid={uniqueid}`: An email
 *  address (plus unique identifier) representing a Google group that has been
 *  recently deleted. For example,
 *  `admins\@example.com?uid=123456789012345678901`. If the group is recovered,
 *  this value reverts to `group:{emailid}` and the recovered group retains the
 *  role in the binding. * `domain:{domain}`: The G Suite domain (primary) that
 *  represents all the users of that domain. For example, `google.com` or
 *  `example.com`.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *members;

/**
 *  Role that is assigned to the list of `members`, or principals. For example,
 *  `roles/viewer`, `roles/editor`, or `roles/owner`.
 */
@property(nonatomic, copy, nullable) NSString *role;

@end


/**
 *  A data exchange is a container that lets you share data. Along with the
 *  descriptive information about the data exchange, it contains listings that
 *  reference shared datasets.
 */
@interface GTLRAnalyticsHub_DataExchange : GTLRObject

/**
 *  Optional. Description of the data exchange. The description must not contain
 *  Unicode non-characters as well as C0 and C1 control codes except tabs (HT),
 *  new lines (LF), carriage returns (CR), and page breaks (FF). Default value
 *  is an empty string. Max length: 2000 bytes.
 *
 *  Remapped to 'descriptionProperty' to avoid NSObject's 'description'.
 */
@property(nonatomic, copy, nullable) NSString *descriptionProperty;

/**
 *  Required. Human-readable display name of the data exchange. The display name
 *  must contain only Unicode letters, numbers (0-9), underscores (_), dashes
 *  (-), spaces ( ), and must not start or end with spaces. Default value is an
 *  empty string. Max length: 63 bytes.
 */
@property(nonatomic, copy, nullable) NSString *displayName;

/** Optional. Documentation describing the data exchange. */
@property(nonatomic, copy, nullable) NSString *documentation;

/**
 *  Optional. Base64 encoded image representing the data exchange. Max Size:
 *  3.0MiB Expected image dimensions are 512x512 pixels, however the API only
 *  performs validation on size of the encoded data. Note: For byte fields, the
 *  content of the fields are base64-encoded (which increases the size of the
 *  data by 33-36%) when using JSON on the wire.
 *
 *  Contains encoded binary data; GTLRBase64 can encode/decode (probably
 *  web-safe format).
 */
@property(nonatomic, copy, nullable) NSString *icon;

/**
 *  Output only. Number of listings contained in the data exchange.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *listingCount;

/**
 *  Output only. The resource name of the data exchange. e.g.
 *  `projects/myproject/locations/US/dataExchanges/123`.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Optional. Email or URL of the primary point of contact of the data exchange.
 *  Max Length: 1000 bytes.
 */
@property(nonatomic, copy, nullable) NSString *primaryContact;

@end


/**
 *  Contains details of the data provider.
 */
@interface GTLRAnalyticsHub_DataProvider : GTLRObject

/** Optional. Name of the data provider. */
@property(nonatomic, copy, nullable) NSString *name;

/** Optional. Email or URL of the data provider. Max Length: 1000 bytes. */
@property(nonatomic, copy, nullable) NSString *primaryContact;

@end


/**
 *  Defines the destination bigquery dataset.
 */
@interface GTLRAnalyticsHub_DestinationDataset : GTLRObject

/** Required. A reference that identifies the destination dataset. */
@property(nonatomic, strong, nullable) GTLRAnalyticsHub_DestinationDatasetReference *datasetReference;

/**
 *  Optional. A user-friendly description of the dataset.
 *
 *  Remapped to 'descriptionProperty' to avoid NSObject's 'description'.
 */
@property(nonatomic, copy, nullable) NSString *descriptionProperty;

/** Optional. A descriptive name for the dataset. */
@property(nonatomic, copy, nullable) NSString *friendlyName;

/**
 *  Optional. The labels associated with this dataset. You can use these to
 *  organize and group your datasets. You can set this property when inserting
 *  or updating a dataset. See
 *  https://cloud.google.com/resource-manager/docs/creating-managing-labels for
 *  more information.
 */
@property(nonatomic, strong, nullable) GTLRAnalyticsHub_DestinationDataset_Labels *labels;

/**
 *  Required. The geographic location where the dataset should reside. See
 *  https://cloud.google.com/bigquery/docs/locations for supported locations.
 */
@property(nonatomic, copy, nullable) NSString *location;

@end


/**
 *  Optional. The labels associated with this dataset. You can use these to
 *  organize and group your datasets. You can set this property when inserting
 *  or updating a dataset. See
 *  https://cloud.google.com/resource-manager/docs/creating-managing-labels for
 *  more information.
 *
 *  @note This class is documented as having more properties of NSString. Use @c
 *        -additionalJSONKeys and @c -additionalPropertyForName: to get the list
 *        of properties and then fetch them; or @c -additionalProperties to
 *        fetch them all at once.
 */
@interface GTLRAnalyticsHub_DestinationDataset_Labels : GTLRObject
@end


/**
 *  Contains the reference that identifies a destination bigquery dataset.
 */
@interface GTLRAnalyticsHub_DestinationDatasetReference : GTLRObject

/**
 *  Required. A unique ID for this dataset, without the project name. The ID
 *  must contain only letters (a-z, A-Z), numbers (0-9), or underscores (_). The
 *  maximum length is 1,024 characters.
 */
@property(nonatomic, copy, nullable) NSString *datasetId;

/** Required. The ID of the project containing this dataset. */
@property(nonatomic, copy, nullable) NSString *projectId;

@end


/**
 *  A generic empty message that you can re-use to avoid defining duplicated
 *  empty messages in your APIs. A typical example is to use it as the request
 *  or the response type of an API method. For instance: service Foo { rpc
 *  Bar(google.protobuf.Empty) returns (google.protobuf.Empty); }
 */
@interface GTLRAnalyticsHub_Empty : GTLRObject
@end


/**
 *  Represents a textual expression in the Common Expression Language (CEL)
 *  syntax. CEL is a C-like expression language. The syntax and semantics of CEL
 *  are documented at https://github.com/google/cel-spec. Example (Comparison):
 *  title: "Summary size limit" description: "Determines if a summary is less
 *  than 100 chars" expression: "document.summary.size() < 100" Example
 *  (Equality): title: "Requestor is owner" description: "Determines if
 *  requestor is the document owner" expression: "document.owner ==
 *  request.auth.claims.email" Example (Logic): title: "Public documents"
 *  description: "Determine whether the document should be publicly visible"
 *  expression: "document.type != 'private' && document.type != 'internal'"
 *  Example (Data Manipulation): title: "Notification string" description:
 *  "Create a notification string with a timestamp." expression: "'New message
 *  received at ' + string(document.create_time)" The exact variables and
 *  functions that may be referenced within an expression are determined by the
 *  service that evaluates it. See the service documentation for additional
 *  information.
 */
@interface GTLRAnalyticsHub_Expr : GTLRObject

/**
 *  Optional. Description of the expression. This is a longer text which
 *  describes the expression, e.g. when hovered over it in a UI.
 *
 *  Remapped to 'descriptionProperty' to avoid NSObject's 'description'.
 */
@property(nonatomic, copy, nullable) NSString *descriptionProperty;

/**
 *  Textual representation of an expression in Common Expression Language
 *  syntax.
 */
@property(nonatomic, copy, nullable) NSString *expression;

/**
 *  Optional. String indicating the location of the expression for error
 *  reporting, e.g. a file name and a position in the file.
 */
@property(nonatomic, copy, nullable) NSString *location;

/**
 *  Optional. Title for the expression, i.e. a short string describing its
 *  purpose. This can be used e.g. in UIs which allow to enter the expression.
 */
@property(nonatomic, copy, nullable) NSString *title;

@end


/**
 *  Request message for `GetIamPolicy` method.
 */
@interface GTLRAnalyticsHub_GetIamPolicyRequest : GTLRObject

/**
 *  OPTIONAL: A `GetPolicyOptions` object for specifying options to
 *  `GetIamPolicy`.
 */
@property(nonatomic, strong, nullable) GTLRAnalyticsHub_GetPolicyOptions *options;

@end


/**
 *  Encapsulates settings provided to GetIamPolicy.
 */
@interface GTLRAnalyticsHub_GetPolicyOptions : GTLRObject

/**
 *  Optional. The maximum policy version that will be used to format the policy.
 *  Valid values are 0, 1, and 3. Requests specifying an invalid value will be
 *  rejected. Requests for policies with any conditional role bindings must
 *  specify version 3. Policies with no conditional role bindings may specify
 *  any valid value or leave the field unset. The policy in the response might
 *  use the policy version that you specified, or it might use a lower policy
 *  version. For example, if you specify version 3, but the policy has no
 *  conditional role bindings, the response uses version 1. To learn which
 *  resources support conditions in their IAM policies, see the [IAM
 *  documentation](https://cloud.google.com/iam/help/conditions/resource-policies).
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *requestedPolicyVersion;

@end


/**
 *  Message for response to the list of data exchanges.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "dataExchanges" property. If returned as the result of a query, it
 *        should support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRAnalyticsHub_ListDataExchangesResponse : GTLRCollectionObject

/**
 *  The list of data exchanges.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRAnalyticsHub_DataExchange *> *dataExchanges;

/** A token to request the next page of results. */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

@end


/**
 *  A listing is what gets published into a data exchange that a subscriber can
 *  subscribe to. It contains a reference to the data source along with
 *  descriptive information that will help subscribers find and subscribe the
 *  data.
 */
@interface GTLRAnalyticsHub_Listing : GTLRObject

/** Required. Shared dataset i.e. BigQuery dataset source. */
@property(nonatomic, strong, nullable) GTLRAnalyticsHub_BigQueryDatasetSource *bigqueryDataset;

/** Optional. Categories of the listing. Up to two categories are allowed. */
@property(nonatomic, strong, nullable) NSArray<NSString *> *categories;

/** Optional. Details of the data provider who owns the source data. */
@property(nonatomic, strong, nullable) GTLRAnalyticsHub_DataProvider *dataProvider;

/**
 *  Optional. Short description of the listing. The description must not contain
 *  Unicode non-characters and C0 and C1 control codes except tabs (HT), new
 *  lines (LF), carriage returns (CR), and page breaks (FF). Default value is an
 *  empty string. Max length: 2000 bytes.
 *
 *  Remapped to 'descriptionProperty' to avoid NSObject's 'description'.
 */
@property(nonatomic, copy, nullable) NSString *descriptionProperty;

/**
 *  Required. Human-readable display name of the listing. The display name must
 *  contain only Unicode letters, numbers (0-9), underscores (_), dashes (-),
 *  spaces ( ), and can't start or end with spaces. Default value is an empty
 *  string. Max length: 63 bytes.
 */
@property(nonatomic, copy, nullable) NSString *displayName;

/** Optional. Documentation describing the listing. */
@property(nonatomic, copy, nullable) NSString *documentation;

/**
 *  Optional. Base64 encoded image representing the listing. Max Size: 3.0MiB
 *  Expected image dimensions are 512x512 pixels, however the API only performs
 *  validation on size of the encoded data. Note: For byte fields, the contents
 *  of the field are base64-encoded (which increases the size of the data by
 *  33-36%) when using JSON on the wire.
 *
 *  Contains encoded binary data; GTLRBase64 can encode/decode (probably
 *  web-safe format).
 */
@property(nonatomic, copy, nullable) NSString *icon;

/**
 *  Output only. The resource name of the listing. e.g.
 *  `projects/myproject/locations/US/dataExchanges/123/listings/456`
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Optional. Email or URL of the primary point of contact of the listing. Max
 *  Length: 1000 bytes.
 */
@property(nonatomic, copy, nullable) NSString *primaryContact;

/**
 *  Optional. Details of the publisher who owns the listing and who can share
 *  the source data.
 */
@property(nonatomic, strong, nullable) GTLRAnalyticsHub_Publisher *publisher;

/**
 *  Optional. Email or URL of the request access of the listing. Subscribers can
 *  use this reference to request access. Max Length: 1000 bytes.
 */
@property(nonatomic, copy, nullable) NSString *requestAccess;

/**
 *  Output only. Current state of the listing.
 *
 *  Likely values:
 *    @arg @c kGTLRAnalyticsHub_Listing_State_Active Subscribable state. Users
 *        with dataexchange.listings.subscribe permission can subscribe to this
 *        listing. (Value: "ACTIVE")
 *    @arg @c kGTLRAnalyticsHub_Listing_State_StateUnspecified Default value.
 *        This value is unused. (Value: "STATE_UNSPECIFIED")
 */
@property(nonatomic, copy, nullable) NSString *state;

@end


/**
 *  Message for response to the list of Listings.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "listings" property. If returned as the result of a query, it
 *        should support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRAnalyticsHub_ListListingsResponse : GTLRCollectionObject

/**
 *  The list of Listing.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRAnalyticsHub_Listing *> *listings;

/** A token to request the next page of results. */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

@end


/**
 *  The response message for Locations.ListLocations.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "locations" property. If returned as the result of a query, it
 *        should support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRAnalyticsHub_ListLocationsResponse : GTLRCollectionObject

/**
 *  A list of locations that matches the specified filter in the request.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRAnalyticsHub_Location *> *locations;

/** The standard List next-page token. */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

@end


/**
 *  Message for response to listing data exchanges in an organization and
 *  location.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "dataExchanges" property. If returned as the result of a query, it
 *        should support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRAnalyticsHub_ListOrgDataExchangesResponse : GTLRCollectionObject

/**
 *  The list of data exchanges.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRAnalyticsHub_DataExchange *> *dataExchanges;

/** A token to request the next page of results. */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

@end


/**
 *  A resource that represents Google Cloud Platform location.
 */
@interface GTLRAnalyticsHub_Location : GTLRObject

/**
 *  The friendly name for this location, typically a nearby city name. For
 *  example, "Tokyo".
 */
@property(nonatomic, copy, nullable) NSString *displayName;

/**
 *  Cross-service attributes for the location. For example
 *  {"cloud.googleapis.com/region": "us-east1"}
 */
@property(nonatomic, strong, nullable) GTLRAnalyticsHub_Location_Labels *labels;

/** The canonical id for this location. For example: `"us-east1"`. */
@property(nonatomic, copy, nullable) NSString *locationId;

/**
 *  Service-specific metadata. For example the available capacity at the given
 *  location.
 */
@property(nonatomic, strong, nullable) GTLRAnalyticsHub_Location_Metadata *metadata;

/**
 *  Resource name for the location, which may vary between implementations. For
 *  example: `"projects/example-project/locations/us-east1"`
 */
@property(nonatomic, copy, nullable) NSString *name;

@end


/**
 *  Cross-service attributes for the location. For example
 *  {"cloud.googleapis.com/region": "us-east1"}
 *
 *  @note This class is documented as having more properties of NSString. Use @c
 *        -additionalJSONKeys and @c -additionalPropertyForName: to get the list
 *        of properties and then fetch them; or @c -additionalProperties to
 *        fetch them all at once.
 */
@interface GTLRAnalyticsHub_Location_Labels : GTLRObject
@end


/**
 *  Service-specific metadata. For example the available capacity at the given
 *  location.
 *
 *  @note This class is documented as having more properties of any valid JSON
 *        type. Use @c -additionalJSONKeys and @c -additionalPropertyForName: to
 *        get the list of properties and then fetch them; or @c
 *        -additionalProperties to fetch them all at once.
 */
@interface GTLRAnalyticsHub_Location_Metadata : GTLRObject
@end


/**
 *  Represents the metadata of the long-running operation.
 */
@interface GTLRAnalyticsHub_OperationMetadata : GTLRObject

/** Output only. API version used to start the operation. */
@property(nonatomic, copy, nullable) NSString *apiVersion;

/**
 *  Output only. Identifies whether the user has requested cancellation of the
 *  operation. Operations that have been cancelled successfully have
 *  Operation.error value with a google.rpc.Status.code of 1, corresponding to
 *  `Code.CANCELLED`.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *cancelRequested;

/** Output only. The time the operation was created. */
@property(nonatomic, strong, nullable) GTLRDateTime *createTime;

/** Output only. The time the operation finished running. */
@property(nonatomic, strong, nullable) GTLRDateTime *endTime;

/** Output only. Human-readable status of the operation, if any. */
@property(nonatomic, copy, nullable) NSString *statusDetail;

/**
 *  Output only. Server-defined resource path for the target of the operation.
 */
@property(nonatomic, copy, nullable) NSString *target;

/** Output only. Name of the verb executed by the operation. */
@property(nonatomic, copy, nullable) NSString *verb;

@end


/**
 *  An Identity and Access Management (IAM) policy, which specifies access
 *  controls for Google Cloud resources. A `Policy` is a collection of
 *  `bindings`. A `binding` binds one or more `members`, or principals, to a
 *  single `role`. Principals can be user accounts, service accounts, Google
 *  groups, and domains (such as G Suite). A `role` is a named list of
 *  permissions; each `role` can be an IAM predefined role or a user-created
 *  custom role. For some types of Google Cloud resources, a `binding` can also
 *  specify a `condition`, which is a logical expression that allows access to a
 *  resource only if the expression evaluates to `true`. A condition can add
 *  constraints based on attributes of the request, the resource, or both. To
 *  learn which resources support conditions in their IAM policies, see the [IAM
 *  documentation](https://cloud.google.com/iam/help/conditions/resource-policies).
 *  **JSON example:** { "bindings": [ { "role":
 *  "roles/resourcemanager.organizationAdmin", "members": [
 *  "user:mike\@example.com", "group:admins\@example.com", "domain:google.com",
 *  "serviceAccount:my-project-id\@appspot.gserviceaccount.com" ] }, { "role":
 *  "roles/resourcemanager.organizationViewer", "members": [
 *  "user:eve\@example.com" ], "condition": { "title": "expirable access",
 *  "description": "Does not grant access after Sep 2020", "expression":
 *  "request.time < timestamp('2020-10-01T00:00:00.000Z')", } } ], "etag":
 *  "BwWWja0YfJA=", "version": 3 } **YAML example:** bindings: - members: -
 *  user:mike\@example.com - group:admins\@example.com - domain:google.com -
 *  serviceAccount:my-project-id\@appspot.gserviceaccount.com role:
 *  roles/resourcemanager.organizationAdmin - members: - user:eve\@example.com
 *  role: roles/resourcemanager.organizationViewer condition: title: expirable
 *  access description: Does not grant access after Sep 2020 expression:
 *  request.time < timestamp('2020-10-01T00:00:00.000Z') etag: BwWWja0YfJA=
 *  version: 3 For a description of IAM and its features, see the [IAM
 *  documentation](https://cloud.google.com/iam/docs/).
 */
@interface GTLRAnalyticsHub_Policy : GTLRObject

/** Specifies cloud audit logging configuration for this policy. */
@property(nonatomic, strong, nullable) NSArray<GTLRAnalyticsHub_AuditConfig *> *auditConfigs;

/**
 *  Associates a list of `members`, or principals, with a `role`. Optionally,
 *  may specify a `condition` that determines how and when the `bindings` are
 *  applied. Each of the `bindings` must contain at least one principal. The
 *  `bindings` in a `Policy` can refer to up to 1,500 principals; up to 250 of
 *  these principals can be Google groups. Each occurrence of a principal counts
 *  towards these limits. For example, if the `bindings` grant 50 different
 *  roles to `user:alice\@example.com`, and not to any other principal, then you
 *  can add another 1,450 principals to the `bindings` in the `Policy`.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRAnalyticsHub_Binding *> *bindings;

/**
 *  `etag` is used for optimistic concurrency control as a way to help prevent
 *  simultaneous updates of a policy from overwriting each other. It is strongly
 *  suggested that systems make use of the `etag` in the read-modify-write cycle
 *  to perform policy updates in order to avoid race conditions: An `etag` is
 *  returned in the response to `getIamPolicy`, and systems are expected to put
 *  that etag in the request to `setIamPolicy` to ensure that their change will
 *  be applied to the same version of the policy. **Important:** If you use IAM
 *  Conditions, you must include the `etag` field whenever you call
 *  `setIamPolicy`. If you omit this field, then IAM allows you to overwrite a
 *  version `3` policy with a version `1` policy, and all of the conditions in
 *  the version `3` policy are lost.
 *
 *  Contains encoded binary data; GTLRBase64 can encode/decode (probably
 *  web-safe format).
 */
@property(nonatomic, copy, nullable) NSString *ETag;

/**
 *  Specifies the format of the policy. Valid values are `0`, `1`, and `3`.
 *  Requests that specify an invalid value are rejected. Any operation that
 *  affects conditional role bindings must specify version `3`. This requirement
 *  applies to the following operations: * Getting a policy that includes a
 *  conditional role binding * Adding a conditional role binding to a policy *
 *  Changing a conditional role binding in a policy * Removing any role binding,
 *  with or without a condition, from a policy that includes conditions
 *  **Important:** If you use IAM Conditions, you must include the `etag` field
 *  whenever you call `setIamPolicy`. If you omit this field, then IAM allows
 *  you to overwrite a version `3` policy with a version `1` policy, and all of
 *  the conditions in the version `3` policy are lost. If a policy does not
 *  include any conditions, operations on that policy may specify any valid
 *  version or leave the field unset. To learn which resources support
 *  conditions in their IAM policies, see the [IAM
 *  documentation](https://cloud.google.com/iam/help/conditions/resource-policies).
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *version;

@end


/**
 *  Contains details of the listing publisher.
 */
@interface GTLRAnalyticsHub_Publisher : GTLRObject

/** Optional. Name of the listing publisher. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Optional. Email or URL of the listing publisher. Max Length: 1000 bytes.
 */
@property(nonatomic, copy, nullable) NSString *primaryContact;

@end


/**
 *  Request message for `SetIamPolicy` method.
 */
@interface GTLRAnalyticsHub_SetIamPolicyRequest : GTLRObject

/**
 *  REQUIRED: The complete policy to be applied to the `resource`. The size of
 *  the policy is limited to a few 10s of KB. An empty policy is a valid policy
 *  but certain Google Cloud services (such as Projects) might reject them.
 */
@property(nonatomic, strong, nullable) GTLRAnalyticsHub_Policy *policy;

/**
 *  OPTIONAL: A FieldMask specifying which fields of the policy to modify. Only
 *  the fields in the mask will be modified. If no mask is provided, the
 *  following default mask is used: `paths: "bindings, etag"`
 *
 *  String format is a comma-separated list of fields.
 */
@property(nonatomic, copy, nullable) NSString *updateMask;

@end


/**
 *  Message for subscribing to a listing.
 */
@interface GTLRAnalyticsHub_SubscribeListingRequest : GTLRObject

/** BigQuery destination dataset to create for the subscriber. */
@property(nonatomic, strong, nullable) GTLRAnalyticsHub_DestinationDataset *destinationDataset;

@end


/**
 *  Message for response when you subscribe to a listing. Empty for now.
 */
@interface GTLRAnalyticsHub_SubscribeListingResponse : GTLRObject
@end


/**
 *  Request message for `TestIamPermissions` method.
 */
@interface GTLRAnalyticsHub_TestIamPermissionsRequest : GTLRObject

/**
 *  The set of permissions to check for the `resource`. Permissions with
 *  wildcards (such as `*` or `storage.*`) are not allowed. For more information
 *  see [IAM Overview](https://cloud.google.com/iam/docs/overview#permissions).
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *permissions;

@end


/**
 *  Response message for `TestIamPermissions` method.
 */
@interface GTLRAnalyticsHub_TestIamPermissionsResponse : GTLRObject

/**
 *  A subset of `TestPermissionsRequest.permissions` that the caller is allowed.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *permissions;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
