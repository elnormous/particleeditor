#include "AppDelegate.h"
#include "Editor.h"

#include "ViewController.h"

USING_NS_CC;

AppDelegate::AppDelegate()
{

}

AppDelegate::~AppDelegate() 
{
}

bool AppDelegate::applicationDidFinishLaunching()
{
    // initialize director
    auto director = Director::getInstance();
    auto glview = director->getOpenGLView();
    if (!glview) {
        glview = GLViewImpl::createWithRect("ParticleEditor", cocos2d::Rect(0, 0, 800, 600), 1.0f, true);
        director->setOpenGLView(glview);
    }
	
    // turn on display FPS
    //director->setDisplayStats(true);

    // set FPS. the default value is 1.0/60 if you don't call this
    director->setAnimationInterval(1.0f / 60.0f);

    NSApplication* application = [NSApplication sharedApplication];
    ViewController* viewController = [[ViewController alloc] initWithNibName:@"MainMenu" bundle:nil];
    application.delegate = viewController;
    [viewController view];
    application.mainMenu = viewController.mainMenu;
    
    auto scene = ParticleEditor::Editor::create();
    director->runWithScene(scene);
    
    return true;
}

// This function will be called when the app is inactive. When comes a phone call,it's be invoked too
void AppDelegate::applicationDidEnterBackground()
{
    Director::getInstance()->stopAnimation();

    // if you use SimpleAudioEngine, it must be pause
    // SimpleAudioEngine::getInstance()->pauseBackgroundMusic();
}

// this function will be called when the app is active again
void AppDelegate::applicationWillEnterForeground()
{
    Director::getInstance()->startAnimation();

    // if you use SimpleAudioEngine, it must resume here
    // SimpleAudioEngine::getInstance()->resumeBackgroundMusic();
}
