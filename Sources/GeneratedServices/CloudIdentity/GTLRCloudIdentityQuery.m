// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Cloud Identity API (cloudidentity/v1)
// Description:
//   API for provisioning and managing identity resources.
// Documentation:
//   https://cloud.google.com/identity/

#import <GoogleAPIClientForREST/GTLRCloudIdentityQuery.h>

// ----------------------------------------------------------------------------
// Constants

// initialGroupConfig
NSString * const kGTLRCloudIdentityInitialGroupConfigEmpty     = @"EMPTY";
NSString * const kGTLRCloudIdentityInitialGroupConfigInitialGroupConfigUnspecified = @"INITIAL_GROUP_CONFIG_UNSPECIFIED";
NSString * const kGTLRCloudIdentityInitialGroupConfigWithInitialOwner = @"WITH_INITIAL_OWNER";

// view
NSString * const kGTLRCloudIdentityViewBasic               = @"BASIC";
NSString * const kGTLRCloudIdentityViewCompanyInventory    = @"COMPANY_INVENTORY";
NSString * const kGTLRCloudIdentityViewFull                = @"FULL";
NSString * const kGTLRCloudIdentityViewUserAssignedDevices = @"USER_ASSIGNED_DEVICES";
NSString * const kGTLRCloudIdentityViewViewUnspecified     = @"VIEW_UNSPECIFIED";

// ----------------------------------------------------------------------------
// Query Classes
//

@implementation GTLRCloudIdentityQuery

@dynamic fields;

@end

@implementation GTLRCloudIdentityQuery_DevicesCancelWipe

@dynamic name;

+ (instancetype)queryWithObject:(GTLRCloudIdentity_GoogleAppsCloudidentityDevicesV1CancelWipeDeviceRequest *)object
                           name:(NSString *)name {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}:cancelWipe";
  GTLRCloudIdentityQuery_DevicesCancelWipe *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.name = name;
  query.expectedObjectClass = [GTLRCloudIdentity_Operation class];
  query.loggingName = @"cloudidentity.devices.cancelWipe";
  return query;
}

@end

@implementation GTLRCloudIdentityQuery_DevicesCreate

@dynamic customer;

+ (instancetype)queryWithObject:(GTLRCloudIdentity_GoogleAppsCloudidentityDevicesV1Device *)object {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSString *pathURITemplate = @"v1/devices";
  GTLRCloudIdentityQuery_DevicesCreate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:nil];
  query.bodyObject = object;
  query.expectedObjectClass = [GTLRCloudIdentity_Operation class];
  query.loggingName = @"cloudidentity.devices.create";
  return query;
}

@end

@implementation GTLRCloudIdentityQuery_DevicesDelete

@dynamic customer, name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}";
  GTLRCloudIdentityQuery_DevicesDelete *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"DELETE"
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRCloudIdentity_Operation class];
  query.loggingName = @"cloudidentity.devices.delete";
  return query;
}

@end

@implementation GTLRCloudIdentityQuery_DevicesDeviceUsersApprove

@dynamic name;

+ (instancetype)queryWithObject:(GTLRCloudIdentity_GoogleAppsCloudidentityDevicesV1ApproveDeviceUserRequest *)object
                           name:(NSString *)name {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}:approve";
  GTLRCloudIdentityQuery_DevicesDeviceUsersApprove *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.name = name;
  query.expectedObjectClass = [GTLRCloudIdentity_Operation class];
  query.loggingName = @"cloudidentity.devices.deviceUsers.approve";
  return query;
}

@end

@implementation GTLRCloudIdentityQuery_DevicesDeviceUsersBlock

@dynamic name;

+ (instancetype)queryWithObject:(GTLRCloudIdentity_GoogleAppsCloudidentityDevicesV1BlockDeviceUserRequest *)object
                           name:(NSString *)name {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}:block";
  GTLRCloudIdentityQuery_DevicesDeviceUsersBlock *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.name = name;
  query.expectedObjectClass = [GTLRCloudIdentity_Operation class];
  query.loggingName = @"cloudidentity.devices.deviceUsers.block";
  return query;
}

@end

@implementation GTLRCloudIdentityQuery_DevicesDeviceUsersCancelWipe

@dynamic name;

+ (instancetype)queryWithObject:(GTLRCloudIdentity_GoogleAppsCloudidentityDevicesV1CancelWipeDeviceUserRequest *)object
                           name:(NSString *)name {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}:cancelWipe";
  GTLRCloudIdentityQuery_DevicesDeviceUsersCancelWipe *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.name = name;
  query.expectedObjectClass = [GTLRCloudIdentity_Operation class];
  query.loggingName = @"cloudidentity.devices.deviceUsers.cancelWipe";
  return query;
}

@end

@implementation GTLRCloudIdentityQuery_DevicesDeviceUsersClientStatesGet

@dynamic customer, name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}";
  GTLRCloudIdentityQuery_DevicesDeviceUsersClientStatesGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRCloudIdentity_GoogleAppsCloudidentityDevicesV1ClientState class];
  query.loggingName = @"cloudidentity.devices.deviceUsers.clientStates.get";
  return query;
}

@end

@implementation GTLRCloudIdentityQuery_DevicesDeviceUsersClientStatesList

@dynamic customer, filter, orderBy, pageToken, parent;

+ (instancetype)queryWithParent:(NSString *)parent {
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1/{+parent}/clientStates";
  GTLRCloudIdentityQuery_DevicesDeviceUsersClientStatesList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.parent = parent;
  query.expectedObjectClass = [GTLRCloudIdentity_GoogleAppsCloudidentityDevicesV1ListClientStatesResponse class];
  query.loggingName = @"cloudidentity.devices.deviceUsers.clientStates.list";
  return query;
}

@end

@implementation GTLRCloudIdentityQuery_DevicesDeviceUsersClientStatesPatch

@dynamic customer, name, updateMask;

+ (instancetype)queryWithObject:(GTLRCloudIdentity_GoogleAppsCloudidentityDevicesV1ClientState *)object
                           name:(NSString *)name {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}";
  GTLRCloudIdentityQuery_DevicesDeviceUsersClientStatesPatch *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"PATCH"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.name = name;
  query.expectedObjectClass = [GTLRCloudIdentity_Operation class];
  query.loggingName = @"cloudidentity.devices.deviceUsers.clientStates.patch";
  return query;
}

@end

@implementation GTLRCloudIdentityQuery_DevicesDeviceUsersDelete

@dynamic customer, name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}";
  GTLRCloudIdentityQuery_DevicesDeviceUsersDelete *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"DELETE"
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRCloudIdentity_Operation class];
  query.loggingName = @"cloudidentity.devices.deviceUsers.delete";
  return query;
}

@end

@implementation GTLRCloudIdentityQuery_DevicesDeviceUsersGet

@dynamic customer, name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}";
  GTLRCloudIdentityQuery_DevicesDeviceUsersGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRCloudIdentity_GoogleAppsCloudidentityDevicesV1DeviceUser class];
  query.loggingName = @"cloudidentity.devices.deviceUsers.get";
  return query;
}

@end

@implementation GTLRCloudIdentityQuery_DevicesDeviceUsersList

@dynamic customer, filter, orderBy, pageSize, pageToken, parent;

+ (instancetype)queryWithParent:(NSString *)parent {
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1/{+parent}/deviceUsers";
  GTLRCloudIdentityQuery_DevicesDeviceUsersList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.parent = parent;
  query.expectedObjectClass = [GTLRCloudIdentity_GoogleAppsCloudidentityDevicesV1ListDeviceUsersResponse class];
  query.loggingName = @"cloudidentity.devices.deviceUsers.list";
  return query;
}

@end

@implementation GTLRCloudIdentityQuery_DevicesDeviceUsersLookup

@dynamic androidId, pageSize, pageToken, parent, rawResourceId, userId;

+ (instancetype)queryWithParent:(NSString *)parent {
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1/{+parent}:lookup";
  GTLRCloudIdentityQuery_DevicesDeviceUsersLookup *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.parent = parent;
  query.expectedObjectClass = [GTLRCloudIdentity_GoogleAppsCloudidentityDevicesV1LookupSelfDeviceUsersResponse class];
  query.loggingName = @"cloudidentity.devices.deviceUsers.lookup";
  return query;
}

@end

@implementation GTLRCloudIdentityQuery_DevicesDeviceUsersWipe

@dynamic name;

+ (instancetype)queryWithObject:(GTLRCloudIdentity_GoogleAppsCloudidentityDevicesV1WipeDeviceUserRequest *)object
                           name:(NSString *)name {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}:wipe";
  GTLRCloudIdentityQuery_DevicesDeviceUsersWipe *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.name = name;
  query.expectedObjectClass = [GTLRCloudIdentity_Operation class];
  query.loggingName = @"cloudidentity.devices.deviceUsers.wipe";
  return query;
}

@end

@implementation GTLRCloudIdentityQuery_DevicesGet

@dynamic customer, name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}";
  GTLRCloudIdentityQuery_DevicesGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRCloudIdentity_GoogleAppsCloudidentityDevicesV1Device class];
  query.loggingName = @"cloudidentity.devices.get";
  return query;
}

@end

@implementation GTLRCloudIdentityQuery_DevicesList

@dynamic customer, filter, orderBy, pageSize, pageToken, view;

+ (instancetype)query {
  NSString *pathURITemplate = @"v1/devices";
  GTLRCloudIdentityQuery_DevicesList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:nil];
  query.expectedObjectClass = [GTLRCloudIdentity_GoogleAppsCloudidentityDevicesV1ListDevicesResponse class];
  query.loggingName = @"cloudidentity.devices.list";
  return query;
}

@end

@implementation GTLRCloudIdentityQuery_DevicesWipe

@dynamic name;

+ (instancetype)queryWithObject:(GTLRCloudIdentity_GoogleAppsCloudidentityDevicesV1WipeDeviceRequest *)object
                           name:(NSString *)name {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}:wipe";
  GTLRCloudIdentityQuery_DevicesWipe *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.name = name;
  query.expectedObjectClass = [GTLRCloudIdentity_Operation class];
  query.loggingName = @"cloudidentity.devices.wipe";
  return query;
}

@end

@implementation GTLRCloudIdentityQuery_GroupsCreate

@dynamic initialGroupConfig;

+ (instancetype)queryWithObject:(GTLRCloudIdentity_Group *)object {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSString *pathURITemplate = @"v1/groups";
  GTLRCloudIdentityQuery_GroupsCreate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:nil];
  query.bodyObject = object;
  query.expectedObjectClass = [GTLRCloudIdentity_Operation class];
  query.loggingName = @"cloudidentity.groups.create";
  return query;
}

@end

@implementation GTLRCloudIdentityQuery_GroupsDelete

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}";
  GTLRCloudIdentityQuery_GroupsDelete *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"DELETE"
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRCloudIdentity_Operation class];
  query.loggingName = @"cloudidentity.groups.delete";
  return query;
}

@end

@implementation GTLRCloudIdentityQuery_GroupsGet

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}";
  GTLRCloudIdentityQuery_GroupsGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRCloudIdentity_Group class];
  query.loggingName = @"cloudidentity.groups.get";
  return query;
}

@end

@implementation GTLRCloudIdentityQuery_GroupsGetSecuritySettings

@dynamic name, readMask;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}";
  GTLRCloudIdentityQuery_GroupsGetSecuritySettings *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRCloudIdentity_SecuritySettings class];
  query.loggingName = @"cloudidentity.groups.getSecuritySettings";
  return query;
}

@end

@implementation GTLRCloudIdentityQuery_GroupsList

@dynamic pageSize, pageToken, parent, view;

+ (instancetype)query {
  NSString *pathURITemplate = @"v1/groups";
  GTLRCloudIdentityQuery_GroupsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:nil];
  query.expectedObjectClass = [GTLRCloudIdentity_ListGroupsResponse class];
  query.loggingName = @"cloudidentity.groups.list";
  return query;
}

@end

@implementation GTLRCloudIdentityQuery_GroupsLookup

@dynamic groupKeyId, groupKeyNamespace;

+ (NSDictionary<NSString *, NSString *> *)parameterNameMap {
  NSDictionary<NSString *, NSString *> *map = @{
    @"groupKeyId" : @"groupKey.id",
    @"groupKeyNamespace" : @"groupKey.namespace"
  };
  return map;
}

+ (instancetype)query {
  NSString *pathURITemplate = @"v1/groups:lookup";
  GTLRCloudIdentityQuery_GroupsLookup *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:nil];
  query.expectedObjectClass = [GTLRCloudIdentity_LookupGroupNameResponse class];
  query.loggingName = @"cloudidentity.groups.lookup";
  return query;
}

@end

@implementation GTLRCloudIdentityQuery_GroupsMembershipsCheckTransitiveMembership

@dynamic parent, query;

+ (instancetype)queryWithParent:(NSString *)parent {
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1/{+parent}/memberships:checkTransitiveMembership";
  GTLRCloudIdentityQuery_GroupsMembershipsCheckTransitiveMembership *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.parent = parent;
  query.expectedObjectClass = [GTLRCloudIdentity_CheckTransitiveMembershipResponse class];
  query.loggingName = @"cloudidentity.groups.memberships.checkTransitiveMembership";
  return query;
}

@end

@implementation GTLRCloudIdentityQuery_GroupsMembershipsCreate

@dynamic parent;

+ (instancetype)queryWithObject:(GTLRCloudIdentity_Membership *)object
                         parent:(NSString *)parent {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1/{+parent}/memberships";
  GTLRCloudIdentityQuery_GroupsMembershipsCreate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.parent = parent;
  query.expectedObjectClass = [GTLRCloudIdentity_Operation class];
  query.loggingName = @"cloudidentity.groups.memberships.create";
  return query;
}

@end

@implementation GTLRCloudIdentityQuery_GroupsMembershipsDelete

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}";
  GTLRCloudIdentityQuery_GroupsMembershipsDelete *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"DELETE"
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRCloudIdentity_Operation class];
  query.loggingName = @"cloudidentity.groups.memberships.delete";
  return query;
}

@end

@implementation GTLRCloudIdentityQuery_GroupsMembershipsGet

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}";
  GTLRCloudIdentityQuery_GroupsMembershipsGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRCloudIdentity_Membership class];
  query.loggingName = @"cloudidentity.groups.memberships.get";
  return query;
}

@end

@implementation GTLRCloudIdentityQuery_GroupsMembershipsGetMembershipGraph

@dynamic parent, query;

+ (instancetype)queryWithParent:(NSString *)parent {
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1/{+parent}/memberships:getMembershipGraph";
  GTLRCloudIdentityQuery_GroupsMembershipsGetMembershipGraph *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.parent = parent;
  query.expectedObjectClass = [GTLRCloudIdentity_Operation class];
  query.loggingName = @"cloudidentity.groups.memberships.getMembershipGraph";
  return query;
}

@end

@implementation GTLRCloudIdentityQuery_GroupsMembershipsList

@dynamic pageSize, pageToken, parent, view;

+ (instancetype)queryWithParent:(NSString *)parent {
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1/{+parent}/memberships";
  GTLRCloudIdentityQuery_GroupsMembershipsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.parent = parent;
  query.expectedObjectClass = [GTLRCloudIdentity_ListMembershipsResponse class];
  query.loggingName = @"cloudidentity.groups.memberships.list";
  return query;
}

@end

@implementation GTLRCloudIdentityQuery_GroupsMembershipsLookup

@dynamic memberKeyId, memberKeyNamespace, parent;

+ (NSDictionary<NSString *, NSString *> *)parameterNameMap {
  NSDictionary<NSString *, NSString *> *map = @{
    @"memberKeyId" : @"memberKey.id",
    @"memberKeyNamespace" : @"memberKey.namespace"
  };
  return map;
}

+ (instancetype)queryWithParent:(NSString *)parent {
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1/{+parent}/memberships:lookup";
  GTLRCloudIdentityQuery_GroupsMembershipsLookup *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.parent = parent;
  query.expectedObjectClass = [GTLRCloudIdentity_LookupMembershipNameResponse class];
  query.loggingName = @"cloudidentity.groups.memberships.lookup";
  return query;
}

@end

@implementation GTLRCloudIdentityQuery_GroupsMembershipsModifyMembershipRoles

@dynamic name;

+ (instancetype)queryWithObject:(GTLRCloudIdentity_ModifyMembershipRolesRequest *)object
                           name:(NSString *)name {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}:modifyMembershipRoles";
  GTLRCloudIdentityQuery_GroupsMembershipsModifyMembershipRoles *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.name = name;
  query.expectedObjectClass = [GTLRCloudIdentity_ModifyMembershipRolesResponse class];
  query.loggingName = @"cloudidentity.groups.memberships.modifyMembershipRoles";
  return query;
}

@end

@implementation GTLRCloudIdentityQuery_GroupsMembershipsSearchTransitiveGroups

@dynamic pageSize, pageToken, parent, query;

+ (instancetype)queryWithParent:(NSString *)parent {
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1/{+parent}/memberships:searchTransitiveGroups";
  GTLRCloudIdentityQuery_GroupsMembershipsSearchTransitiveGroups *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.parent = parent;
  query.expectedObjectClass = [GTLRCloudIdentity_SearchTransitiveGroupsResponse class];
  query.loggingName = @"cloudidentity.groups.memberships.searchTransitiveGroups";
  return query;
}

@end

@implementation GTLRCloudIdentityQuery_GroupsMembershipsSearchTransitiveMemberships

@dynamic pageSize, pageToken, parent;

+ (instancetype)queryWithParent:(NSString *)parent {
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1/{+parent}/memberships:searchTransitiveMemberships";
  GTLRCloudIdentityQuery_GroupsMembershipsSearchTransitiveMemberships *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.parent = parent;
  query.expectedObjectClass = [GTLRCloudIdentity_SearchTransitiveMembershipsResponse class];
  query.loggingName = @"cloudidentity.groups.memberships.searchTransitiveMemberships";
  return query;
}

@end

@implementation GTLRCloudIdentityQuery_GroupsPatch

@dynamic name, updateMask;

+ (instancetype)queryWithObject:(GTLRCloudIdentity_Group *)object
                           name:(NSString *)name {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}";
  GTLRCloudIdentityQuery_GroupsPatch *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"PATCH"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.name = name;
  query.expectedObjectClass = [GTLRCloudIdentity_Operation class];
  query.loggingName = @"cloudidentity.groups.patch";
  return query;
}

@end

@implementation GTLRCloudIdentityQuery_GroupsSearch

@dynamic pageSize, pageToken, query, view;

+ (instancetype)query {
  NSString *pathURITemplate = @"v1/groups:search";
  GTLRCloudIdentityQuery_GroupsSearch *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:nil];
  query.expectedObjectClass = [GTLRCloudIdentity_SearchGroupsResponse class];
  query.loggingName = @"cloudidentity.groups.search";
  return query;
}

@end

@implementation GTLRCloudIdentityQuery_GroupsUpdateSecuritySettings

@dynamic name, updateMask;

+ (instancetype)queryWithObject:(GTLRCloudIdentity_SecuritySettings *)object
                           name:(NSString *)name {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}";
  GTLRCloudIdentityQuery_GroupsUpdateSecuritySettings *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"PATCH"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.name = name;
  query.expectedObjectClass = [GTLRCloudIdentity_Operation class];
  query.loggingName = @"cloudidentity.groups.updateSecuritySettings";
  return query;
}

@end
