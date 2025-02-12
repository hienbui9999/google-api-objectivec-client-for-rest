// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google Play Integrity API (playintegrity/v1)
// Description:
//   Play Integrity
// Documentation:
//   https://developer.android.com/google/play/integrity

#import <GoogleAPIClientForREST/GTLRObject.h>

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRPlayIntegrity_AccountDetails;
@class GTLRPlayIntegrity_AppIntegrity;
@class GTLRPlayIntegrity_DeviceIntegrity;
@class GTLRPlayIntegrity_RequestDetails;
@class GTLRPlayIntegrity_TestingDetails;
@class GTLRPlayIntegrity_TokenPayloadExternal;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Constants - For some of the classes' properties below.

// ----------------------------------------------------------------------------
// GTLRPlayIntegrity_AccountDetails.appLicensingVerdict

/**
 *  The app and certificate match the versions distributed by Play.
 *
 *  Value: "LICENSED"
 */
FOUNDATION_EXTERN NSString * const kGTLRPlayIntegrity_AccountDetails_AppLicensingVerdict_Licensed;
/**
 *  Licensing details were not evaluated since a necessary requirement was
 *  missed. For example DeviceIntegrity did not meet the minimum bar or the
 *  application was not a known Play version.
 *
 *  Value: "UNEVALUATED"
 */
FOUNDATION_EXTERN NSString * const kGTLRPlayIntegrity_AccountDetails_AppLicensingVerdict_Unevaluated;
/**
 *  Play does not have sufficient information to evaluate licensing details
 *
 *  Value: "UNKNOWN"
 */
FOUNDATION_EXTERN NSString * const kGTLRPlayIntegrity_AccountDetails_AppLicensingVerdict_Unknown;
/**
 *  The certificate or package name does not match Google Play records.
 *
 *  Value: "UNLICENSED"
 */
FOUNDATION_EXTERN NSString * const kGTLRPlayIntegrity_AccountDetails_AppLicensingVerdict_Unlicensed;

// ----------------------------------------------------------------------------
// GTLRPlayIntegrity_AppIntegrity.appRecognitionVerdict

/**
 *  The app and certificate match the versions distributed by Play.
 *
 *  Value: "PLAY_RECOGNIZED"
 */
FOUNDATION_EXTERN NSString * const kGTLRPlayIntegrity_AppIntegrity_AppRecognitionVerdict_PlayRecognized;
/**
 *  Application integrity was not evaluated since a necessary requirement was
 *  missed. For example DeviceIntegrity did not meet the minimum bar.
 *
 *  Value: "UNEVALUATED"
 */
FOUNDATION_EXTERN NSString * const kGTLRPlayIntegrity_AppIntegrity_AppRecognitionVerdict_Unevaluated;
/**
 *  Play does not have sufficient information to evaluate app integrity
 *
 *  Value: "UNKNOWN"
 */
FOUNDATION_EXTERN NSString * const kGTLRPlayIntegrity_AppIntegrity_AppRecognitionVerdict_Unknown;
/**
 *  The certificate or package name does not match Google Play records.
 *
 *  Value: "UNRECOGNIZED_VERSION"
 */
FOUNDATION_EXTERN NSString * const kGTLRPlayIntegrity_AppIntegrity_AppRecognitionVerdict_UnrecognizedVersion;

// ----------------------------------------------------------------------------
// GTLRPlayIntegrity_DeviceIntegrity.deviceRecognitionVerdict

/**
 *  App is running on a device that passes basic system integrity checks, but
 *  may not meet Android platform compatibility requirements and may not be
 *  approved to run Google Play services.
 *
 *  Value: "MEETS_BASIC_INTEGRITY"
 */
FOUNDATION_EXTERN NSString * const kGTLRPlayIntegrity_DeviceIntegrity_DeviceRecognitionVerdict_MeetsBasicIntegrity;
/**
 *  App is running on GMS Android device with Google Play services.
 *
 *  Value: "MEETS_DEVICE_INTEGRITY"
 */
FOUNDATION_EXTERN NSString * const kGTLRPlayIntegrity_DeviceIntegrity_DeviceRecognitionVerdict_MeetsDeviceIntegrity;
/**
 *  App is running on GMS Android device with Google Play services and has a
 *  strong guarantee of system integrity such as a hardware-backed keystore.
 *
 *  Value: "MEETS_STRONG_INTEGRITY"
 */
FOUNDATION_EXTERN NSString * const kGTLRPlayIntegrity_DeviceIntegrity_DeviceRecognitionVerdict_MeetsStrongIntegrity;
/**
 *  App is running on an Android emulator with Google Play services which meets
 *  core Android compatibility requirements.
 *
 *  Value: "MEETS_VIRTUAL_INTEGRITY"
 */
FOUNDATION_EXTERN NSString * const kGTLRPlayIntegrity_DeviceIntegrity_DeviceRecognitionVerdict_MeetsVirtualIntegrity;
/**
 *  Play does not have sufficient information to evaluate device integrity
 *
 *  Value: "UNKNOWN"
 */
FOUNDATION_EXTERN NSString * const kGTLRPlayIntegrity_DeviceIntegrity_DeviceRecognitionVerdict_Unknown;

/**
 *  Contains the account information such as the licensing status for the user
 *  in the scope.
 */
@interface GTLRPlayIntegrity_AccountDetails : GTLRObject

/**
 *  Required. Details about the licensing status of the user for the app in the
 *  scope.
 *
 *  Likely values:
 *    @arg @c kGTLRPlayIntegrity_AccountDetails_AppLicensingVerdict_Licensed The
 *        app and certificate match the versions distributed by Play. (Value:
 *        "LICENSED")
 *    @arg @c kGTLRPlayIntegrity_AccountDetails_AppLicensingVerdict_Unevaluated
 *        Licensing details were not evaluated since a necessary requirement was
 *        missed. For example DeviceIntegrity did not meet the minimum bar or
 *        the application was not a known Play version. (Value: "UNEVALUATED")
 *    @arg @c kGTLRPlayIntegrity_AccountDetails_AppLicensingVerdict_Unknown Play
 *        does not have sufficient information to evaluate licensing details
 *        (Value: "UNKNOWN")
 *    @arg @c kGTLRPlayIntegrity_AccountDetails_AppLicensingVerdict_Unlicensed
 *        The certificate or package name does not match Google Play records.
 *        (Value: "UNLICENSED")
 */
@property(nonatomic, copy, nullable) NSString *appLicensingVerdict;

@end


/**
 *  Contains the application integrity information.
 */
@interface GTLRPlayIntegrity_AppIntegrity : GTLRObject

/**
 *  Required. Details about the app recognition verdict
 *
 *  Likely values:
 *    @arg @c kGTLRPlayIntegrity_AppIntegrity_AppRecognitionVerdict_PlayRecognized
 *        The app and certificate match the versions distributed by Play.
 *        (Value: "PLAY_RECOGNIZED")
 *    @arg @c kGTLRPlayIntegrity_AppIntegrity_AppRecognitionVerdict_Unevaluated
 *        Application integrity was not evaluated since a necessary requirement
 *        was missed. For example DeviceIntegrity did not meet the minimum bar.
 *        (Value: "UNEVALUATED")
 *    @arg @c kGTLRPlayIntegrity_AppIntegrity_AppRecognitionVerdict_Unknown Play
 *        does not have sufficient information to evaluate app integrity (Value:
 *        "UNKNOWN")
 *    @arg @c kGTLRPlayIntegrity_AppIntegrity_AppRecognitionVerdict_UnrecognizedVersion
 *        The certificate or package name does not match Google Play records.
 *        (Value: "UNRECOGNIZED_VERSION")
 */
@property(nonatomic, copy, nullable) NSString *appRecognitionVerdict;

/**
 *  Hex fingerprint of the application signing certificate. e.g. “ABCE1F....”
 *  Set iff app_recognition_verdict != UNEVALUATED.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *certificateSha256Digest;

/**
 *  Package name of the application under attestation. Set iff
 *  app_recognition_verdict != UNEVALUATED.
 */
@property(nonatomic, copy, nullable) NSString *packageName;

/**
 *  Version code of the application. Set iff app_recognition_verdict !=
 *  UNEVALUATED.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *versionCode;

@end


/**
 *  Request to decode the integrity token.
 */
@interface GTLRPlayIntegrity_DecodeIntegrityTokenRequest : GTLRObject

/** Encoded integrity token. */
@property(nonatomic, copy, nullable) NSString *integrityToken;

@end


/**
 *  Response containing the decoded integrity payload.
 */
@interface GTLRPlayIntegrity_DecodeIntegrityTokenResponse : GTLRObject

/** Plain token payload generated from the decoded integrity token. */
@property(nonatomic, strong, nullable) GTLRPlayIntegrity_TokenPayloadExternal *tokenPayloadExternal;

@end


/**
 *  Contains the device attestation information.
 */
@interface GTLRPlayIntegrity_DeviceIntegrity : GTLRObject

/** Details about the integrity of the device the app is running on */
@property(nonatomic, strong, nullable) NSArray<NSString *> *deviceRecognitionVerdict;

@end


/**
 *  Contains the integrity request information.
 */
@interface GTLRPlayIntegrity_RequestDetails : GTLRObject

/**
 *  Required. Nonce that was provided in the request (which is base64 web-safe
 *  no-wrap).
 */
@property(nonatomic, copy, nullable) NSString *nonce;

/**
 *  Required. Application package name this attestation was requested for. Note:
 *  This field makes no guarantees or promises on the caller integrity. For
 *  details on application integrity, check application_integrity.
 */
@property(nonatomic, copy, nullable) NSString *requestPackageName;

/**
 *  Required. Timestamp, in milliseconds, of the integrity application request.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *timestampMillis;

@end


/**
 *  Contains additional information generated for testing responses.
 */
@interface GTLRPlayIntegrity_TestingDetails : GTLRObject

/**
 *  Required. Indicates that the information contained in this payload is a
 *  testing response that is statically overridden for a tester.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *isTestingResponse;

@end


/**
 *  Contains basic app information and integrity signals like device attestation
 *  and licensing details.
 */
@interface GTLRPlayIntegrity_TokenPayloadExternal : GTLRObject

/** Required. Details about the Play Store account. */
@property(nonatomic, strong, nullable) GTLRPlayIntegrity_AccountDetails *accountDetails;

/** Required. Details about the application integrity. */
@property(nonatomic, strong, nullable) GTLRPlayIntegrity_AppIntegrity *appIntegrity;

/** Required. Details about the device integrity. */
@property(nonatomic, strong, nullable) GTLRPlayIntegrity_DeviceIntegrity *deviceIntegrity;

/** Required. Details about the integrity request. */
@property(nonatomic, strong, nullable) GTLRPlayIntegrity_RequestDetails *requestDetails;

/**
 *  Indicates that this payload is generated for testing purposes and contains
 *  any additional data that is linked with testing status.
 */
@property(nonatomic, strong, nullable) GTLRPlayIntegrity_TestingDetails *testingDetails;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
