//
//  ViewController.h
//  ParticleEditor
//
//  Created by Elviss Strazdins on 08/12/15.
//
//
#import <Foundation/Foundation.h>

@interface ViewController : NSViewController

@property (assign) IBOutlet NSPanel* window;
@property (assign) IBOutlet NSMenu* mainMenu;

// Emitter fields
@property (assign) IBOutlet NSTextField* durationField;
@property (assign) IBOutlet NSTextField* positionXField;
@property (assign) IBOutlet NSTextField* positionYField;
@property (assign) IBOutlet NSTextField* positionXVarianceField;
@property (assign) IBOutlet NSTextField* positionYVarianceField;
@property (assign) IBOutlet NSTextField* totalParticlesField;
@property (assign) IBOutlet NSTextField* angleField;
@property (assign) IBOutlet NSTextField* angleVarianceField;
@property (assign) IBOutlet NSComboBox* typeField;
@property (assign) IBOutlet NSTextField* speedField;
@property (assign) IBOutlet NSTextField* speedVarianceField;
@property (assign) IBOutlet NSTextField* gravityXField;
@property (assign) IBOutlet NSTextField* gravityYField;
@property (assign) IBOutlet NSTextField* radialAccelerationField;
@property (assign) IBOutlet NSTextField* radialAccelerationVarianceField;
@property (assign) IBOutlet NSTextField* tangentialAccelerationField;
@property (assign) IBOutlet NSTextField* tangentialAccelerationVarianceField;
@property (assign) IBOutlet NSTextField* startRadiusField;
@property (assign) IBOutlet NSTextField* startRadiusVarianceField;
@property (assign) IBOutlet NSTextField* endRadiusField;
@property (assign) IBOutlet NSTextField* endRadiusVarianceField;
@property (assign) IBOutlet NSTextField* rotatePerSecondField;
@property (assign) IBOutlet NSTextField* rotatePerSecondVarianceField;

// Particle fields
@property (assign) IBOutlet NSTextField* lifeField;
@property (assign) IBOutlet NSTextField* lifeVarianceField;
@property (assign) IBOutlet NSTextField* startSizeField;
@property (assign) IBOutlet NSTextField* startSizeVarianceField;
@property (assign) IBOutlet NSTextField* endSizeField;
@property (assign) IBOutlet NSTextField* endSizeVarianceField;
@property (assign) IBOutlet NSTextField* startSpinField;
@property (assign) IBOutlet NSTextField* startSpinVarianceField;
@property (assign) IBOutlet NSTextField* endSpinField;
@property (assign) IBOutlet NSTextField* endSpinVarianceField;
@property (assign) IBOutlet NSComboBox* positionTypeField;

// Color fields
@property (assign) IBOutlet NSTextField* startRedField;
@property (assign) IBOutlet NSTextField* startGreenField;
@property (assign) IBOutlet NSTextField* startBlueField;
@property (assign) IBOutlet NSTextField* startAlphaField;
@property (assign) IBOutlet NSTextField* startRedVarianceField;
@property (assign) IBOutlet NSTextField* startGreenVarianceField;
@property (assign) IBOutlet NSTextField* startBlueVarianceField;
@property (assign) IBOutlet NSTextField* startAlphaVarianceField;
@property (assign) IBOutlet NSTextField* endRedField;
@property (assign) IBOutlet NSTextField* endGreenField;
@property (assign) IBOutlet NSTextField* endBlueField;
@property (assign) IBOutlet NSTextField* endAlphaField;
@property (assign) IBOutlet NSTextField* endRedVarianceField;
@property (assign) IBOutlet NSTextField* endGreenVarianceField;
@property (assign) IBOutlet NSTextField* endBlueVarianceField;
@property (assign) IBOutlet NSTextField* endAlphaVarianceField;

// Texture fields
@property (assign) IBOutlet NSComboBox* blendSrcField;
@property (assign) IBOutlet NSComboBox* blendDstField;
@property (assign) IBOutlet NSTextField* textureField;

@end
