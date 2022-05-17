// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Cloud Run Admin API (run/v2)
// Description:
//   Deploy and manage user provided container images that scale automatically
//   based on incoming requests. The Cloud Run Admin API v1 follows the Knative
//   Serving API specification, while v2 is aligned with Google Cloud AIP-based
//   API standards, as described in https://google.aip.dev/.
// Documentation:
//   https://cloud.google.com/run/

#import <GoogleAPIClientForREST/GTLRQuery.h>

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

#import "GTLRCloudRunObjects.h"

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

/**
 *  Parent class for other Cloud Run query classes.
 */
@interface GTLRCloudRunQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(nonatomic, copy, nullable) NSString *fields;

@end

/**
 *  Create a Job.
 *
 *  Method: run.projects.locations.jobs.create
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudRunCloudPlatform
 */
@interface GTLRCloudRunQuery_ProjectsLocationsJobsCreate : GTLRCloudRunQuery

/**
 *  Required. The unique identifier for the Job. The name of the job becomes
 *  {parent}/jobs/{job_id}.
 */
@property(nonatomic, copy, nullable) NSString *jobId;

/**
 *  Required. The location and project in which this Job should be created.
 *  Format: projects/{projectnumber}/locations/{location}
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Indicates that the request should be validated and default values populated,
 *  without persisting the request or creating any resources.
 */
@property(nonatomic, assign) BOOL validateOnly;

/**
 *  Fetches a @c GTLRCloudRun_GoogleLongrunningOperation.
 *
 *  Create a Job.
 *
 *  @param object The @c GTLRCloudRun_GoogleCloudRunV2Job to include in the
 *    query.
 *  @param parent Required. The location and project in which this Job should be
 *    created. Format: projects/{projectnumber}/locations/{location}
 *
 *  @return GTLRCloudRunQuery_ProjectsLocationsJobsCreate
 */
+ (instancetype)queryWithObject:(GTLRCloudRun_GoogleCloudRunV2Job *)object
                         parent:(NSString *)parent;

@end

/**
 *  Deletes a Job.
 *
 *  Method: run.projects.locations.jobs.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudRunCloudPlatform
 */
@interface GTLRCloudRunQuery_ProjectsLocationsJobsDelete : GTLRCloudRunQuery

/**
 *  A system-generated fingerprint for this version of the resource. May be used
 *  to detect modification conflict during updates.
 */
@property(nonatomic, copy, nullable) NSString *ETag;

/**
 *  If set to true, the Job and its Executions will be deleted no matter whether
 *  any Executions are still running or not. If set to false or unset, the Job
 *  and its Executions can only be deleted if there are no running Executions.
 *  Any running Execution will fail the deletion.
 */
@property(nonatomic, assign) BOOL force;

/**
 *  Required. The full name of the Job. Format:
 *  projects/{projectnumber}/locations/{location}/jobs/{job}
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Indicates that the request should be validated without actually deleting any
 *  resources.
 */
@property(nonatomic, assign) BOOL validateOnly;

/**
 *  Fetches a @c GTLRCloudRun_GoogleLongrunningOperation.
 *
 *  Deletes a Job.
 *
 *  @param name Required. The full name of the Job. Format:
 *    projects/{projectnumber}/locations/{location}/jobs/{job}
 *
 *  @return GTLRCloudRunQuery_ProjectsLocationsJobsDelete
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Delete an Execution.
 *
 *  Method: run.projects.locations.jobs.executions.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudRunCloudPlatform
 */
@interface GTLRCloudRunQuery_ProjectsLocationsJobsExecutionsDelete : GTLRCloudRunQuery

/**
 *  A system-generated fingerprint for this version of the resource. This may be
 *  used to detect modification conflict during updates.
 */
@property(nonatomic, copy, nullable) NSString *ETag;

/**
 *  Required. The name of the Execution to delete. Format:
 *  projects/{project}/locations/{location}/jobs/{job}/executions/{execution}
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Indicates that the request should be validated without actually deleting any
 *  resources.
 */
@property(nonatomic, assign) BOOL validateOnly;

/**
 *  Fetches a @c GTLRCloudRun_GoogleLongrunningOperation.
 *
 *  Delete an Execution.
 *
 *  @param name Required. The name of the Execution to delete. Format:
 *    projects/{project}/locations/{location}/jobs/{job}/executions/{execution}
 *
 *  @return GTLRCloudRunQuery_ProjectsLocationsJobsExecutionsDelete
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Gets information about a Execution.
 *
 *  Method: run.projects.locations.jobs.executions.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudRunCloudPlatform
 */
@interface GTLRCloudRunQuery_ProjectsLocationsJobsExecutionsGet : GTLRCloudRunQuery

/**
 *  Required. The full name of the Execution. Format:
 *  projects/{project}/locations/{location}/jobs/{job}/executions/{execution}
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudRun_GoogleCloudRunV2Execution.
 *
 *  Gets information about a Execution.
 *
 *  @param name Required. The full name of the Execution. Format:
 *    projects/{project}/locations/{location}/jobs/{job}/executions/{execution}
 *
 *  @return GTLRCloudRunQuery_ProjectsLocationsJobsExecutionsGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  List Executions from a Job.
 *
 *  Method: run.projects.locations.jobs.executions.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudRunCloudPlatform
 */
@interface GTLRCloudRunQuery_ProjectsLocationsJobsExecutionsList : GTLRCloudRunQuery

/** Maximum number of Executions to return in this call. */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  A page token received from a previous call to ListExecutions. All other
 *  parameters must match.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Required. The Execution from which the Executions should be listed. To list
 *  all Executions across Jobs, use "-" instead of Job name. Format:
 *  projects/{project}/locations/{location}/jobs/{job}
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  If true, returns deleted (but unexpired) resources along with active ones.
 */
@property(nonatomic, assign) BOOL showDeleted;

/**
 *  Fetches a @c GTLRCloudRun_GoogleCloudRunV2ListExecutionsResponse.
 *
 *  List Executions from a Job.
 *
 *  @param parent Required. The Execution from which the Executions should be
 *    listed. To list all Executions across Jobs, use "-" instead of Job name.
 *    Format: projects/{project}/locations/{location}/jobs/{job}
 *
 *  @return GTLRCloudRunQuery_ProjectsLocationsJobsExecutionsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithParent:(NSString *)parent;

@end

/**
 *  Gets information about a Task.
 *
 *  Method: run.projects.locations.jobs.executions.tasks.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudRunCloudPlatform
 */
@interface GTLRCloudRunQuery_ProjectsLocationsJobsExecutionsTasksGet : GTLRCloudRunQuery

/**
 *  Required. The full name of the Task. Format:
 *  projects/{project}/locations/{location}/jobs/{job}/executions/{execution}/tasks/{task}
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudRun_GoogleCloudRunV2Task.
 *
 *  Gets information about a Task.
 *
 *  @param name Required. The full name of the Task. Format:
 *    projects/{project}/locations/{location}/jobs/{job}/executions/{execution}/tasks/{task}
 *
 *  @return GTLRCloudRunQuery_ProjectsLocationsJobsExecutionsTasksGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  List Tasks from an Execution of a Job.
 *
 *  Method: run.projects.locations.jobs.executions.tasks.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudRunCloudPlatform
 */
@interface GTLRCloudRunQuery_ProjectsLocationsJobsExecutionsTasksList : GTLRCloudRunQuery

/** Maximum number of Tasks to return in this call. */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  A page token received from a previous call to ListTasks. All other
 *  parameters must match.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Required. The Execution from which the Tasks should be listed. To list all
 *  Tasks across Executions of a Job, use "-" instead of Execution name. To list
 *  all Tasks across Jobs, use "-" instead of Job name. Format:
 *  projects/{project}/locations/{location}/jobs/{job}/executions/{execution}
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  If true, returns deleted (but unexpired) resources along with active ones.
 */
@property(nonatomic, assign) BOOL showDeleted;

/**
 *  Fetches a @c GTLRCloudRun_GoogleCloudRunV2ListTasksResponse.
 *
 *  List Tasks from an Execution of a Job.
 *
 *  @param parent Required. The Execution from which the Tasks should be listed.
 *    To list all Tasks across Executions of a Job, use "-" instead of Execution
 *    name. To list all Tasks across Jobs, use "-" instead of Job name. Format:
 *    projects/{project}/locations/{location}/jobs/{job}/executions/{execution}
 *
 *  @return GTLRCloudRunQuery_ProjectsLocationsJobsExecutionsTasksList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithParent:(NSString *)parent;

@end

/**
 *  Gets information about a Job.
 *
 *  Method: run.projects.locations.jobs.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudRunCloudPlatform
 */
@interface GTLRCloudRunQuery_ProjectsLocationsJobsGet : GTLRCloudRunQuery

/**
 *  Required. The full name of the Job. Format:
 *  projects/{projectnumber}/locations/{location}/jobs/{job}
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudRun_GoogleCloudRunV2Job.
 *
 *  Gets information about a Job.
 *
 *  @param name Required. The full name of the Job. Format:
 *    projects/{projectnumber}/locations/{location}/jobs/{job}
 *
 *  @return GTLRCloudRunQuery_ProjectsLocationsJobsGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Get the IAM Access Control policy currently in effect for the given Job.
 *  This result does not include any inherited policies.
 *
 *  Method: run.projects.locations.jobs.getIamPolicy
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudRunCloudPlatform
 */
@interface GTLRCloudRunQuery_ProjectsLocationsJobsGetIamPolicy : GTLRCloudRunQuery

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
 */
@property(nonatomic, assign) NSInteger optionsRequestedPolicyVersion;

/**
 *  REQUIRED: The resource for which the policy is being requested. See
 *  [Resource names](https://cloud.google.com/apis/design/resource_names) for
 *  the appropriate value for this field.
 */
@property(nonatomic, copy, nullable) NSString *resource;

/**
 *  Fetches a @c GTLRCloudRun_GoogleIamV1Policy.
 *
 *  Get the IAM Access Control policy currently in effect for the given Job.
 *  This result does not include any inherited policies.
 *
 *  @param resource REQUIRED: The resource for which the policy is being
 *    requested. See [Resource
 *    names](https://cloud.google.com/apis/design/resource_names) for the
 *    appropriate value for this field.
 *
 *  @return GTLRCloudRunQuery_ProjectsLocationsJobsGetIamPolicy
 */
+ (instancetype)queryWithResource:(NSString *)resource;

@end

/**
 *  List Jobs.
 *
 *  Method: run.projects.locations.jobs.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudRunCloudPlatform
 */
@interface GTLRCloudRunQuery_ProjectsLocationsJobsList : GTLRCloudRunQuery

/** Maximum number of Jobs to return in this call. */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  A page token received from a previous call to ListJobs. All other parameters
 *  must match.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Required. The location and project to list resources on. Format:
 *  projects/{projectnumber}/locations/{location}
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  If true, returns deleted (but unexpired) resources along with active ones.
 */
@property(nonatomic, assign) BOOL showDeleted;

/**
 *  Fetches a @c GTLRCloudRun_GoogleCloudRunV2ListJobsResponse.
 *
 *  List Jobs.
 *
 *  @param parent Required. The location and project to list resources on.
 *    Format: projects/{projectnumber}/locations/{location}
 *
 *  @return GTLRCloudRunQuery_ProjectsLocationsJobsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithParent:(NSString *)parent;

@end

/**
 *  Updates a Job.
 *
 *  Method: run.projects.locations.jobs.patch
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudRunCloudPlatform
 */
@interface GTLRCloudRunQuery_ProjectsLocationsJobsPatch : GTLRCloudRunQuery

/**
 *  If set to true, and if the Job does not exist, it will create a new one.
 *  Caller must have both create and update permissions for this call if this is
 *  set to true.
 */
@property(nonatomic, assign) BOOL allowMissing;

/**
 *  The fully qualified name of this Job. Format:
 *  projects/{project}/locations/{location}/jobs/{job}
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Indicates that the request should be validated and default values populated,
 *  without persisting the request or updating any resources.
 */
@property(nonatomic, assign) BOOL validateOnly;

/**
 *  Fetches a @c GTLRCloudRun_GoogleLongrunningOperation.
 *
 *  Updates a Job.
 *
 *  @param object The @c GTLRCloudRun_GoogleCloudRunV2Job to include in the
 *    query.
 *  @param name The fully qualified name of this Job. Format:
 *    projects/{project}/locations/{location}/jobs/{job}
 *
 *  @return GTLRCloudRunQuery_ProjectsLocationsJobsPatch
 */
+ (instancetype)queryWithObject:(GTLRCloudRun_GoogleCloudRunV2Job *)object
                           name:(NSString *)name;

@end

/**
 *  Triggers creation of a new Execution of this Job.
 *
 *  Method: run.projects.locations.jobs.run
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudRunCloudPlatform
 */
@interface GTLRCloudRunQuery_ProjectsLocationsJobsRun : GTLRCloudRunQuery

/**
 *  Required. The full name of the Job. Format:
 *  projects/{projectnumber}/locations/{location}/jobs/{job}
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudRun_GoogleLongrunningOperation.
 *
 *  Triggers creation of a new Execution of this Job.
 *
 *  @param object The @c GTLRCloudRun_GoogleCloudRunV2RunJobRequest to include
 *    in the query.
 *  @param name Required. The full name of the Job. Format:
 *    projects/{projectnumber}/locations/{location}/jobs/{job}
 *
 *  @return GTLRCloudRunQuery_ProjectsLocationsJobsRun
 */
+ (instancetype)queryWithObject:(GTLRCloudRun_GoogleCloudRunV2RunJobRequest *)object
                           name:(NSString *)name;

@end

/**
 *  Sets the IAM Access control policy for the specified Job. Overwrites any
 *  existing policy.
 *
 *  Method: run.projects.locations.jobs.setIamPolicy
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudRunCloudPlatform
 */
@interface GTLRCloudRunQuery_ProjectsLocationsJobsSetIamPolicy : GTLRCloudRunQuery

/**
 *  REQUIRED: The resource for which the policy is being specified. See
 *  [Resource names](https://cloud.google.com/apis/design/resource_names) for
 *  the appropriate value for this field.
 */
@property(nonatomic, copy, nullable) NSString *resource;

/**
 *  Fetches a @c GTLRCloudRun_GoogleIamV1Policy.
 *
 *  Sets the IAM Access control policy for the specified Job. Overwrites any
 *  existing policy.
 *
 *  @param object The @c GTLRCloudRun_GoogleIamV1SetIamPolicyRequest to include
 *    in the query.
 *  @param resource REQUIRED: The resource for which the policy is being
 *    specified. See [Resource
 *    names](https://cloud.google.com/apis/design/resource_names) for the
 *    appropriate value for this field.
 *
 *  @return GTLRCloudRunQuery_ProjectsLocationsJobsSetIamPolicy
 */
+ (instancetype)queryWithObject:(GTLRCloudRun_GoogleIamV1SetIamPolicyRequest *)object
                       resource:(NSString *)resource;

@end

/**
 *  Returns permissions that a caller has on the specified Project. There are no
 *  permissions required for making this API call.
 *
 *  Method: run.projects.locations.jobs.testIamPermissions
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudRunCloudPlatform
 */
@interface GTLRCloudRunQuery_ProjectsLocationsJobsTestIamPermissions : GTLRCloudRunQuery

/**
 *  REQUIRED: The resource for which the policy detail is being requested. See
 *  [Resource names](https://cloud.google.com/apis/design/resource_names) for
 *  the appropriate value for this field.
 */
@property(nonatomic, copy, nullable) NSString *resource;

/**
 *  Fetches a @c GTLRCloudRun_GoogleIamV1TestIamPermissionsResponse.
 *
 *  Returns permissions that a caller has on the specified Project. There are no
 *  permissions required for making this API call.
 *
 *  @param object The @c GTLRCloudRun_GoogleIamV1TestIamPermissionsRequest to
 *    include in the query.
 *  @param resource REQUIRED: The resource for which the policy detail is being
 *    requested. See [Resource
 *    names](https://cloud.google.com/apis/design/resource_names) for the
 *    appropriate value for this field.
 *
 *  @return GTLRCloudRunQuery_ProjectsLocationsJobsTestIamPermissions
 */
+ (instancetype)queryWithObject:(GTLRCloudRun_GoogleIamV1TestIamPermissionsRequest *)object
                       resource:(NSString *)resource;

@end

/**
 *  Deletes a long-running operation. This method indicates that the client is
 *  no longer interested in the operation result. It does not cancel the
 *  operation. If the server doesn't support this method, it returns
 *  `google.rpc.Code.UNIMPLEMENTED`.
 *
 *  Method: run.projects.locations.operations.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudRunCloudPlatform
 */
@interface GTLRCloudRunQuery_ProjectsLocationsOperationsDelete : GTLRCloudRunQuery

/** The name of the operation resource to be deleted. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudRun_GoogleProtobufEmpty.
 *
 *  Deletes a long-running operation. This method indicates that the client is
 *  no longer interested in the operation result. It does not cancel the
 *  operation. If the server doesn't support this method, it returns
 *  `google.rpc.Code.UNIMPLEMENTED`.
 *
 *  @param name The name of the operation resource to be deleted.
 *
 *  @return GTLRCloudRunQuery_ProjectsLocationsOperationsDelete
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Gets the latest state of a long-running operation. Clients can use this
 *  method to poll the operation result at intervals as recommended by the API
 *  service.
 *
 *  Method: run.projects.locations.operations.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudRunCloudPlatform
 */
@interface GTLRCloudRunQuery_ProjectsLocationsOperationsGet : GTLRCloudRunQuery

/** The name of the operation resource. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudRun_GoogleLongrunningOperation.
 *
 *  Gets the latest state of a long-running operation. Clients can use this
 *  method to poll the operation result at intervals as recommended by the API
 *  service.
 *
 *  @param name The name of the operation resource.
 *
 *  @return GTLRCloudRunQuery_ProjectsLocationsOperationsGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Lists operations that match the specified filter in the request. If the
 *  server doesn't support this method, it returns `UNIMPLEMENTED`. NOTE: the
 *  `name` binding allows API services to override the binding to use different
 *  resource name schemes, such as `users/ * /operations`. To override the
 *  binding, API services can add a binding such as `"/v1/{name=users/
 *  *}/operations"` to their service configuration. For backwards compatibility,
 *  the default name includes the operations collection id, however overriding
 *  users must ensure the name binding is the parent resource, without the
 *  operations collection id.
 *
 *  Method: run.projects.locations.operations.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudRunCloudPlatform
 */
@interface GTLRCloudRunQuery_ProjectsLocationsOperationsList : GTLRCloudRunQuery

/**
 *  Optional. A filter for matching the completed or in-progress operations. The
 *  supported formats of *filter* are: To query for only completed operations:
 *  done:true To query for only ongoing operations: done:false Must be empty to
 *  query for all of the latest operations for the given parent project.
 */
@property(nonatomic, copy, nullable) NSString *filter;

/** Required. To query for all of the operations for a project. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  The maximum number of records that should be returned. Requested page size
 *  cannot exceed 100. If not set or set to less than or equal to 0, the default
 *  page size is 100. .
 */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  Token identifying which result to start with, which is returned by a
 *  previous list call.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Fetches a @c GTLRCloudRun_GoogleLongrunningListOperationsResponse.
 *
 *  Lists operations that match the specified filter in the request. If the
 *  server doesn't support this method, it returns `UNIMPLEMENTED`. NOTE: the
 *  `name` binding allows API services to override the binding to use different
 *  resource name schemes, such as `users/ * /operations`. To override the
 *  binding, API services can add a binding such as `"/v1/{name=users/
 *  *}/operations"` to their service configuration. For backwards compatibility,
 *  the default name includes the operations collection id, however overriding
 *  users must ensure the name binding is the parent resource, without the
 *  operations collection id.
 *
 *  @param name Required. To query for all of the operations for a project.
 *
 *  @return GTLRCloudRunQuery_ProjectsLocationsOperationsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Creates a new Service in a given project and location.
 *
 *  Method: run.projects.locations.services.create
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudRunCloudPlatform
 */
@interface GTLRCloudRunQuery_ProjectsLocationsServicesCreate : GTLRCloudRunQuery

/**
 *  Required. The location and project in which this service should be created.
 *  Format: projects/{projectnumber}/locations/{location}
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Required. The unique identifier for the Service. The name of the service
 *  becomes {parent}/services/{service_id}.
 */
@property(nonatomic, copy, nullable) NSString *serviceId;

/**
 *  Indicates that the request should be validated and default values populated,
 *  without persisting the request or creating any resources.
 */
@property(nonatomic, assign) BOOL validateOnly;

/**
 *  Fetches a @c GTLRCloudRun_GoogleLongrunningOperation.
 *
 *  Creates a new Service in a given project and location.
 *
 *  @param object The @c GTLRCloudRun_GoogleCloudRunV2Service to include in the
 *    query.
 *  @param parent Required. The location and project in which this service
 *    should be created. Format: projects/{projectnumber}/locations/{location}
 *
 *  @return GTLRCloudRunQuery_ProjectsLocationsServicesCreate
 */
+ (instancetype)queryWithObject:(GTLRCloudRun_GoogleCloudRunV2Service *)object
                         parent:(NSString *)parent;

@end

/**
 *  Deletes a Service. This will cause the Service to stop serving traffic and
 *  will delete all revisions.
 *
 *  Method: run.projects.locations.services.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudRunCloudPlatform
 */
@interface GTLRCloudRunQuery_ProjectsLocationsServicesDelete : GTLRCloudRunQuery

/**
 *  A system-generated fingerprint for this version of the resource. May be used
 *  to detect modification conflict during updates.
 */
@property(nonatomic, copy, nullable) NSString *ETag;

/**
 *  Required. The full name of the Service. Format:
 *  projects/{projectnumber}/locations/{location}/services/{service}
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Indicates that the request should be validated without actually deleting any
 *  resources.
 */
@property(nonatomic, assign) BOOL validateOnly;

/**
 *  Fetches a @c GTLRCloudRun_GoogleLongrunningOperation.
 *
 *  Deletes a Service. This will cause the Service to stop serving traffic and
 *  will delete all revisions.
 *
 *  @param name Required. The full name of the Service. Format:
 *    projects/{projectnumber}/locations/{location}/services/{service}
 *
 *  @return GTLRCloudRunQuery_ProjectsLocationsServicesDelete
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Gets information about a Service.
 *
 *  Method: run.projects.locations.services.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudRunCloudPlatform
 */
@interface GTLRCloudRunQuery_ProjectsLocationsServicesGet : GTLRCloudRunQuery

/**
 *  Required. The full name of the Service. Format:
 *  projects/{projectnumber}/locations/{location}/services/{service}
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudRun_GoogleCloudRunV2Service.
 *
 *  Gets information about a Service.
 *
 *  @param name Required. The full name of the Service. Format:
 *    projects/{projectnumber}/locations/{location}/services/{service}
 *
 *  @return GTLRCloudRunQuery_ProjectsLocationsServicesGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Get the IAM Access Control policy currently in effect for the given Cloud
 *  Run Service. This result does not include any inherited policies.
 *
 *  Method: run.projects.locations.services.getIamPolicy
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudRunCloudPlatform
 */
@interface GTLRCloudRunQuery_ProjectsLocationsServicesGetIamPolicy : GTLRCloudRunQuery

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
 */
@property(nonatomic, assign) NSInteger optionsRequestedPolicyVersion;

/**
 *  REQUIRED: The resource for which the policy is being requested. See
 *  [Resource names](https://cloud.google.com/apis/design/resource_names) for
 *  the appropriate value for this field.
 */
@property(nonatomic, copy, nullable) NSString *resource;

/**
 *  Fetches a @c GTLRCloudRun_GoogleIamV1Policy.
 *
 *  Get the IAM Access Control policy currently in effect for the given Cloud
 *  Run Service. This result does not include any inherited policies.
 *
 *  @param resource REQUIRED: The resource for which the policy is being
 *    requested. See [Resource
 *    names](https://cloud.google.com/apis/design/resource_names) for the
 *    appropriate value for this field.
 *
 *  @return GTLRCloudRunQuery_ProjectsLocationsServicesGetIamPolicy
 */
+ (instancetype)queryWithResource:(NSString *)resource;

@end

/**
 *  List Services.
 *
 *  Method: run.projects.locations.services.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudRunCloudPlatform
 */
@interface GTLRCloudRunQuery_ProjectsLocationsServicesList : GTLRCloudRunQuery

/** Maximum number of Services to return in this call. */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  A page token received from a previous call to ListServices. All other
 *  parameters must match.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Required. The location and project to list resources on. Location must be a
 *  valid GCP region, and may not be the "-" wildcard. Format:
 *  projects/{projectnumber}/locations/{location}
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  If true, returns deleted (but unexpired) resources along with active ones.
 */
@property(nonatomic, assign) BOOL showDeleted;

/**
 *  Fetches a @c GTLRCloudRun_GoogleCloudRunV2ListServicesResponse.
 *
 *  List Services.
 *
 *  @param parent Required. The location and project to list resources on.
 *    Location must be a valid GCP region, and may not be the "-" wildcard.
 *    Format: projects/{projectnumber}/locations/{location}
 *
 *  @return GTLRCloudRunQuery_ProjectsLocationsServicesList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithParent:(NSString *)parent;

@end

/**
 *  Updates a Service.
 *
 *  Method: run.projects.locations.services.patch
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudRunCloudPlatform
 */
@interface GTLRCloudRunQuery_ProjectsLocationsServicesPatch : GTLRCloudRunQuery

/**
 *  If set to true, and if the Service does not exist, it will create a new one.
 *  Caller must have both create and update permissions for this call if this is
 *  set to true.
 */
@property(nonatomic, assign) BOOL allowMissing;

/**
 *  The fully qualified name of this Service. In CreateServiceRequest, this
 *  field is ignored, and instead composed from CreateServiceRequest.parent and
 *  CreateServiceRequest.service_id. Format:
 *  projects/{project}/locations/{location}/services/{service_id}
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Indicates that the request should be validated and default values populated,
 *  without persisting the request or updating any resources.
 */
@property(nonatomic, assign) BOOL validateOnly;

/**
 *  Fetches a @c GTLRCloudRun_GoogleLongrunningOperation.
 *
 *  Updates a Service.
 *
 *  @param object The @c GTLRCloudRun_GoogleCloudRunV2Service to include in the
 *    query.
 *  @param name The fully qualified name of this Service. In
 *    CreateServiceRequest, this field is ignored, and instead composed from
 *    CreateServiceRequest.parent and CreateServiceRequest.service_id. Format:
 *    projects/{project}/locations/{location}/services/{service_id}
 *
 *  @return GTLRCloudRunQuery_ProjectsLocationsServicesPatch
 */
+ (instancetype)queryWithObject:(GTLRCloudRun_GoogleCloudRunV2Service *)object
                           name:(NSString *)name;

@end

/**
 *  Delete a Revision.
 *
 *  Method: run.projects.locations.services.revisions.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudRunCloudPlatform
 */
@interface GTLRCloudRunQuery_ProjectsLocationsServicesRevisionsDelete : GTLRCloudRunQuery

/**
 *  A system-generated fingerprint for this version of the resource. This may be
 *  used to detect modification conflict during updates.
 */
@property(nonatomic, copy, nullable) NSString *ETag;

/**
 *  Required. The name of the Revision to delete. Format:
 *  projects/{project}/locations/{location}/services/{service}/revisions/{revision}
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Indicates that the request should be validated without actually deleting any
 *  resources.
 */
@property(nonatomic, assign) BOOL validateOnly;

/**
 *  Fetches a @c GTLRCloudRun_GoogleLongrunningOperation.
 *
 *  Delete a Revision.
 *
 *  @param name Required. The name of the Revision to delete. Format:
 *    projects/{project}/locations/{location}/services/{service}/revisions/{revision}
 *
 *  @return GTLRCloudRunQuery_ProjectsLocationsServicesRevisionsDelete
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Gets information about a Revision.
 *
 *  Method: run.projects.locations.services.revisions.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudRunCloudPlatform
 */
@interface GTLRCloudRunQuery_ProjectsLocationsServicesRevisionsGet : GTLRCloudRunQuery

/**
 *  Required. The full name of the Revision. Format:
 *  projects/{project}/locations/{location}/services/{service}/revisions/{revision}
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudRun_GoogleCloudRunV2Revision.
 *
 *  Gets information about a Revision.
 *
 *  @param name Required. The full name of the Revision. Format:
 *    projects/{project}/locations/{location}/services/{service}/revisions/{revision}
 *
 *  @return GTLRCloudRunQuery_ProjectsLocationsServicesRevisionsGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  List Revisions from a given Service, or from a given location.
 *
 *  Method: run.projects.locations.services.revisions.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudRunCloudPlatform
 */
@interface GTLRCloudRunQuery_ProjectsLocationsServicesRevisionsList : GTLRCloudRunQuery

/** Maximum number of revisions to return in this call. */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  A page token received from a previous call to ListRevisions. All other
 *  parameters must match.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Required. The Service from which the Revisions should be listed. To list all
 *  Revisions across Services, use "-" instead of Service name. Format:
 *  projects/{project}/locations/{location}/services/{service}
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  If true, returns deleted (but unexpired) resources along with active ones.
 */
@property(nonatomic, assign) BOOL showDeleted;

/**
 *  Fetches a @c GTLRCloudRun_GoogleCloudRunV2ListRevisionsResponse.
 *
 *  List Revisions from a given Service, or from a given location.
 *
 *  @param parent Required. The Service from which the Revisions should be
 *    listed. To list all Revisions across Services, use "-" instead of Service
 *    name. Format: projects/{project}/locations/{location}/services/{service}
 *
 *  @return GTLRCloudRunQuery_ProjectsLocationsServicesRevisionsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithParent:(NSString *)parent;

@end

/**
 *  Sets the IAM Access control policy for the specified Service. Overwrites any
 *  existing policy.
 *
 *  Method: run.projects.locations.services.setIamPolicy
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudRunCloudPlatform
 */
@interface GTLRCloudRunQuery_ProjectsLocationsServicesSetIamPolicy : GTLRCloudRunQuery

/**
 *  REQUIRED: The resource for which the policy is being specified. See
 *  [Resource names](https://cloud.google.com/apis/design/resource_names) for
 *  the appropriate value for this field.
 */
@property(nonatomic, copy, nullable) NSString *resource;

/**
 *  Fetches a @c GTLRCloudRun_GoogleIamV1Policy.
 *
 *  Sets the IAM Access control policy for the specified Service. Overwrites any
 *  existing policy.
 *
 *  @param object The @c GTLRCloudRun_GoogleIamV1SetIamPolicyRequest to include
 *    in the query.
 *  @param resource REQUIRED: The resource for which the policy is being
 *    specified. See [Resource
 *    names](https://cloud.google.com/apis/design/resource_names) for the
 *    appropriate value for this field.
 *
 *  @return GTLRCloudRunQuery_ProjectsLocationsServicesSetIamPolicy
 */
+ (instancetype)queryWithObject:(GTLRCloudRun_GoogleIamV1SetIamPolicyRequest *)object
                       resource:(NSString *)resource;

@end

/**
 *  Returns permissions that a caller has on the specified Project. There are no
 *  permissions required for making this API call.
 *
 *  Method: run.projects.locations.services.testIamPermissions
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudRunCloudPlatform
 */
@interface GTLRCloudRunQuery_ProjectsLocationsServicesTestIamPermissions : GTLRCloudRunQuery

/**
 *  REQUIRED: The resource for which the policy detail is being requested. See
 *  [Resource names](https://cloud.google.com/apis/design/resource_names) for
 *  the appropriate value for this field.
 */
@property(nonatomic, copy, nullable) NSString *resource;

/**
 *  Fetches a @c GTLRCloudRun_GoogleIamV1TestIamPermissionsResponse.
 *
 *  Returns permissions that a caller has on the specified Project. There are no
 *  permissions required for making this API call.
 *
 *  @param object The @c GTLRCloudRun_GoogleIamV1TestIamPermissionsRequest to
 *    include in the query.
 *  @param resource REQUIRED: The resource for which the policy detail is being
 *    requested. See [Resource
 *    names](https://cloud.google.com/apis/design/resource_names) for the
 *    appropriate value for this field.
 *
 *  @return GTLRCloudRunQuery_ProjectsLocationsServicesTestIamPermissions
 */
+ (instancetype)queryWithObject:(GTLRCloudRun_GoogleIamV1TestIamPermissionsRequest *)object
                       resource:(NSString *)resource;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
