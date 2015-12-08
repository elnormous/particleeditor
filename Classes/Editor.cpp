#include "Editor.h"

USING_NS_CC;

namespace ParticleEditor
{
	Editor::Editor()
	{
		
	}
    
    Editor::~Editor()
    {
        if (_keybListener) _eventDispatcher->removeEventListener(_keybListener);
    }

	bool Editor::init()
	{
		if (!Scene::init())
		{
			return false;
		}
        
        _keybListener = EventListenerKeyboard::create();
        _keybListener->onKeyPressed = CC_CALLBACK_2(Editor::onKeyPressed, this);
        
        _eventDispatcher->addEventListenerWithSceneGraphPriority(_keybListener, this);
		
		return true;
	}
    
    void Editor::onKeyPressed(cocos2d::EventKeyboard::KeyCode keyCode, cocos2d::Event* event)
    {
        switch (keyCode)
        {
            default:
                break;
        }
    }
}
