//
//  SFParser.h
//  Example
//
//  Created by Sergio Fernández Durán on 10/6/15.
//  Copyright © 2015 Sergio Fernández. All rights reserved.
//

#import <Foundation/Foundation.h>

@class SFResource;

@interface SFParser : NSObject

+ (SFResource *)parseResourceFromDictionary:(NSDictionary *)dictionary;

@end
