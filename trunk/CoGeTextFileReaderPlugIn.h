//
//  CoGeTextFileReaderPlugIn.h
//  CoGeTextFileReader
//
//  Created by Tamas Nagy on 12/23/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <Quartz/Quartz.h>

@interface CoGeTextFileReaderPlugIn : QCPlugIn
{
}

/*
Declare here the Obj-C 2.0 properties to be used as input and output ports for the plug-in e.g.
@property double inputFoo;
@property(assign) NSString* outputBar;
You can access their values in the appropriate plug-in methods using self.inputFoo or self.inputBar
*/

@property (assign) NSString *inputFilePath;
@property(assign) NSArray* outputText;


@end
