//
//  HCPXmlTags.h
//
//  Created by Nikolay Demyankov on 03.09.15.
//

#import <Foundation/Foundation.h>

extern NSString *const kHCPMainXmlTag;

// Keys for processing application config location on the server
extern NSString *const kHCPConfigFileXmlTag;
extern NSString *const kHCPConfigFileUrlXmlAttribute;

// Keys for processing local development options
extern NSString *const kHCPLocalDevelopmentXmlTag;
extern NSString *const kHCPLocalDevelopmentEnabledXmlAttribute;

// Keys for processing auto download options
extern NSString *const kHCPAutoDownloadXmlTag;
extern NSString *const kHCPAutoDownloadEnabledXmlAttribute;

// Keys for processing auto install options
extern NSString *const kHCPAutoInstallXmlTag;
extern NSString *const kHCPAutoInstallEnabledXmlAttribute;

@interface HCPXmlTags : NSObject

@end
