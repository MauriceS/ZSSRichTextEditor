//
//  ZSSBarButtonItem.m
//  ZSSRichTextEditor
//
//  Created by Nicholas Hubbard on 12/3/13.
//  Copyright (c) 2013 Zed Said Studio. All rights reserved.
//

#import "ZSSBarButtonItem.h"

@implementation ZSSBarButtonItem

-(NSString *)description {
    return [NSString stringWithFormat:@"Title: %@, enabled: %d, target: %@, action: %@", self.label, self.enabled, self.target, NSStringFromSelector(self.action)];
    
}

@end
