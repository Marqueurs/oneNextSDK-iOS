//
//  oneNextTagger.h
//  oneNextTaggerSDK
//

#import <Foundation/Foundation.h>
#import "oneNextEnums.h"

@interface oneNextTagger : NSObject
{
    @protected
    NSString *_serial;
    NSString *_customerData;
    BOOL _canSend;
    BOOL _useIDFA;
    oneNextLoggingMode _loggingMode;
}


#pragma mark - Readonly properties
////////////////////////////////////////////////////////////////////////////////

@property (nonatomic, readonly) NSString *serial;
@property (nonatomic, readonly) NSString *customerData;
@property (nonatomic, readonly) BOOL canSend;
@property(assign) BOOL useIDFA;

////////////////////////////////////////////////////////////////////////////////

#pragma mark - Read/Write properties
////////////////////////////////////////////////////////////////////////////////

@property (nonatomic) oneNextLoggingMode loggingMode;  //Default is oneNextLoggingMode_Error

@property (nonatomic, strong, getter=theNewLevel1) NSString *newLevel1;
@property (nonatomic, strong, getter=theNewLevel2) NSString *newLevel2;
@property (nonatomic, strong, getter=theNewLevel3) NSString *newLevel3;
@property (nonatomic, strong, getter=theNewLevel4) NSString *newLevel4;
@property (nonatomic, strong, getter=theNewLevel5) NSString *newLevel5;
@property (nonatomic, strong, getter=theNewLevel6) NSString *newLevel6;
@property (nonatomic, strong, getter=theNewLevel7) NSString *newLevel7;
@property (nonatomic, strong, getter=theNewLevel8) NSString *newLevel8;
@property (nonatomic, strong, getter=theNewLevel9) NSString *newLevel9;
@property (nonatomic, strong, getter=theNewLevel10) NSString *newLevel10;
@property (nonatomic, strong, getter=theNewLevel11 ) NSString *newLevel11;

@property (nonatomic, strong) NSString *mediaContentId;
@property (nonatomic, strong) NSString *mediaDiffMode;
@property (nonatomic, strong) NSString *mediaChannel;

@property (nonatomic, strong) NSString *netMeasurement;

////////////////////////////////////////////////////////////////////////////////


#pragma mark - SDK Utils
////////////////////////////////////////////////////////////////////////////////

+ (NSString *) oneNextVersion;

////////////////////////////////////////////////////////////////////////////////

@end
