//
//  EligibilityInputType.h
//  eligibilityd
//
//  Created by Kyle on 2024/6/17.
//  Audited for RELEASE_2024_BETA_1
//  Status: Complete

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, EligibilityInputType) {
    EligibilityInputTypeInvalid = 0,
    EligibilityInputTypeCountryLocation = 1,
    EligibilityInputTypeCountryBilling = 2,
    EligibilityInputTypeDeviceClass = 3,
    EligibilityInputTypeDeviceLocale = 4,
    EligibilityInputTypeChinaCellular = 5,
    EligibilityInputTypeDeviceRegionCode = 6,
    EligibilityInputTypeDeviceLanguage = 7,
    EligibilityInputTypeGenerativeModelSystem = 8,
    EligibilityInputTypeGreyMatterOnQueue = 9,
    EligibilityInputTypeSiriLanguage = 10,
};