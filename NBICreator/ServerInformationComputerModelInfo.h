//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@interface ServerInformationComputerModelInfo : NSObject

+ (id)modelPropertiesForBoardIDs:(id)arg1;
+ (id)hardwareImageForModel:(id)arg1;
+ (BOOL)shouldSkip:(id)arg1;
+ (id)marketingModelNameForAttributes:(id)arg1;
+ (id)attributesForModelIdentifier:(id)arg1;
+ (id)attributesForAllModelIdentifiers;
+ (id)attributesForAllMarketingModels;
+ (id)allModelIdentifiers;
+ (id)_hardwareMonochromeSelectedImageForModelIdentifier:(id)arg1;
+ (id)_hardwareMonochromeImageForModelIdentifier:(id)arg1;
+ (id)_hardwareImageForModelIdentifier:(id)arg1;
+ (id)_hardwareImageNamed:(id)arg1;
+ (void)initialize;

@end
