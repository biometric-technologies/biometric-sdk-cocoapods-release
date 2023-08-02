#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class BiometricSdkBiometricSdkConfigBuilder, BiometricSdkBiometricSdkConfig, BiometricSdkPlatformContext, BiometricSdkIrisConfig, BiometricSdkFaceConfig, BiometricSdkFaceExtractProperties, BiometricSdkFaceEncodeProperties, BiometricSdkFaceMatchProperties, BiometricSdkIrisExtractProperties, BiometricSdkIrisEncodeProperties, BiometricSdkIrisMatchProperties, BiometricSdkBiometricSdkFactory, BiometricSdkKotlinThrowable, BiometricSdkKotlinArray<T>, BiometricSdkKotlinException, BiometricSdkSdkException, BiometricSdkKotlinRuntimeException, BiometricSdkIrisEncodePropertiesCompanion, NSData, BiometricSdkImage, BiometricSdkIrisExtractPropertiesCompanion, BiometricSdkKotlinEnumCompanion, BiometricSdkKotlinEnum<E>, BiometricSdkCompressionHistory, BiometricSdkDeviceTechnology, BiometricSdkEyeLabel, BiometricSdkHorizontalOrientation, BiometricSdkImageFormat, BiometricSdkImageType, BiometricSdkBiometricType, BiometricSdkIsoRecord19794_6DataBlock, BiometricSdkIsoRecord19794_6, BiometricSdkIsoRecord19794_6Header, BiometricSdkKotlinByteArray, BiometricSdkKotlinx_datetimeInstant, BiometricSdkQualityBlock, BiometricSdkVerticalOrientation, BiometricSdkRange, BiometricSdkProperties, BiometricSdkCertificationRecord, BiometricSdkIsoRecord19794_2DataBlock, BiometricSdkIsoRecord19794_2, BiometricSdkIsoRecord19794_2Header, BiometricSdkIsoRecord19794_2MinutiaData, BiometricSdkQualityRecord, BiometricSdkFaceNetModelConfiguration, BiometricSdkHashMethod, BiometricSdkImageFormat_, BiometricSdkResourceIOFactory, BiometricSdkCircle, BiometricSdkImageColorType, BiometricSdkKotlinIntArray, BiometricSdkPoint, BiometricSdkKotlinIntRange, BiometricSdkBiometricRecordValidationResult, NSError, BiometricSdkKotlinByteIterator, BiometricSdkKotlinx_datetimeInstantCompanion, BiometricSdkKotlinIntIterator, BiometricSdkKotlinIntProgressionCompanion, BiometricSdkKotlinIntProgression, BiometricSdkKotlinIntRangeCompanion, BiometricSdkKotlinx_serialization_coreSerializersModule, BiometricSdkKotlinx_serialization_coreSerialKind, BiometricSdkKotlinNothing;

@protocol BiometricSdkBiometricSdkOperations, BiometricSdkBiometricSdk, BiometricSdkFaceOperations, BiometricSdkInputOutputOperations, BiometricSdkIrisOperations, BiometricSdkQualityControlOperations, BiometricSdkBiometricRecord, BiometricSdkKotlinClosedRange, BiometricSdkIrisEncoder, BiometricSdkIrisExtractor, BiometricSdkIrisMatcher, BiometricSdkKotlinComparable, BiometricSdkIdentifiable, BiometricSdkBiometricRecordSerializer, BiometricSdkFaceTemplateRecord, BiometricSdkFaceImageRecord, BiometricSdkFaceEncoder, BiometricSdkFaceExtractor, BiometricSdkFaceMatcher, BiometricSdkInputOutputRecordOperations, BiometricSdkInputOutputImageOperations, BiometricSdkInputOutputImageConvertOperations, BiometricSdkResourceIO, BiometricSdkInterpreter, BiometricSdkKotlinIterator, BiometricSdkKotlinIterable, BiometricSdkKotlinOpenEndRange, BiometricSdkKotlinx_serialization_coreKSerializer, BiometricSdkKotlinx_serialization_coreEncoder, BiometricSdkKotlinx_serialization_coreSerialDescriptor, BiometricSdkKotlinx_serialization_coreSerializationStrategy, BiometricSdkKotlinx_serialization_coreDecoder, BiometricSdkKotlinx_serialization_coreDeserializationStrategy, BiometricSdkKotlinx_serialization_coreCompositeEncoder, BiometricSdkKotlinAnnotation, BiometricSdkKotlinx_serialization_coreCompositeDecoder, BiometricSdkKotlinx_serialization_coreSerializersModuleCollector, BiometricSdkKotlinKClass, BiometricSdkKotlinKDeclarationContainer, BiometricSdkKotlinKAnnotatedElement, BiometricSdkKotlinKClassifier;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface BiometricSdkBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface BiometricSdkBase (BiometricSdkBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface BiometricSdkMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface BiometricSdkMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorBiometricSdkKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface BiometricSdkNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface BiometricSdkByte : BiometricSdkNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface BiometricSdkUByte : BiometricSdkNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface BiometricSdkShort : BiometricSdkNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface BiometricSdkUShort : BiometricSdkNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface BiometricSdkInt : BiometricSdkNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface BiometricSdkUInt : BiometricSdkNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface BiometricSdkLong : BiometricSdkNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface BiometricSdkULong : BiometricSdkNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface BiometricSdkFloat : BiometricSdkNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface BiometricSdkDouble : BiometricSdkNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface BiometricSdkBoolean : BiometricSdkNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((swift_name("BiometricSdk")))
@protocol BiometricSdkBiometricSdk
@required
- (BiometricSdkBiometricSdkConfigBuilder *)configBuilder __attribute__((swift_name("configBuilder()")));
- (id<BiometricSdkBiometricSdkOperations> _Nullable)getInstance __attribute__((swift_name("getInstance()")));

/**
 * @note This method converts instances of SdkInitializationException, IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)initializeConfig:(BiometricSdkBiometricSdkConfig *)config error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("initialize(config:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BiometricSdkConfig")))
@interface BiometricSdkBiometricSdkConfig : BiometricSdkBase
- (instancetype)initWithContext:(BiometricSdkPlatformContext * _Nullable)context iris:(BiometricSdkIrisConfig * _Nullable)iris face:(BiometricSdkFaceConfig * _Nullable)face __attribute__((swift_name("init(context:iris:face:)"))) __attribute__((objc_designated_initializer));
@property (readonly) BiometricSdkPlatformContext * _Nullable context __attribute__((swift_name("context")));
@property (readonly) BiometricSdkFaceConfig * _Nullable face __attribute__((swift_name("face")));
@property (readonly) BiometricSdkIrisConfig * _Nullable iris __attribute__((swift_name("iris")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BiometricSdkConfigBuilder")))
@interface BiometricSdkBiometricSdkConfigBuilder : BiometricSdkBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BiometricSdkBiometricSdkConfig *)build __attribute__((swift_name("build()")));
- (BiometricSdkBiometricSdkConfigBuilder *)withContextContext:(BiometricSdkPlatformContext *)context __attribute__((swift_name("withContext(context:)")));
- (BiometricSdkBiometricSdkConfigBuilder *)withFaceExtractor:(BiometricSdkFaceExtractProperties *)extractor encoder:(BiometricSdkFaceEncodeProperties *)encoder matcher:(BiometricSdkFaceMatchProperties *)matcher __attribute__((swift_name("withFace(extractor:encoder:matcher:)")));
- (BiometricSdkBiometricSdkConfigBuilder *)withIrisExtractor:(BiometricSdkIrisExtractProperties *)extractor encoder:(BiometricSdkIrisEncodeProperties *)encoder matcher:(BiometricSdkIrisMatchProperties *)matcher __attribute__((swift_name("withIris(extractor:encoder:matcher:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BiometricSdkFactory")))
@interface BiometricSdkBiometricSdkFactory : BiometricSdkBase <BiometricSdkBiometricSdk>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)biometricSdkFactory __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BiometricSdkBiometricSdkFactory *shared __attribute__((swift_name("shared")));
- (BiometricSdkBiometricSdkConfigBuilder *)configBuilder __attribute__((swift_name("configBuilder()")));
- (id<BiometricSdkBiometricSdkOperations> _Nullable)getInstance __attribute__((swift_name("getInstance()")));

/**
 * @note This method converts instances of SdkInitializationException, IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)initializeConfig:(BiometricSdkBiometricSdkConfig *)config error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("initialize(config:)")));
@end

__attribute__((swift_name("BiometricSdkOperations")))
@protocol BiometricSdkBiometricSdkOperations
@required
- (id<BiometricSdkFaceOperations>)face __attribute__((swift_name("face()")));
- (id<BiometricSdkInputOutputOperations>)io __attribute__((swift_name("io()")));
- (id<BiometricSdkIrisOperations>)iris __attribute__((swift_name("iris()")));
- (id<BiometricSdkQualityControlOperations>)qualityControl __attribute__((swift_name("qualityControl()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FaceConfig")))
@interface BiometricSdkFaceConfig : BiometricSdkBase
- (instancetype)initWithExtractor:(BiometricSdkFaceExtractProperties *)extractor encoder:(BiometricSdkFaceEncodeProperties *)encoder matcher:(BiometricSdkFaceMatchProperties *)matcher __attribute__((swift_name("init(extractor:encoder:matcher:)"))) __attribute__((objc_designated_initializer));
- (BiometricSdkFaceConfig *)doCopyExtractor:(BiometricSdkFaceExtractProperties *)extractor encoder:(BiometricSdkFaceEncodeProperties *)encoder matcher:(BiometricSdkFaceMatchProperties *)matcher __attribute__((swift_name("doCopy(extractor:encoder:matcher:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BiometricSdkFaceEncodeProperties *encoder __attribute__((swift_name("encoder")));
@property (readonly) BiometricSdkFaceExtractProperties *extractor __attribute__((swift_name("extractor")));
@property (readonly) BiometricSdkFaceMatchProperties *matcher __attribute__((swift_name("matcher")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IrisConfig")))
@interface BiometricSdkIrisConfig : BiometricSdkBase
- (instancetype)initWithExtractor:(BiometricSdkIrisExtractProperties *)extractor encoder:(BiometricSdkIrisEncodeProperties *)encoder matcher:(BiometricSdkIrisMatchProperties *)matcher __attribute__((swift_name("init(extractor:encoder:matcher:)"))) __attribute__((objc_designated_initializer));
- (BiometricSdkIrisConfig *)doCopyExtractor:(BiometricSdkIrisExtractProperties *)extractor encoder:(BiometricSdkIrisEncodeProperties *)encoder matcher:(BiometricSdkIrisMatchProperties *)matcher __attribute__((swift_name("doCopy(extractor:encoder:matcher:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BiometricSdkIrisEncodeProperties *encoder __attribute__((swift_name("encoder")));
@property (readonly) BiometricSdkIrisExtractProperties *extractor __attribute__((swift_name("extractor")));
@property (readonly) BiometricSdkIrisMatchProperties *matcher __attribute__((swift_name("matcher")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface BiometricSdkKotlinThrowable : BiometricSdkBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(BiometricSdkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(BiometricSdkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (BiometricSdkKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BiometricSdkKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface BiometricSdkKotlinException : BiometricSdkKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(BiometricSdkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(BiometricSdkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("SdkException")))
@interface BiometricSdkSdkException : BiometricSdkKotlinException
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(BiometricSdkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(BiometricSdkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) BiometricSdkKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SdkInitializationException")))
@interface BiometricSdkSdkInitializationException : BiometricSdkSdkException
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(BiometricSdkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface BiometricSdkKotlinRuntimeException : BiometricSdkKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(BiometricSdkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(BiometricSdkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SdkNotInitializedException")))
@interface BiometricSdkSdkNotInitializedException : BiometricSdkKotlinRuntimeException
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(BiometricSdkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(BiometricSdkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IrisEncodeProperties")))
@interface BiometricSdkIrisEncodeProperties : BiometricSdkBase
- (instancetype)initWithTemplateWidth:(int32_t)templateWidth templateHeight:(int32_t)templateHeight __attribute__((swift_name("init(templateWidth:templateHeight:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BiometricSdkIrisEncodePropertiesCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) int32_t templateHeight __attribute__((swift_name("templateHeight")));
@property (readonly) int32_t templateWidth __attribute__((swift_name("templateWidth")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IrisEncodeProperties.Companion")))
@interface BiometricSdkIrisEncodePropertiesCompanion : BiometricSdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BiometricSdkIrisEncodePropertiesCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("IrisEncoder")))
@protocol BiometricSdkIrisEncoder
@required
- (NSData *)encodeSample:(BiometricSdkImage *)sample __attribute__((swift_name("encode(sample:)")));
- (id<BiometricSdkBiometricRecord>)encodeSample_:(id<BiometricSdkBiometricRecord>)sample __attribute__((swift_name("encode(sample_:)")));
- (NSData * _Nullable)extractAndEncodeSample:(BiometricSdkImage *)sample __attribute__((swift_name("extractAndEncode(sample:)")));
- (NSData *)extractAndEncodeSample_:(id<BiometricSdkBiometricRecord>)sample __attribute__((swift_name("extractAndEncode(sample_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IrisExtractProperties")))
@interface BiometricSdkIrisExtractProperties : BiometricSdkBase
- (instancetype)initWithVerticalOffsetStart:(BiometricSdkInt * _Nullable)verticalOffsetStart verticalOffsetEnd:(BiometricSdkInt * _Nullable)verticalOffsetEnd horizontalOffsetStart:(BiometricSdkInt * _Nullable)horizontalOffsetStart horizontalOffsetEnd:(BiometricSdkInt * _Nullable)horizontalOffsetEnd centerOffsetStep:(int32_t)centerOffsetStep minPupilRadius:(BiometricSdkInt * _Nullable)minPupilRadius maxPupilRadius:(BiometricSdkInt * _Nullable)maxPupilRadius pupilRadiusStep:(int32_t)pupilRadiusStep pupilRadiusCalculationSteps:(int32_t)pupilRadiusCalculationSteps pupilAnglesToSearch:(BiometricSdkKotlinArray<id<BiometricSdkKotlinClosedRange>> *)pupilAnglesToSearch minIrisRadius:(BiometricSdkInt * _Nullable)minIrisRadius maxIrisRadius:(BiometricSdkInt * _Nullable)maxIrisRadius irisRadiusStep:(int32_t)irisRadiusStep irisRadiusCalculationSteps:(int32_t)irisRadiusCalculationSteps irisAnglesToSearch:(BiometricSdkKotlinArray<id<BiometricSdkKotlinClosedRange>> *)irisAnglesToSearch __attribute__((swift_name("init(verticalOffsetStart:verticalOffsetEnd:horizontalOffsetStart:horizontalOffsetEnd:centerOffsetStep:minPupilRadius:maxPupilRadius:pupilRadiusStep:pupilRadiusCalculationSteps:pupilAnglesToSearch:minIrisRadius:maxIrisRadius:irisRadiusStep:irisRadiusCalculationSteps:irisAnglesToSearch:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BiometricSdkIrisExtractPropertiesCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) int32_t centerOffsetStep __attribute__((swift_name("centerOffsetStep")));
@property (readonly) BiometricSdkInt * _Nullable horizontalOffsetEnd __attribute__((swift_name("horizontalOffsetEnd")));
@property (readonly) BiometricSdkInt * _Nullable horizontalOffsetStart __attribute__((swift_name("horizontalOffsetStart")));
@property (readonly) BiometricSdkKotlinArray<id<BiometricSdkKotlinClosedRange>> *irisAnglesToSearch __attribute__((swift_name("irisAnglesToSearch")));
@property (readonly) int32_t irisRadiusCalculationSteps __attribute__((swift_name("irisRadiusCalculationSteps")));
@property (readonly) int32_t irisRadiusStep __attribute__((swift_name("irisRadiusStep")));
@property (readonly) BiometricSdkInt * _Nullable maxIrisRadius __attribute__((swift_name("maxIrisRadius")));
@property (readonly) BiometricSdkInt * _Nullable maxPupilRadius __attribute__((swift_name("maxPupilRadius")));
@property (readonly) BiometricSdkInt * _Nullable minIrisRadius __attribute__((swift_name("minIrisRadius")));
@property (readonly) BiometricSdkInt * _Nullable minPupilRadius __attribute__((swift_name("minPupilRadius")));
@property (readonly) BiometricSdkKotlinArray<id<BiometricSdkKotlinClosedRange>> *pupilAnglesToSearch __attribute__((swift_name("pupilAnglesToSearch")));
@property (readonly) int32_t pupilRadiusCalculationSteps __attribute__((swift_name("pupilRadiusCalculationSteps")));
@property (readonly) int32_t pupilRadiusStep __attribute__((swift_name("pupilRadiusStep")));
@property (readonly) BiometricSdkInt * _Nullable verticalOffsetEnd __attribute__((swift_name("verticalOffsetEnd")));
@property (readonly) BiometricSdkInt * _Nullable verticalOffsetStart __attribute__((swift_name("verticalOffsetStart")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IrisExtractProperties.Companion")))
@interface BiometricSdkIrisExtractPropertiesCompanion : BiometricSdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BiometricSdkIrisExtractPropertiesCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("IrisExtractor")))
@protocol BiometricSdkIrisExtractor
@required
- (BiometricSdkImage * _Nullable)extractSample:(BiometricSdkImage *)sample __attribute__((swift_name("extract(sample:)")));
- (id<BiometricSdkBiometricRecord>)extractSample_:(id<BiometricSdkBiometricRecord>)sample __attribute__((swift_name("extract(sample_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IrisMatchProperties")))
@interface BiometricSdkIrisMatchProperties : BiometricSdkBase
- (instancetype)initWithThreshold:(double)threshold __attribute__((swift_name("init(threshold:)"))) __attribute__((objc_designated_initializer));
@property (readonly) double threshold __attribute__((swift_name("threshold")));
@end

__attribute__((swift_name("IrisMatcher")))
@protocol BiometricSdkIrisMatcher
@required
- (BOOL)matchesSample1:(NSData *)sample1 sample2:(NSData *)sample2 __attribute__((swift_name("matches(sample1:sample2:)")));
- (BOOL)matchesSample1:(id<BiometricSdkBiometricRecord>)sample1 sample2_:(id<BiometricSdkBiometricRecord>)sample2 __attribute__((swift_name("matches(sample1:sample2_:)")));
- (BOOL)matchesAnySample1:(NSData *)sample1 samples:(NSArray<NSData *> *)samples __attribute__((swift_name("matchesAny(sample1:samples:)")));
- (BOOL)matchesAnySample1:(id<BiometricSdkBiometricRecord>)sample1 samples_:(NSArray<id<BiometricSdkBiometricRecord>> *)samples __attribute__((swift_name("matchesAny(sample1:samples_:)")));
@end

__attribute__((swift_name("IrisOperations")))
@protocol BiometricSdkIrisOperations
@required
- (id<BiometricSdkIrisEncoder>)encoder __attribute__((swift_name("encoder()")));
- (id<BiometricSdkIrisExtractor>)extractor __attribute__((swift_name("extractor()")));
- (id<BiometricSdkIrisMatcher>)matcher __attribute__((swift_name("matcher()")));
@end

__attribute__((swift_name("Identifiable")))
@protocol BiometricSdkIdentifiable
@required
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol BiometricSdkKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface BiometricSdkKotlinEnum<E> : BiometricSdkBase <BiometricSdkKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BiometricSdkKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CompressionHistory")))
@interface BiometricSdkCompressionHistory : BiometricSdkKotlinEnum<BiometricSdkCompressionHistory *> <BiometricSdkIdentifiable>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) BiometricSdkCompressionHistory *previousCompressionUndef __attribute__((swift_name("previousCompressionUndef")));
@property (class, readonly) BiometricSdkCompressionHistory *previousCompressionLosslessOrNone __attribute__((swift_name("previousCompressionLosslessOrNone")));
@property (class, readonly) BiometricSdkCompressionHistory *previousCompressionLossy __attribute__((swift_name("previousCompressionLossy")));
+ (BiometricSdkKotlinArray<BiometricSdkCompressionHistory *> *)values __attribute__((swift_name("values()")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceTechnology")))
@interface BiometricSdkDeviceTechnology : BiometricSdkKotlinEnum<BiometricSdkDeviceTechnology *> <BiometricSdkIdentifiable>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) BiometricSdkDeviceTechnology *unknown __attribute__((swift_name("unknown")));
@property (class, readonly) BiometricSdkDeviceTechnology *cmosCcd __attribute__((swift_name("cmosCcd")));
+ (BiometricSdkKotlinArray<BiometricSdkDeviceTechnology *> *)values __attribute__((swift_name("values()")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EyeLabel")))
@interface BiometricSdkEyeLabel : BiometricSdkKotlinEnum<BiometricSdkEyeLabel *> <BiometricSdkIdentifiable>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) BiometricSdkEyeLabel *subjectEyeLabelUndef __attribute__((swift_name("subjectEyeLabelUndef")));
@property (class, readonly) BiometricSdkEyeLabel *subjectEyeLabelRight __attribute__((swift_name("subjectEyeLabelRight")));
@property (class, readonly) BiometricSdkEyeLabel *subjectEyeLabelLeft __attribute__((swift_name("subjectEyeLabelLeft")));
+ (BiometricSdkKotlinArray<BiometricSdkEyeLabel *> *)values __attribute__((swift_name("values()")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HorizontalOrientation")))
@interface BiometricSdkHorizontalOrientation : BiometricSdkKotlinEnum<BiometricSdkHorizontalOrientation *> <BiometricSdkIdentifiable>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) BiometricSdkHorizontalOrientation *orientationUndef __attribute__((swift_name("orientationUndef")));
@property (class, readonly) BiometricSdkHorizontalOrientation *horzOrientationBase __attribute__((swift_name("horzOrientationBase")));
@property (class, readonly) BiometricSdkHorizontalOrientation *horzOrientationFlipped __attribute__((swift_name("horzOrientationFlipped")));
+ (BiometricSdkKotlinArray<BiometricSdkHorizontalOrientation *> *)values __attribute__((swift_name("values()")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ImageFormat")))
@interface BiometricSdkImageFormat : BiometricSdkKotlinEnum<BiometricSdkImageFormat *> <BiometricSdkIdentifiable>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) BiometricSdkImageFormat *imageformatMonoRaw __attribute__((swift_name("imageformatMonoRaw")));
@property (class, readonly) BiometricSdkImageFormat *imageformatMonoJpeg2000 __attribute__((swift_name("imageformatMonoJpeg2000")));
@property (class, readonly) BiometricSdkImageFormat *imageformatMonoPng __attribute__((swift_name("imageformatMonoPng")));
+ (BiometricSdkKotlinArray<BiometricSdkImageFormat *> *)values __attribute__((swift_name("values()")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ImageType")))
@interface BiometricSdkImageType : BiometricSdkKotlinEnum<BiometricSdkImageType *> <BiometricSdkIdentifiable>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) BiometricSdkImageType *imageTypeUncropped __attribute__((swift_name("imageTypeUncropped")));
@property (class, readonly) BiometricSdkImageType *imageTypeVga __attribute__((swift_name("imageTypeVga")));
@property (class, readonly) BiometricSdkImageType *imageTypeCropped __attribute__((swift_name("imageTypeCropped")));
@property (class, readonly) BiometricSdkImageType *imageTypeCroppedAndMasked __attribute__((swift_name("imageTypeCroppedAndMasked")));
+ (BiometricSdkKotlinArray<BiometricSdkImageType *> *)values __attribute__((swift_name("values()")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("BiometricRecord")))
@protocol BiometricSdkBiometricRecord
@required
@property (readonly) int8_t certificationFlag __attribute__((swift_name("certificationFlag")));
@property (readonly) NSString *formatIdentifier __attribute__((swift_name("formatIdentifier")));
@property (readonly) NSString *formatVersion __attribute__((swift_name("formatVersion")));
@property (readonly) BiometricSdkBiometricType *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IsoRecord19794_6")))
@interface BiometricSdkIsoRecord19794_6 : BiometricSdkBase <BiometricSdkBiometricRecord>
- (instancetype)initWithFormatIdentifier:(NSString *)formatIdentifier formatVersion:(NSString *)formatVersion type:(BiometricSdkBiometricType *)type certificationFlag:(int8_t)certificationFlag numberOfIrises:(int32_t)numberOfIrises numberOfEyesRepresented:(int32_t)numberOfEyesRepresented data:(NSArray<BiometricSdkIsoRecord19794_6DataBlock *> *)data __attribute__((swift_name("init(formatIdentifier:formatVersion:type:certificationFlag:numberOfIrises:numberOfEyesRepresented:data:)"))) __attribute__((objc_designated_initializer));
- (BiometricSdkIsoRecord19794_6 *)doCopyFormatIdentifier:(NSString *)formatIdentifier formatVersion:(NSString *)formatVersion type:(BiometricSdkBiometricType *)type certificationFlag:(int8_t)certificationFlag numberOfIrises:(int32_t)numberOfIrises numberOfEyesRepresented:(int32_t)numberOfEyesRepresented data:(NSArray<BiometricSdkIsoRecord19794_6DataBlock *> *)data __attribute__((swift_name("doCopy(formatIdentifier:formatVersion:type:certificationFlag:numberOfIrises:numberOfEyesRepresented:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int8_t certificationFlag __attribute__((swift_name("certificationFlag")));
@property (readonly) NSArray<BiometricSdkIsoRecord19794_6DataBlock *> *data __attribute__((swift_name("data")));
@property (readonly) NSString *formatIdentifier __attribute__((swift_name("formatIdentifier")));
@property (readonly) NSString *formatVersion __attribute__((swift_name("formatVersion")));
@property (readonly) int32_t numberOfEyesRepresented __attribute__((swift_name("numberOfEyesRepresented")));
@property (readonly) int32_t numberOfIrises __attribute__((swift_name("numberOfIrises")));
@property (readonly) BiometricSdkBiometricType *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IsoRecord19794_6DataBlock")))
@interface BiometricSdkIsoRecord19794_6DataBlock : BiometricSdkBase
- (instancetype)initWithHeader:(BiometricSdkIsoRecord19794_6Header *)header image:(BiometricSdkKotlinByteArray *)image __attribute__((swift_name("init(header:image:)"))) __attribute__((objc_designated_initializer));
- (BiometricSdkIsoRecord19794_6DataBlock *)doCopyHeader:(BiometricSdkIsoRecord19794_6Header *)header image:(BiometricSdkKotlinByteArray *)image __attribute__((swift_name("doCopy(header:image:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BiometricSdkIsoRecord19794_6Header *header __attribute__((swift_name("header")));
@property (readonly) BiometricSdkKotlinByteArray *image __attribute__((swift_name("image")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IsoRecord19794_6Header")))
@interface BiometricSdkIsoRecord19794_6Header : BiometricSdkBase
- (instancetype)initWithDateAndTime:(BiometricSdkKotlinx_datetimeInstant *)dateAndTime deviceTechnologyId:(BiometricSdkDeviceTechnology *)deviceTechnologyId deviceVendorId:(int32_t)deviceVendorId deviceTypeId:(int32_t)deviceTypeId qualityBlocks:(NSArray<BiometricSdkQualityBlock *> *)qualityBlocks representationNumber:(int32_t)representationNumber eyeLabel:(BiometricSdkEyeLabel *)eyeLabel imageType:(BiometricSdkImageType *)imageType imageFormat:(BiometricSdkImageFormat *)imageFormat horizontalOrientation:(BiometricSdkHorizontalOrientation *)horizontalOrientation verticalOrientation:(BiometricSdkVerticalOrientation *)verticalOrientation compressionHistory:(BiometricSdkCompressionHistory *)compressionHistory width:(int32_t)width height:(int32_t)height bitDepth:(int32_t)bitDepth range:(BiometricSdkRange *)range rollAngleOfEye:(int32_t)rollAngleOfEye rollAngleUncertainty:(int32_t)rollAngleUncertainty smX:(int32_t)smX lgX:(int32_t)lgX smY:(int32_t)smY lgY:(int32_t)lgY smDiameter:(int32_t)smDiameter lgDiameter:(int32_t)lgDiameter __attribute__((swift_name("init(dateAndTime:deviceTechnologyId:deviceVendorId:deviceTypeId:qualityBlocks:representationNumber:eyeLabel:imageType:imageFormat:horizontalOrientation:verticalOrientation:compressionHistory:width:height:bitDepth:range:rollAngleOfEye:rollAngleUncertainty:smX:lgX:smY:lgY:smDiameter:lgDiameter:)"))) __attribute__((objc_designated_initializer));
- (BiometricSdkIsoRecord19794_6Header *)doCopyDateAndTime:(BiometricSdkKotlinx_datetimeInstant *)dateAndTime deviceTechnologyId:(BiometricSdkDeviceTechnology *)deviceTechnologyId deviceVendorId:(int32_t)deviceVendorId deviceTypeId:(int32_t)deviceTypeId qualityBlocks:(NSArray<BiometricSdkQualityBlock *> *)qualityBlocks representationNumber:(int32_t)representationNumber eyeLabel:(BiometricSdkEyeLabel *)eyeLabel imageType:(BiometricSdkImageType *)imageType imageFormat:(BiometricSdkImageFormat *)imageFormat horizontalOrientation:(BiometricSdkHorizontalOrientation *)horizontalOrientation verticalOrientation:(BiometricSdkVerticalOrientation *)verticalOrientation compressionHistory:(BiometricSdkCompressionHistory *)compressionHistory width:(int32_t)width height:(int32_t)height bitDepth:(int32_t)bitDepth range:(BiometricSdkRange *)range rollAngleOfEye:(int32_t)rollAngleOfEye rollAngleUncertainty:(int32_t)rollAngleUncertainty smX:(int32_t)smX lgX:(int32_t)lgX smY:(int32_t)smY lgY:(int32_t)lgY smDiameter:(int32_t)smDiameter lgDiameter:(int32_t)lgDiameter __attribute__((swift_name("doCopy(dateAndTime:deviceTechnologyId:deviceVendorId:deviceTypeId:qualityBlocks:representationNumber:eyeLabel:imageType:imageFormat:horizontalOrientation:verticalOrientation:compressionHistory:width:height:bitDepth:range:rollAngleOfEye:rollAngleUncertainty:smX:lgX:smY:lgY:smDiameter:lgDiameter:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t bitDepth __attribute__((swift_name("bitDepth")));
@property (readonly) BiometricSdkCompressionHistory *compressionHistory __attribute__((swift_name("compressionHistory")));
@property (readonly) BiometricSdkKotlinx_datetimeInstant *dateAndTime __attribute__((swift_name("dateAndTime")));
@property (readonly) BiometricSdkDeviceTechnology *deviceTechnologyId __attribute__((swift_name("deviceTechnologyId")));
@property (readonly) int32_t deviceTypeId __attribute__((swift_name("deviceTypeId")));
@property (readonly) int32_t deviceVendorId __attribute__((swift_name("deviceVendorId")));
@property (readonly) BiometricSdkEyeLabel *eyeLabel __attribute__((swift_name("eyeLabel")));
@property (readonly) int32_t height __attribute__((swift_name("height")));
@property (readonly) BiometricSdkHorizontalOrientation *horizontalOrientation __attribute__((swift_name("horizontalOrientation")));
@property (readonly) BiometricSdkImageFormat *imageFormat __attribute__((swift_name("imageFormat")));
@property (readonly) BiometricSdkImageType *imageType __attribute__((swift_name("imageType")));
@property (readonly) int32_t lgDiameter __attribute__((swift_name("lgDiameter")));
@property (readonly) int32_t lgX __attribute__((swift_name("lgX")));
@property (readonly) int32_t lgY __attribute__((swift_name("lgY")));
@property (readonly) NSArray<BiometricSdkQualityBlock *> *qualityBlocks __attribute__((swift_name("qualityBlocks")));
@property (readonly) BiometricSdkRange *range __attribute__((swift_name("range")));
@property (readonly) int32_t representationNumber __attribute__((swift_name("representationNumber")));
@property (readonly) int32_t rollAngleOfEye __attribute__((swift_name("rollAngleOfEye")));
@property (readonly) int32_t rollAngleUncertainty __attribute__((swift_name("rollAngleUncertainty")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@property (readonly) int32_t smDiameter __attribute__((swift_name("smDiameter")));
@property (readonly) int32_t smX __attribute__((swift_name("smX")));
@property (readonly) int32_t smY __attribute__((swift_name("smY")));
@property (readonly) BiometricSdkVerticalOrientation *verticalOrientation __attribute__((swift_name("verticalOrientation")));
@property (readonly) int32_t width __attribute__((swift_name("width")));
@end

__attribute__((swift_name("BiometricRecordSerializer")))
@protocol BiometricSdkBiometricRecordSerializer
@required
- (BOOL)canReadData:(BiometricSdkKotlinByteArray *)data __attribute__((swift_name("canRead(data:)")));
- (id<BiometricSdkBiometricRecord>)readData:(BiometricSdkKotlinByteArray *)data __attribute__((swift_name("read(data:)")));
- (BiometricSdkKotlinByteArray *)writeRecord:(id<BiometricSdkBiometricRecord>)record __attribute__((swift_name("write(record:)")));
@property (readonly) NSString *formatIdentifier __attribute__((swift_name("formatIdentifier")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IsoRecord19794_6Serializer")))
@interface BiometricSdkIsoRecord19794_6Serializer : BiometricSdkBase <BiometricSdkBiometricRecordSerializer>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BOOL)canReadData:(BiometricSdkKotlinByteArray *)data __attribute__((swift_name("canRead(data:)")));
- (BiometricSdkIsoRecord19794_6 *)readData:(BiometricSdkKotlinByteArray *)data __attribute__((swift_name("read(data:)")));
- (BiometricSdkKotlinByteArray *)writeRecord:(BiometricSdkIsoRecord19794_6 *)record __attribute__((swift_name("write(record:)")));
@property (readonly) NSString *formatIdentifier __attribute__((swift_name("formatIdentifier")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Properties")))
@interface BiometricSdkProperties : BiometricSdkKotlinEnum<BiometricSdkProperties *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) BiometricSdkProperties *horizontalOrientation __attribute__((swift_name("horizontalOrientation")));
@property (class, readonly) BiometricSdkProperties *verticalOrientation __attribute__((swift_name("verticalOrientation")));
@property (class, readonly) BiometricSdkProperties *compressionHistory __attribute__((swift_name("compressionHistory")));
+ (BiometricSdkKotlinArray<BiometricSdkProperties *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("QualityBlock")))
@interface BiometricSdkQualityBlock : BiometricSdkBase
- (instancetype)initWithQualityScore:(int32_t)qualityScore qualityAlgorithmVendorId:(int32_t)qualityAlgorithmVendorId qualityAlgorithmId:(int32_t)qualityAlgorithmId __attribute__((swift_name("init(qualityScore:qualityAlgorithmVendorId:qualityAlgorithmId:)"))) __attribute__((objc_designated_initializer));
- (BiometricSdkQualityBlock *)doCopyQualityScore:(int32_t)qualityScore qualityAlgorithmVendorId:(int32_t)qualityAlgorithmVendorId qualityAlgorithmId:(int32_t)qualityAlgorithmId __attribute__((swift_name("doCopy(qualityScore:qualityAlgorithmVendorId:qualityAlgorithmId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t qualityAlgorithmId __attribute__((swift_name("qualityAlgorithmId")));
@property (readonly) int32_t qualityAlgorithmVendorId __attribute__((swift_name("qualityAlgorithmVendorId")));
@property (readonly) int32_t qualityScore __attribute__((swift_name("qualityScore")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Range")))
@interface BiometricSdkRange : BiometricSdkKotlinEnum<BiometricSdkRange *> <BiometricSdkIdentifiable>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) BiometricSdkRange *rangeUnassigned __attribute__((swift_name("rangeUnassigned")));
@property (class, readonly) BiometricSdkRange *rangeFailed __attribute__((swift_name("rangeFailed")));
@property (class, readonly) BiometricSdkRange *rangeOverflow __attribute__((swift_name("rangeOverflow")));
+ (BiometricSdkKotlinArray<BiometricSdkRange *> *)values __attribute__((swift_name("values()")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VerticalOrientation")))
@interface BiometricSdkVerticalOrientation : BiometricSdkKotlinEnum<BiometricSdkVerticalOrientation *> <BiometricSdkIdentifiable>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) BiometricSdkVerticalOrientation *orientationUndef __attribute__((swift_name("orientationUndef")));
@property (class, readonly) BiometricSdkVerticalOrientation *vertOrientationBase __attribute__((swift_name("vertOrientationBase")));
@property (class, readonly) BiometricSdkVerticalOrientation *vertOrientationFlipped __attribute__((swift_name("vertOrientationFlipped")));
+ (BiometricSdkKotlinArray<BiometricSdkVerticalOrientation *> *)values __attribute__((swift_name("values()")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CertificationRecord")))
@interface BiometricSdkCertificationRecord : BiometricSdkBase
- (instancetype)initWithCertificationAuthorityId:(int32_t)certificationAuthorityId certificationSchemeId:(int32_t)certificationSchemeId __attribute__((swift_name("init(certificationAuthorityId:certificationSchemeId:)"))) __attribute__((objc_designated_initializer));
- (BiometricSdkCertificationRecord *)doCopyCertificationAuthorityId:(int32_t)certificationAuthorityId certificationSchemeId:(int32_t)certificationSchemeId __attribute__((swift_name("doCopy(certificationAuthorityId:certificationSchemeId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t certificationAuthorityId __attribute__((swift_name("certificationAuthorityId")));
@property (readonly) int32_t certificationSchemeId __attribute__((swift_name("certificationSchemeId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IsoRecord19794_2")))
@interface BiometricSdkIsoRecord19794_2 : BiometricSdkBase <BiometricSdkBiometricRecord>
- (instancetype)initWithFormatIdentifier:(NSString *)formatIdentifier formatVersion:(NSString *)formatVersion type:(BiometricSdkBiometricType *)type certificationFlag:(int8_t)certificationFlag numberOfFingers:(int32_t)numberOfFingers data:(NSArray<BiometricSdkIsoRecord19794_2DataBlock *> *)data __attribute__((swift_name("init(formatIdentifier:formatVersion:type:certificationFlag:numberOfFingers:data:)"))) __attribute__((objc_designated_initializer));
- (BiometricSdkIsoRecord19794_2 *)doCopyFormatIdentifier:(NSString *)formatIdentifier formatVersion:(NSString *)formatVersion type:(BiometricSdkBiometricType *)type certificationFlag:(int8_t)certificationFlag numberOfFingers:(int32_t)numberOfFingers data:(NSArray<BiometricSdkIsoRecord19794_2DataBlock *> *)data __attribute__((swift_name("doCopy(formatIdentifier:formatVersion:type:certificationFlag:numberOfFingers:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int8_t certificationFlag __attribute__((swift_name("certificationFlag")));
@property (readonly) NSArray<BiometricSdkIsoRecord19794_2DataBlock *> *data __attribute__((swift_name("data")));
@property (readonly) NSString *formatIdentifier __attribute__((swift_name("formatIdentifier")));
@property (readonly) NSString *formatVersion __attribute__((swift_name("formatVersion")));
@property (readonly) int32_t numberOfFingers __attribute__((swift_name("numberOfFingers")));
@property (readonly) BiometricSdkBiometricType *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IsoRecord19794_2DataBlock")))
@interface BiometricSdkIsoRecord19794_2DataBlock : BiometricSdkBase
- (instancetype)initWithHeader:(BiometricSdkIsoRecord19794_2Header *)header data:(NSArray<BiometricSdkIsoRecord19794_2MinutiaData *> *)data extendedData:(BiometricSdkKotlinByteArray *)extendedData __attribute__((swift_name("init(header:data:extendedData:)"))) __attribute__((objc_designated_initializer));
- (BiometricSdkIsoRecord19794_2DataBlock *)doCopyHeader:(BiometricSdkIsoRecord19794_2Header *)header data:(NSArray<BiometricSdkIsoRecord19794_2MinutiaData *> *)data extendedData:(BiometricSdkKotlinByteArray *)extendedData __attribute__((swift_name("doCopy(header:data:extendedData:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<BiometricSdkIsoRecord19794_2MinutiaData *> *data __attribute__((swift_name("data")));
@property (readonly) BiometricSdkKotlinByteArray *extendedData __attribute__((swift_name("extendedData")));
@property (readonly) BiometricSdkIsoRecord19794_2Header *header __attribute__((swift_name("header")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IsoRecord19794_2Header")))
@interface BiometricSdkIsoRecord19794_2Header : BiometricSdkBase
- (instancetype)initWithDateAndTime:(BiometricSdkKotlinx_datetimeInstant *)dateAndTime deviceTechnologyId:(int32_t)deviceTechnologyId deviceVendorId:(int32_t)deviceVendorId deviceTypeId:(int32_t)deviceTypeId qualityRecords:(NSArray<BiometricSdkQualityRecord *> *)qualityRecords certificationRecords:(NSArray<BiometricSdkCertificationRecord *> *)certificationRecords fingerPosition:(int32_t)fingerPosition representationNumber:(int32_t)representationNumber spatialSamplingRateHoriz:(int32_t)spatialSamplingRateHoriz spatialSamplingRateVert:(int32_t)spatialSamplingRateVert impressionType:(int32_t)impressionType width:(int32_t)width height:(int32_t)height minutiaeLength:(int32_t)minutiaeLength ridgeEndingType:(int32_t)ridgeEndingType minutiaeNumber:(int32_t)minutiaeNumber __attribute__((swift_name("init(dateAndTime:deviceTechnologyId:deviceVendorId:deviceTypeId:qualityRecords:certificationRecords:fingerPosition:representationNumber:spatialSamplingRateHoriz:spatialSamplingRateVert:impressionType:width:height:minutiaeLength:ridgeEndingType:minutiaeNumber:)"))) __attribute__((objc_designated_initializer));
- (BiometricSdkIsoRecord19794_2Header *)doCopyDateAndTime:(BiometricSdkKotlinx_datetimeInstant *)dateAndTime deviceTechnologyId:(int32_t)deviceTechnologyId deviceVendorId:(int32_t)deviceVendorId deviceTypeId:(int32_t)deviceTypeId qualityRecords:(NSArray<BiometricSdkQualityRecord *> *)qualityRecords certificationRecords:(NSArray<BiometricSdkCertificationRecord *> *)certificationRecords fingerPosition:(int32_t)fingerPosition representationNumber:(int32_t)representationNumber spatialSamplingRateHoriz:(int32_t)spatialSamplingRateHoriz spatialSamplingRateVert:(int32_t)spatialSamplingRateVert impressionType:(int32_t)impressionType width:(int32_t)width height:(int32_t)height minutiaeLength:(int32_t)minutiaeLength ridgeEndingType:(int32_t)ridgeEndingType minutiaeNumber:(int32_t)minutiaeNumber __attribute__((swift_name("doCopy(dateAndTime:deviceTechnologyId:deviceVendorId:deviceTypeId:qualityRecords:certificationRecords:fingerPosition:representationNumber:spatialSamplingRateHoriz:spatialSamplingRateVert:impressionType:width:height:minutiaeLength:ridgeEndingType:minutiaeNumber:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<BiometricSdkCertificationRecord *> *certificationRecords __attribute__((swift_name("certificationRecords")));
@property (readonly) BiometricSdkKotlinx_datetimeInstant *dateAndTime __attribute__((swift_name("dateAndTime")));
@property (readonly) int32_t deviceTechnologyId __attribute__((swift_name("deviceTechnologyId")));
@property (readonly) int32_t deviceTypeId __attribute__((swift_name("deviceTypeId")));
@property (readonly) int32_t deviceVendorId __attribute__((swift_name("deviceVendorId")));
@property (readonly) int32_t fingerPosition __attribute__((swift_name("fingerPosition")));
@property (readonly) int32_t height __attribute__((swift_name("height")));
@property (readonly) int32_t impressionType __attribute__((swift_name("impressionType")));
@property (readonly) int32_t minutiaeLength __attribute__((swift_name("minutiaeLength")));
@property (readonly) int32_t minutiaeNumber __attribute__((swift_name("minutiaeNumber")));
@property (readonly) NSArray<BiometricSdkQualityRecord *> *qualityRecords __attribute__((swift_name("qualityRecords")));
@property (readonly) int32_t representationNumber __attribute__((swift_name("representationNumber")));
@property (readonly) int32_t ridgeEndingType __attribute__((swift_name("ridgeEndingType")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@property (readonly) int32_t spatialSamplingRateHoriz __attribute__((swift_name("spatialSamplingRateHoriz")));
@property (readonly) int32_t spatialSamplingRateVert __attribute__((swift_name("spatialSamplingRateVert")));
@property (readonly) int32_t width __attribute__((swift_name("width")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IsoRecord19794_2MinutiaData")))
@interface BiometricSdkIsoRecord19794_2MinutiaData : BiometricSdkBase
- (instancetype)initWithType:(int32_t)type minutiaX:(int32_t)minutiaX minutiaY:(int32_t)minutiaY angle:(int32_t)angle quality:(int32_t)quality __attribute__((swift_name("init(type:minutiaX:minutiaY:angle:quality:)"))) __attribute__((objc_designated_initializer));
- (BiometricSdkIsoRecord19794_2MinutiaData *)doCopyType:(int32_t)type minutiaX:(int32_t)minutiaX minutiaY:(int32_t)minutiaY angle:(int32_t)angle quality:(int32_t)quality __attribute__((swift_name("doCopy(type:minutiaX:minutiaY:angle:quality:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t angle __attribute__((swift_name("angle")));
@property (readonly) int32_t minutiaX __attribute__((swift_name("minutiaX")));
@property (readonly) int32_t minutiaY __attribute__((swift_name("minutiaY")));
@property (readonly) int32_t quality __attribute__((swift_name("quality")));
@property (readonly) int32_t type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IsoRecord19794_2Serializer")))
@interface BiometricSdkIsoRecord19794_2Serializer : BiometricSdkBase <BiometricSdkBiometricRecordSerializer>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BOOL)canReadData:(BiometricSdkKotlinByteArray *)data __attribute__((swift_name("canRead(data:)")));
- (BiometricSdkIsoRecord19794_2 *)readData:(BiometricSdkKotlinByteArray *)data __attribute__((swift_name("read(data:)")));
- (BiometricSdkKotlinByteArray *)writeRecord:(BiometricSdkIsoRecord19794_2 *)record __attribute__((swift_name("write(record:)")));
@property (readonly) NSString *formatIdentifier __attribute__((swift_name("formatIdentifier")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("QualityRecord")))
@interface BiometricSdkQualityRecord : BiometricSdkBase
- (instancetype)initWithQualityScore:(int32_t)qualityScore qualityAlgorithmVendorId:(int32_t)qualityAlgorithmVendorId qualityAlgorithmId:(int32_t)qualityAlgorithmId __attribute__((swift_name("init(qualityScore:qualityAlgorithmVendorId:qualityAlgorithmId:)"))) __attribute__((objc_designated_initializer));
- (BiometricSdkQualityRecord *)doCopyQualityScore:(int32_t)qualityScore qualityAlgorithmVendorId:(int32_t)qualityAlgorithmVendorId qualityAlgorithmId:(int32_t)qualityAlgorithmId __attribute__((swift_name("doCopy(qualityScore:qualityAlgorithmVendorId:qualityAlgorithmId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t qualityAlgorithmId __attribute__((swift_name("qualityAlgorithmId")));
@property (readonly) int32_t qualityAlgorithmVendorId __attribute__((swift_name("qualityAlgorithmVendorId")));
@property (readonly) int32_t qualityScore __attribute__((swift_name("qualityScore")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FaceEncodeProperties")))
@interface BiometricSdkFaceEncodeProperties : BiometricSdkBase
- (instancetype)initWithFaceNetModel:(BiometricSdkFaceNetModelConfiguration *)faceNetModel __attribute__((swift_name("init(faceNetModel:)"))) __attribute__((objc_designated_initializer));
@property (readonly) BiometricSdkFaceNetModelConfiguration *faceNetModel __attribute__((swift_name("faceNetModel")));
@end

__attribute__((swift_name("FaceEncoder")))
@protocol BiometricSdkFaceEncoder
@required
- (NSData *)encodeSdkImage:(BiometricSdkImage *)sdkImage __attribute__((swift_name("encode(sdkImage:)")));
- (NSData *)encodeNativeImage:(void *)nativeImage __attribute__((swift_name("encode(nativeImage:)")));
- (id<BiometricSdkFaceTemplateRecord>)encodeRecord:(id<BiometricSdkFaceImageRecord>)record __attribute__((swift_name("encode(record:)")));
- (NSData * _Nullable)extractAndEncodeSdkImage:(BiometricSdkImage *)sdkImage __attribute__((swift_name("extractAndEncode(sdkImage:)")));
- (NSData * _Nullable)extractAndEncodeNativeImage:(void *)nativeImage __attribute__((swift_name("extractAndEncode(nativeImage:)")));
- (id<BiometricSdkFaceTemplateRecord>)extractAndEncodeRecord:(id<BiometricSdkFaceImageRecord>)record __attribute__((swift_name("extractAndEncode(record:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FaceExtractProperties")))
@interface BiometricSdkFaceExtractProperties : BiometricSdkBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((swift_name("FaceExtractor")))
@protocol BiometricSdkFaceExtractor
@required
- (BiometricSdkImage * _Nullable)extractSdkImage:(BiometricSdkImage *)sdkImage __attribute__((swift_name("extract(sdkImage:)")));
- (void * _Nullable)extractNativeImage:(void *)nativeImage __attribute__((swift_name("extract(nativeImage:)")));
- (id<BiometricSdkFaceImageRecord>)extractRecord:(id<BiometricSdkFaceImageRecord>)record __attribute__((swift_name("extract(record:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FaceMatchProperties")))
@interface BiometricSdkFaceMatchProperties : BiometricSdkBase
- (instancetype)initWithThreshold:(double)threshold __attribute__((swift_name("init(threshold:)"))) __attribute__((objc_designated_initializer));
@property (readonly) double threshold __attribute__((swift_name("threshold")));
@end

__attribute__((swift_name("FaceMatcher")))
@protocol BiometricSdkFaceMatcher
@required
- (double)matchScoreSample1:(NSData *)sample1 sample2:(NSData *)sample2 __attribute__((swift_name("matchScore(sample1:sample2:)")));
- (double)matchScoreSample1:(id<BiometricSdkFaceTemplateRecord>)sample1 sample2_:(id<BiometricSdkFaceTemplateRecord>)sample2 __attribute__((swift_name("matchScore(sample1:sample2_:)")));
- (double)matchScoreMinSample1:(NSData *)sample1 samples:(NSArray<NSData *> *)samples __attribute__((swift_name("matchScoreMin(sample1:samples:)")));
- (double)matchScoreMinSample1:(id<BiometricSdkFaceTemplateRecord>)sample1 samples_:(NSArray<id<BiometricSdkFaceTemplateRecord>> *)samples __attribute__((swift_name("matchScoreMin(sample1:samples_:)")));
- (BOOL)matchesSample1:(NSData *)sample1 sample2:(NSData *)sample2 __attribute__((swift_name("matches(sample1:sample2:)")));
- (BOOL)matchesSample1:(id<BiometricSdkFaceTemplateRecord>)sample1 sample2__:(id<BiometricSdkFaceTemplateRecord>)sample2 __attribute__((swift_name("matches(sample1:sample2__:)")));
- (BOOL)matchesAnySample1:(NSData *)sample1 samples:(NSArray<NSData *> *)samples __attribute__((swift_name("matchesAny(sample1:samples:)")));
- (BOOL)matchesAnySample1:(id<BiometricSdkFaceTemplateRecord>)sample1 samples__:(NSArray<id<BiometricSdkFaceTemplateRecord>> *)samples __attribute__((swift_name("matchesAny(sample1:samples__:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FaceNetModelConfiguration")))
@interface BiometricSdkFaceNetModelConfiguration : BiometricSdkBase
- (instancetype)initWithPath:(NSString *)path inputWidth:(int32_t)inputWidth inputHeight:(int32_t)inputHeight outputLength:(int32_t)outputLength __attribute__((swift_name("init(path:inputWidth:inputHeight:outputLength:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPath:(NSString *)path inputWidth:(int32_t)inputWidth inputHeight:(int32_t)inputHeight outputLength:(int32_t)outputLength modelChecksum:(NSString * _Nullable)modelChecksum modelChecksumMethod:(BiometricSdkHashMethod * _Nullable)modelChecksumMethod overrideCacheOnWrongChecksum:(BiometricSdkBoolean * _Nullable)overrideCacheOnWrongChecksum __attribute__((swift_name("init(path:inputWidth:inputHeight:outputLength:modelChecksum:modelChecksumMethod:overrideCacheOnWrongChecksum:)"))) __attribute__((objc_designated_initializer));
@property (readonly) int32_t inputHeight __attribute__((swift_name("inputHeight")));
@property (readonly) int32_t inputWidth __attribute__((swift_name("inputWidth")));
@property (readonly) NSString * _Nullable modelChecksum __attribute__((swift_name("modelChecksum")));
@property (readonly) BiometricSdkHashMethod * _Nullable modelChecksumMethod __attribute__((swift_name("modelChecksumMethod")));
@property (readonly) int32_t outputLength __attribute__((swift_name("outputLength")));
@property (readonly) BiometricSdkBoolean * _Nullable overrideCacheOnWrongChecksum __attribute__((swift_name("overrideCacheOnWrongChecksum")));
@property (readonly) NSString *path __attribute__((swift_name("path")));
@end

__attribute__((swift_name("FaceOperations")))
@protocol BiometricSdkFaceOperations
@required
- (id<BiometricSdkFaceEncoder>)encoder __attribute__((swift_name("encoder()")));
- (id<BiometricSdkFaceExtractor>)extractor __attribute__((swift_name("extractor()")));
- (id<BiometricSdkFaceMatcher>)matcher __attribute__((swift_name("matcher()")));
@end

__attribute__((swift_name("FaceImageRecord")))
@protocol BiometricSdkFaceImageRecord <BiometricSdkBiometricRecord>
@required
@end

__attribute__((swift_name("FaceTemplateRecord")))
@protocol BiometricSdkFaceTemplateRecord <BiometricSdkBiometricRecord>
@required
@end

__attribute__((swift_name("InputOutputImageConvertOperations")))
@protocol BiometricSdkInputOutputImageConvertOperations
@required
- (NSData *)byteArrayToNsDataData:(BiometricSdkKotlinByteArray *)data __attribute__((swift_name("byteArrayToNsData(data:)")));
- (BiometricSdkImage *)convertImage:(void *)image __attribute__((swift_name("convert(image:)")));
- (void *)convertToCGImageImage:(BiometricSdkImage *)image __attribute__((swift_name("convertToCGImage(image:)")));
- (BiometricSdkKotlinByteArray *)nsDataToByteArrayData:(NSData *)data __attribute__((swift_name("nsDataToByteArray(data:)")));
@end

__attribute__((swift_name("InputOutputImageOperations")))
@protocol BiometricSdkInputOutputImageOperations
@required
- (BiometricSdkImage *)readImageData:(BiometricSdkKotlinByteArray *)data __attribute__((swift_name("readImage(data:)")));
- (void *)readNativeImageData:(NSData *)data __attribute__((swift_name("readNativeImage(data:)")));
- (BiometricSdkKotlinByteArray *)writeImageImage:(BiometricSdkImage *)image format:(BiometricSdkImageFormat_ *)format __attribute__((swift_name("writeImage(image:format:)")));
- (NSData *)writeNativeImageImage:(void *)image format:(BiometricSdkImageFormat_ *)format __attribute__((swift_name("writeNativeImage(image:format:)")));
@end

__attribute__((swift_name("InputOutputRecordOperations")))
@protocol BiometricSdkInputOutputRecordOperations
@required
- (id<BiometricSdkBiometricRecord>)readRecordData:(BiometricSdkKotlinByteArray *)data __attribute__((swift_name("readRecord(data:)")));
- (BiometricSdkKotlinByteArray *)writeRecordRecord:(id<BiometricSdkBiometricRecord>)record __attribute__((swift_name("writeRecord(record:)")));
@end

__attribute__((swift_name("InputOutputOperations")))
@protocol BiometricSdkInputOutputOperations <BiometricSdkInputOutputRecordOperations, BiometricSdkInputOutputImageOperations, BiometricSdkInputOutputImageConvertOperations>
@required
@end

__attribute__((swift_name("ResourceIO")))
@protocol BiometricSdkResourceIO
@required
- (BOOL)cacheDeleteName:(NSString *)name __attribute__((swift_name("cacheDelete(name:)")));
- (BOOL)cacheExistsName:(NSString *)name __attribute__((swift_name("cacheExists(name:)")));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BiometricSdkKotlinByteArray * _Nullable)cacheLoadName:(NSString *)name error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("cacheLoad(name:)")));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)cacheSaveName:(NSString *)name data:(BiometricSdkKotlinByteArray *)data error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("cacheSave(name:data:)")));
- (NSString *)calculateHashData:(BiometricSdkKotlinByteArray *)data method:(BiometricSdkHashMethod *)method __attribute__((swift_name("calculateHash(data:method:)")));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BiometricSdkKotlinByteArray * _Nullable)readPath:(NSString *)path error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("read(path:)")));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BiometricSdkKotlinByteArray * _Nullable)readOrCacheLoadDataName:(NSString *)name path:(NSString *)path error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("readOrCacheLoadData(name:path:)")));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BiometricSdkKotlinByteArray * _Nullable)readOrCacheLoadDataName:(NSString *)name path:(NSString *)path modelCheckSum:(NSString *)modelCheckSum modelChecksumMethod:(BiometricSdkHashMethod *)modelChecksumMethod overrideOnWrongChecksum:(BOOL)overrideOnWrongChecksum error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("readOrCacheLoadData(name:path:modelCheckSum:modelChecksumMethod:overrideOnWrongChecksum:)")));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (NSString * _Nullable)readOrCacheLoadPathName:(NSString *)name path:(NSString *)path error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("readOrCacheLoadPath(name:path:)")));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (NSString * _Nullable)readOrCacheLoadPathName:(NSString *)name path:(NSString *)path modelCheckSum:(NSString *)modelCheckSum modelChecksumMethod:(BiometricSdkHashMethod *)modelChecksumMethod overrideOnWrongChecksum:(BOOL)overrideOnWrongChecksum error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("readOrCacheLoadPath(name:path:modelCheckSum:modelChecksumMethod:overrideOnWrongChecksum:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResourceIOFactory")))
@interface BiometricSdkResourceIOFactory : BiometricSdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)resourceIOFactory __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BiometricSdkResourceIOFactory *shared __attribute__((swift_name("shared")));
- (id<BiometricSdkResourceIO>)getInstance __attribute__((swift_name("getInstance()")));
- (void)initializeContext:(BiometricSdkPlatformContext * _Nullable)context __attribute__((swift_name("initialize(context:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOException")))
@interface BiometricSdkIOException : BiometricSdkSdkException
- (instancetype)initWithMessage:(NSString *)message throwable:(BiometricSdkKotlinThrowable * _Nullable)throwable __attribute__((swift_name("init(message:throwable:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(BiometricSdkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UnknownFormatException")))
@interface BiometricSdkUnknownFormatException : BiometricSdkKotlinException
- (instancetype)initWithMessage:(NSString *)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(BiometricSdkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(BiometricSdkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ImageFormat_")))
@interface BiometricSdkImageFormat_ : BiometricSdkKotlinEnum<BiometricSdkImageFormat_ *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) BiometricSdkImageFormat_ *bmp __attribute__((swift_name("bmp")));
@property (class, readonly) BiometricSdkImageFormat_ *png __attribute__((swift_name("png")));
@property (class, readonly) BiometricSdkImageFormat_ *jpeg __attribute__((swift_name("jpeg")));
+ (BiometricSdkKotlinArray<BiometricSdkImageFormat_ *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((swift_name("ImageSerializer")))
@protocol BiometricSdkImageSerializer
@required
- (BOOL)canReadData:(BiometricSdkKotlinByteArray *)data __attribute__((swift_name("canRead(data:)")));
- (BiometricSdkImage *)readData:(BiometricSdkKotlinByteArray *)data __attribute__((swift_name("read(data:)")));
- (BiometricSdkKotlinByteArray *)writeImage:(BiometricSdkImage *)image __attribute__((swift_name("write(image:)")));
@property (readonly) BiometricSdkImageFormat_ *format __attribute__((swift_name("format")));
@end

__attribute__((swift_name("PlatformContext")))
@interface BiometricSdkPlatformContext : BiometricSdkBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Circle")))
@interface BiometricSdkCircle : BiometricSdkBase
- (instancetype)initWithX:(int32_t)x y:(int32_t)y r:(int32_t)r __attribute__((swift_name("init(x:y:r:)"))) __attribute__((objc_designated_initializer));
- (BOOL)containsX:(int32_t)x y:(int32_t)y __attribute__((swift_name("contains(x:y:)")));
- (BiometricSdkCircle *)doCopyX:(int32_t)x y:(int32_t)y r:(int32_t)r __attribute__((swift_name("doCopy(x:y:r:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t r __attribute__((swift_name("r")));
@property (readonly) int32_t x __attribute__((swift_name("x")));
@property (readonly) int32_t y __attribute__((swift_name("y")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Image")))
@interface BiometricSdkImage : BiometricSdkBase
- (instancetype)initWithWidth:(int32_t)width height:(int32_t)height colorType:(BiometricSdkImageColorType *)colorType colors:(BiometricSdkKotlinIntArray *)colors __attribute__((swift_name("init(width:height:colorType:colors:)"))) __attribute__((objc_designated_initializer));
- (BiometricSdkImage *)clone __attribute__((swift_name("clone()")));
- (BOOL)containsPoint:(BiometricSdkPoint *)point __attribute__((swift_name("contains(point:)")));
- (int32_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (int32_t)getX:(int32_t)x y:(int32_t)y __attribute__((swift_name("get(x:y:)")));
- (BiometricSdkImage *)getXRange:(BiometricSdkKotlinIntRange *)xRange yRange:(BiometricSdkKotlinIntRange *)yRange __attribute__((swift_name("get(xRange:yRange:)")));
- (void)setIndex:(int32_t)index color:(int32_t)color __attribute__((swift_name("set(index:color:)")));
- (void)setX:(int32_t)x y:(int32_t)y color:(int32_t)color __attribute__((swift_name("set(x:y:color:)")));
@property BiometricSdkImageColorType *colorType __attribute__((swift_name("colorType")));
@property (readonly) BiometricSdkKotlinIntArray *colors __attribute__((swift_name("colors")));
@property (readonly) int32_t height __attribute__((swift_name("height")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@property (readonly) int32_t width __attribute__((swift_name("width")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ImageColorType")))
@interface BiometricSdkImageColorType : BiometricSdkKotlinEnum<BiometricSdkImageColorType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) BiometricSdkImageColorType *rgb __attribute__((swift_name("rgb")));
@property (class, readonly) BiometricSdkImageColorType *gray __attribute__((swift_name("gray")));
@property (class, readonly) BiometricSdkImageColorType *binary __attribute__((swift_name("binary")));
+ (BiometricSdkKotlinArray<BiometricSdkImageColorType *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Point")))
@interface BiometricSdkPoint : BiometricSdkBase
- (instancetype)initWithX:(int32_t)x y:(int32_t)y __attribute__((swift_name("init(x:y:)"))) __attribute__((objc_designated_initializer));
- (BiometricSdkPoint *)doCopyX:(int32_t)x y:(int32_t)y __attribute__((swift_name("doCopy(x:y:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t x __attribute__((swift_name("x")));
@property (readonly) int32_t y __attribute__((swift_name("y")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BiometricRecordValidationResult")))
@interface BiometricSdkBiometricRecordValidationResult : BiometricSdkBase
- (instancetype)initWithValidated:(BOOL)validated error:(NSString * _Nullable)error __attribute__((swift_name("init(validated:error:)"))) __attribute__((objc_designated_initializer));
- (BiometricSdkBiometricRecordValidationResult *)doCopyValidated:(BOOL)validated error:(NSString * _Nullable)error __attribute__((swift_name("doCopy(validated:error:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable error __attribute__((swift_name("error")));
@property (readonly) BOOL validated __attribute__((swift_name("validated")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BiometricType")))
@interface BiometricSdkBiometricType : BiometricSdkKotlinEnum<BiometricSdkBiometricType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) BiometricSdkBiometricType *multiple __attribute__((swift_name("multiple")));
@property (class, readonly) BiometricSdkBiometricType *face __attribute__((swift_name("face")));
@property (class, readonly) BiometricSdkBiometricType *voice __attribute__((swift_name("voice")));
@property (class, readonly) BiometricSdkBiometricType *fingerprint __attribute__((swift_name("fingerprint")));
@property (class, readonly) BiometricSdkBiometricType *iris __attribute__((swift_name("iris")));
@property (class, readonly) BiometricSdkBiometricType *retina __attribute__((swift_name("retina")));
@property (class, readonly) BiometricSdkBiometricType *hand __attribute__((swift_name("hand")));
@property (class, readonly) BiometricSdkBiometricType *signature __attribute__((swift_name("signature")));
@property (class, readonly) BiometricSdkBiometricType *keystroke __attribute__((swift_name("keystroke")));
@property (class, readonly) BiometricSdkBiometricType *lipMovement __attribute__((swift_name("lipMovement")));
@property (class, readonly) BiometricSdkBiometricType *thermalFace __attribute__((swift_name("thermalFace")));
@property (class, readonly) BiometricSdkBiometricType *thermalHand __attribute__((swift_name("thermalHand")));
@property (class, readonly) BiometricSdkBiometricType *gait __attribute__((swift_name("gait")));
@property (class, readonly) BiometricSdkBiometricType *bodyOdor __attribute__((swift_name("bodyOdor")));
@property (class, readonly) BiometricSdkBiometricType *dna __attribute__((swift_name("dna")));
@property (class, readonly) BiometricSdkBiometricType *ear __attribute__((swift_name("ear")));
@property (class, readonly) BiometricSdkBiometricType *fingerGeometry __attribute__((swift_name("fingerGeometry")));
@property (class, readonly) BiometricSdkBiometricType *palmGeometry __attribute__((swift_name("palmGeometry")));
@property (class, readonly) BiometricSdkBiometricType *veinPattern __attribute__((swift_name("veinPattern")));
+ (BiometricSdkKotlinArray<BiometricSdkBiometricType *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HashMethod")))
@interface BiometricSdkHashMethod : BiometricSdkKotlinEnum<BiometricSdkHashMethod *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) BiometricSdkHashMethod *crc32 __attribute__((swift_name("crc32")));
@property (class, readonly) BiometricSdkHashMethod *sha256 __attribute__((swift_name("sha256")));
+ (BiometricSdkKotlinArray<BiometricSdkHashMethod *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NSErrorException")))
@interface BiometricSdkNSErrorException : BiometricSdkKotlinException
- (instancetype)initWithNsError:(NSError *)nsError __attribute__((swift_name("init(nsError:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(BiometricSdkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(BiometricSdkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((swift_name("Interpreter")))
@protocol BiometricSdkInterpreter
@required
- (void)invokeInputs:(NSDictionary<BiometricSdkInt *, id> *)inputs outputs:(BiometricSdkMutableDictionary<BiometricSdkInt *, id> *)outputs __attribute__((swift_name("invoke(inputs:outputs:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InterpreterImpl")))
@interface BiometricSdkInterpreterImpl : BiometricSdkBase <BiometricSdkInterpreter>
- (instancetype)initWithModelName:(NSString *)modelName modelPath:(NSString *)modelPath modelChecksum:(NSString * _Nullable)modelChecksum modelChecksumMethod:(BiometricSdkHashMethod * _Nullable)modelChecksumMethod overrideCacheOnWrongChecksum:(BiometricSdkBoolean * _Nullable)overrideCacheOnWrongChecksum __attribute__((swift_name("init(modelName:modelPath:modelChecksum:modelChecksumMethod:overrideCacheOnWrongChecksum:)"))) __attribute__((objc_designated_initializer));
- (void)invokeInputs:(NSDictionary<BiometricSdkInt *, id> *)inputs outputs:(BiometricSdkMutableDictionary<BiometricSdkInt *, id> *)outputs __attribute__((swift_name("invoke(inputs:outputs:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TensorflowException")))
@interface BiometricSdkTensorflowException : BiometricSdkKotlinException
- (instancetype)initWithMessage:(NSString *)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(BiometricSdkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(BiometricSdkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((swift_name("QualityControlOperations")))
@protocol BiometricSdkQualityControlOperations
@required
- (int32_t)calculateData:(BiometricSdkKotlinByteArray *)data __attribute__((swift_name("calculate(data:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface BiometricSdkKotlinByteArray : BiometricSdkBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(BiometricSdkByte *(^)(BiometricSdkInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (BiometricSdkKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

@interface BiometricSdkKotlinByteArray (Extensions)
- (NSData *)toNSData __attribute__((swift_name("toNSData()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IrisEnumExtentionsKt")))
@interface BiometricSdkIrisEnumExtentionsKt : BiometricSdkBase
+ (BiometricSdkKotlinEnum *)findEnumByIdValue:(int32_t)value __attribute__((swift_name("findEnumById(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IsoRecord19794_6HelperKt")))
@interface BiometricSdkIsoRecord19794_6HelperKt : BiometricSdkBase
+ (int32_t)getPropertySource:(int32_t)source pos:(BiometricSdkProperties *)pos __attribute__((swift_name("getProperty(source:pos:)")));
+ (int32_t)setPropertyHor:(int32_t)hor ver:(int32_t)ver com:(int32_t)com __attribute__((swift_name("setProperty(hor:ver:com:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IsoRecord19794_2HelperKt")))
@interface BiometricSdkIsoRecord19794_2HelperKt : BiometricSdkBase
+ (int32_t)getMinutiaValue:(int32_t)value source:(int32_t)source __attribute__((swift_name("getMinutia(value:source:)")));
+ (int32_t)setMinutiaValue:(int32_t)value pos:(int32_t)pos __attribute__((swift_name("setMinutia(value:pos:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlatformContextKt")))
@interface BiometricSdkPlatformContextKt : BiometricSdkBase
+ (BiometricSdkPlatformContext *)createContext __attribute__((swift_name("createContext()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ColorKt")))
@interface BiometricSdkColorKt : BiometricSdkBase
+ (int32_t)createColorR:(int32_t)r g:(int32_t)g b:(int32_t)b __attribute__((swift_name("createColor(r:g:b:)")));
+ (int32_t)blue:(int32_t)receiver __attribute__((swift_name("blue(_:)")));
+ (int32_t)component1:(int32_t)receiver __attribute__((swift_name("component1(_:)")));
+ (int32_t)component2:(int32_t)receiver __attribute__((swift_name("component2(_:)")));
+ (int32_t)component3:(int32_t)receiver __attribute__((swift_name("component3(_:)")));
+ (int32_t)green:(int32_t)receiver __attribute__((swift_name("green(_:)")));
+ (int32_t)red:(int32_t)receiver __attribute__((swift_name("red(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NSDataExtKt")))
@interface BiometricSdkNSDataExtKt : BiometricSdkBase
+ (BiometricSdkKotlinByteArray *)toByteArray:(NSData *)receiver __attribute__((swift_name("toByteArray(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface BiometricSdkKotlinArray<T> : BiometricSdkBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(BiometricSdkInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<BiometricSdkKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("KotlinClosedRange")))
@protocol BiometricSdkKotlinClosedRange
@required
- (BOOL)containsValue:(id)value __attribute__((swift_name("contains(value:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
@property (readonly) id endInclusive __attribute__((swift_name("endInclusive")));
@property (readonly) id start __attribute__((swift_name("start")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface BiometricSdkKotlinEnumCompanion : BiometricSdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BiometricSdkKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeInstant")))
@interface BiometricSdkKotlinx_datetimeInstant : BiometricSdkBase <BiometricSdkKotlinComparable>
@property (class, readonly, getter=companion) BiometricSdkKotlinx_datetimeInstantCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(BiometricSdkKotlinx_datetimeInstant *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BiometricSdkKotlinx_datetimeInstant *)minusDuration:(int64_t)duration __attribute__((swift_name("minus(duration:)")));
- (int64_t)minusOther:(BiometricSdkKotlinx_datetimeInstant *)other __attribute__((swift_name("minus(other:)")));
- (BiometricSdkKotlinx_datetimeInstant *)plusDuration:(int64_t)duration __attribute__((swift_name("plus(duration:)")));
- (int64_t)toEpochMilliseconds __attribute__((swift_name("toEpochMilliseconds()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t epochSeconds __attribute__((swift_name("epochSeconds")));
@property (readonly) int32_t nanosecondsOfSecond __attribute__((swift_name("nanosecondsOfSecond")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinIntArray")))
@interface BiometricSdkKotlinIntArray : BiometricSdkBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(BiometricSdkInt *(^)(BiometricSdkInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int32_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (BiometricSdkKotlinIntIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int32_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("KotlinIterable")))
@protocol BiometricSdkKotlinIterable
@required
- (id<BiometricSdkKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end

__attribute__((swift_name("KotlinIntProgression")))
@interface BiometricSdkKotlinIntProgression : BiometricSdkBase <BiometricSdkKotlinIterable>
@property (class, readonly, getter=companion) BiometricSdkKotlinIntProgressionCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (BiometricSdkKotlinIntIterator *)iterator __attribute__((swift_name("iterator()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t first __attribute__((swift_name("first")));
@property (readonly) int32_t last __attribute__((swift_name("last")));
@property (readonly) int32_t step __attribute__((swift_name("step")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.7")
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((swift_name("KotlinOpenEndRange")))
@protocol BiometricSdkKotlinOpenEndRange
@required
- (BOOL)containsValue_:(id)value __attribute__((swift_name("contains(value_:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
@property (readonly) id endExclusive __attribute__((swift_name("endExclusive")));
@property (readonly) id start __attribute__((swift_name("start")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinIntRange")))
@interface BiometricSdkKotlinIntRange : BiometricSdkKotlinIntProgression <BiometricSdkKotlinClosedRange, BiometricSdkKotlinOpenEndRange>
- (instancetype)initWithStart:(int32_t)start endInclusive:(int32_t)endInclusive __attribute__((swift_name("init(start:endInclusive:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) BiometricSdkKotlinIntRangeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)containsValue:(BiometricSdkInt *)value __attribute__((swift_name("contains(value:)")));
- (BOOL)containsValue_:(BiometricSdkInt *)value __attribute__((swift_name("contains(value_:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.7")
 *   kotlin.ExperimentalStdlibApi
*/
@property (readonly) BiometricSdkInt *endExclusive __attribute__((swift_name("endExclusive"))) __attribute__((deprecated("Can throw an exception when it's impossible to represent the value with Int type, for example, when the range includes MAX_VALUE. It's recommended to use 'endInclusive' property that doesn't throw.")));
@property (readonly) BiometricSdkInt *endInclusive __attribute__((swift_name("endInclusive")));
@property (readonly) BiometricSdkInt *start __attribute__((swift_name("start")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol BiometricSdkKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("KotlinByteIterator")))
@interface BiometricSdkKotlinByteIterator : BiometricSdkBase <BiometricSdkKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BiometricSdkByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeInstant.Companion")))
@interface BiometricSdkKotlinx_datetimeInstantCompanion : BiometricSdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BiometricSdkKotlinx_datetimeInstantCompanion *shared __attribute__((swift_name("shared")));
- (BiometricSdkKotlinx_datetimeInstant *)fromEpochMillisecondsEpochMilliseconds:(int64_t)epochMilliseconds __attribute__((swift_name("fromEpochMilliseconds(epochMilliseconds:)")));
- (BiometricSdkKotlinx_datetimeInstant *)fromEpochSecondsEpochSeconds:(int64_t)epochSeconds nanosecondAdjustment:(int32_t)nanosecondAdjustment __attribute__((swift_name("fromEpochSeconds(epochSeconds:nanosecondAdjustment:)")));
- (BiometricSdkKotlinx_datetimeInstant *)fromEpochSecondsEpochSeconds:(int64_t)epochSeconds nanosecondAdjustment_:(int64_t)nanosecondAdjustment __attribute__((swift_name("fromEpochSeconds(epochSeconds:nanosecondAdjustment_:)")));
- (BiometricSdkKotlinx_datetimeInstant *)now __attribute__((swift_name("now()"))) __attribute__((unavailable("Use Clock.System.now() instead")));
- (BiometricSdkKotlinx_datetimeInstant *)parseIsoString:(NSString *)isoString __attribute__((swift_name("parse(isoString:)")));
- (id<BiometricSdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) BiometricSdkKotlinx_datetimeInstant *DISTANT_FUTURE __attribute__((swift_name("DISTANT_FUTURE")));
@property (readonly) BiometricSdkKotlinx_datetimeInstant *DISTANT_PAST __attribute__((swift_name("DISTANT_PAST")));
@end

__attribute__((swift_name("KotlinIntIterator")))
@interface BiometricSdkKotlinIntIterator : BiometricSdkBase <BiometricSdkKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BiometricSdkInt *)next __attribute__((swift_name("next()")));
- (int32_t)nextInt __attribute__((swift_name("nextInt()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinIntProgression.Companion")))
@interface BiometricSdkKotlinIntProgressionCompanion : BiometricSdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BiometricSdkKotlinIntProgressionCompanion *shared __attribute__((swift_name("shared")));
- (BiometricSdkKotlinIntProgression *)fromClosedRangeRangeStart:(int32_t)rangeStart rangeEnd:(int32_t)rangeEnd step:(int32_t)step __attribute__((swift_name("fromClosedRange(rangeStart:rangeEnd:step:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinIntRange.Companion")))
@interface BiometricSdkKotlinIntRangeCompanion : BiometricSdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) BiometricSdkKotlinIntRangeCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) BiometricSdkKotlinIntRange *EMPTY __attribute__((swift_name("EMPTY")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol BiometricSdkKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<BiometricSdkKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<BiometricSdkKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol BiometricSdkKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<BiometricSdkKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<BiometricSdkKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol BiometricSdkKotlinx_serialization_coreKSerializer <BiometricSdkKotlinx_serialization_coreSerializationStrategy, BiometricSdkKotlinx_serialization_coreDeserializationStrategy>
@required
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol BiometricSdkKotlinx_serialization_coreEncoder
@required
- (id<BiometricSdkKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<BiometricSdkKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<BiometricSdkKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<BiometricSdkKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<BiometricSdkKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<BiometricSdkKotlinx_serialization_coreEncoder>)encodeInlineInlineDescriptor:(id<BiometricSdkKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("encodeInline(inlineDescriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSerializer:(id<BiometricSdkKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<BiometricSdkKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) BiometricSdkKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol BiometricSdkKotlinx_serialization_coreSerialDescriptor
@required
- (NSArray<id<BiometricSdkKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<BiometricSdkKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<BiometricSdkKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) BiometricSdkKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol BiometricSdkKotlinx_serialization_coreDecoder
@required
- (id<BiometricSdkKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<BiometricSdkKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<BiometricSdkKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<BiometricSdkKotlinx_serialization_coreDecoder>)decodeInlineInlineDescriptor:(id<BiometricSdkKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("decodeInline(inlineDescriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (BiometricSdkKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<BiometricSdkKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<BiometricSdkKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) BiometricSdkKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol BiometricSdkKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<BiometricSdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<BiometricSdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<BiometricSdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<BiometricSdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<BiometricSdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<BiometricSdkKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<BiometricSdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<BiometricSdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<BiometricSdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));
- (void)encodeNullableSerializableElementDescriptor:(id<BiometricSdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<BiometricSdkKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<BiometricSdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<BiometricSdkKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<BiometricSdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<BiometricSdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<BiometricSdkKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<BiometricSdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) BiometricSdkKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface BiometricSdkKotlinx_serialization_coreSerializersModule : BiometricSdkBase
- (void)dumpToCollector:(id<BiometricSdkKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));
- (id<BiometricSdkKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<BiometricSdkKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<BiometricSdkKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));
- (id<BiometricSdkKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<BiometricSdkKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));
- (id<BiometricSdkKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<BiometricSdkKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol BiometricSdkKotlinAnnotation
@required
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface BiometricSdkKotlinx_serialization_coreSerialKind : BiometricSdkBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol BiometricSdkKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<BiometricSdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<BiometricSdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<BiometricSdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<BiometricSdkKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<BiometricSdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<BiometricSdkKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<BiometricSdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<BiometricSdkKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<BiometricSdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<BiometricSdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<BiometricSdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<BiometricSdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<BiometricSdkKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<BiometricSdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<BiometricSdkKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<BiometricSdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<BiometricSdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<BiometricSdkKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) BiometricSdkKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface BiometricSdkKotlinNothing : BiometricSdkBase
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol BiometricSdkKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<BiometricSdkKotlinKClass>)kClass provider:(id<BiometricSdkKotlinx_serialization_coreKSerializer> (^)(NSArray<id<BiometricSdkKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<BiometricSdkKotlinKClass>)kClass serializer:(id<BiometricSdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<BiometricSdkKotlinKClass>)baseClass actualClass:(id<BiometricSdkKotlinKClass>)actualClass actualSerializer:(id<BiometricSdkKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<BiometricSdkKotlinKClass>)baseClass defaultDeserializerProvider:(id<BiometricSdkKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<BiometricSdkKotlinKClass>)baseClass defaultDeserializerProvider:(id<BiometricSdkKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<BiometricSdkKotlinKClass>)baseClass defaultSerializerProvider:(id<BiometricSdkKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol BiometricSdkKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol BiometricSdkKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol BiometricSdkKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol BiometricSdkKotlinKClass <BiometricSdkKotlinKDeclarationContainer, BiometricSdkKotlinKAnnotatedElement, BiometricSdkKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
