//
//  DataImporter.h
//  JenkinsCI
//
//  Created by Ciprian Redinciuc on 20/10/14.
//  Copyright (c) 2014 Ciprian Redinciuc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DataImporter : NSObject

@property (nonatomic) BOOL didImportData;

/**
 *  Method that will import the players and club infos from an NSDictionary.
 *
 */
- (void)importData;

@end
