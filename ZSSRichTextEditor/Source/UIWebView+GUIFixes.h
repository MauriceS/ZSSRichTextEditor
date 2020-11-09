//
//  UIWebView+GUIFixes.h
//  ZSSRichTextEditor
//
//  Created by Maurice Samulski on 13.07.2016.
//  Copyright © 2016 Zed Said Studio. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIWebView (GUIFixes)

/**
 *	@brief		The custom input accessory view.
 */
@property (nonatomic, strong, readwrite) UIView* customInputAccessoryView;

/**
 *	@brief		Whether the UIWebView will use the fixes provided by this category or not.
 */
@property (nonatomic, assign, readwrite) BOOL usesGUIFixes;

@end
