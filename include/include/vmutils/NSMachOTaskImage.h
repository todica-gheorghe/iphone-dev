/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <vmutils/NSMachOImage.h>

@class NSMachODyldSecrets, NSMutableArray, NSPEFSecrets, NSString;

@interface NSMachOTaskImage : NSMachOImage
{
    unsigned int _task;	// 36 = 0x24
    NSString *_appName;	// 40 = 0x28
    NSPEFSecrets *_pefSecrets;	// 44 = 0x2c
    NSMachODyldSecrets *_dyldSecrets;	// 48 = 0x30
    NSMachODyldSecrets *_otherDyldSecrets;	// 52 = 0x34
    NSMutableArray *_namesOfCorruptHeaders;	// 56 = 0x38
}

+ (BOOL)taskIsTranslated:(unsigned int)fp8;	// IMP=0x31883144
- (void)addRemoteMachHeader:(unsigned int)fp8 name:(id)fp12 slide:(unsigned int)fp16 arch:(int)fp20 mustSwap:(BOOL)fp24;	// IMP=0x3188338c
- (id)appName;	// IMP=0x31883a04
- (const char *)cnameOfSymbolWithAddress:(unsigned int)fp8;	// IMP=0x31883ad0
- (void)dealloc;	// IMP=0x318832b4
- (id)dyldExecutablesPath;	// IMP=0x318839e4
- (id)dyldName;	// IMP=0x318839c4
- (struct _NSRange)dyldRange;	// IMP=0x31883978
- (void)finalize;	// IMP=0x3188334c
- (void)flushHeaders;	// IMP=0x31883920
- (id)getMachHeaders;	// IMP=0x3188376c
- (id)initWithTask:(unsigned int)fp8;	// IMP=0x318831f0
- (id)libraryForPC:(unsigned int)fp8;	// IMP=0x31883b40
- (id)namesOfCorruptHeaders;	// IMP=0x31883764
- (void)updateHeaders;	// IMP=0x318837cc

@end
