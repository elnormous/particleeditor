//
//  ViewController.m
//  ParticleEditor
//
//  Created by Elviss Strazdins on 08/12/15.
//
//
#import "ViewController.h"

@implementation ViewController

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    
    if (self)
    {

    }
    
    return self;
}

- (IBAction)handleNew:(id)sender
{
    
}

- (IBAction)handleOpen:(id)sender
{
    NSOpenPanel* openPanel = [NSOpenPanel openPanel];
    
    openPanel.title = @"Choose a .pef";
    openPanel.showsResizeIndicator = YES;
    openPanel.showsHiddenFiles = NO;
    openPanel.canChooseDirectories = NO;
    openPanel.canCreateDirectories = YES;
    openPanel.allowsMultipleSelection = NO;
    openPanel.allowedFileTypes = @[@"pef"];
    
    [openPanel beginWithCompletionHandler:^(NSInteger result) {
        if (result == NSModalResponseOK)
        {
            NSURL* selection = openPanel.URL;
            
            [[NSDocumentController sharedDocumentController] noteNewRecentDocumentURL:selection];
            
            NSString* path = [selection.path stringByResolvingSymlinksInPath];
            
        }
    }];
}

- (IBAction)handleSave:(id)sender
{
    
}

- (IBAction)handleSaveAs:(id)sender
{
    NSSavePanel* savePanel = [NSSavePanel savePanel];
    
    savePanel.title = @"Choose a .pef file";
    savePanel.showsResizeIndicator = YES;
    savePanel.showsHiddenFiles = NO;
    savePanel.canCreateDirectories = YES;
    savePanel.allowedFileTypes = @[@"pef"];
    
    [savePanel beginWithCompletionHandler:^(NSInteger result) {
        if (result == NSModalResponseOK)
        {
            NSURL* selection = savePanel.URL;
            
            [[NSDocumentController sharedDocumentController] noteNewRecentDocumentURL:selection];
            
            NSString* path = [selection.path stringByResolvingSymlinksInPath];
        }
    }];
}

- (IBAction)handleImport:(id)sender
{
    
}

- (IBAction)handleExport:(id)sender
{
    
}

@end