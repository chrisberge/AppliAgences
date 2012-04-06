//
//  XMLParser.h
//  AppliAgences
//
//  Created by Christophe Bergé on 01/12/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Annonce.h"
#import "AppliAgencesAppDelegate.h"

@class AppliAgencesAppDelegate, Annonce;

@interface XMLParser : NSObject {
	NSMutableString *currentElementValue;
	Annonce *uneAnnonce;
	AppliAgencesAppDelegate *appDelegate;
}

- (XMLParser *) initXMLParser;

@end
