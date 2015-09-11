//
// Created by zen on 10/09/15.
// Copyright (c) 2015 Yalantis. All rights reserved.
//

@import Foundation;

#import <Realm/RLMObject.h>

@class FEMMapping;

@interface UniqueRealmObject : RLMObject

@property (nonatomic) int primaryKeyProperty;
@property (nonatomic) long long longLongProperty;
@property (nonatomic, copy) NSString *stringProperty;

@end

@interface UniqueRealmObject (Mapping)

+ (FEMMapping *)defaultMapping;

@end