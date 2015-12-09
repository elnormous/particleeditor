#include "Editor.h"

USING_NS_CC;

namespace ParticleEditor
{
	Editor::Editor()
	{
		
	}
    
    Editor::~Editor()
    {
        if (_mouseListener) _eventDispatcher->removeEventListener(_mouseListener);
        
        if (_keybListener) _eventDispatcher->removeEventListener(_keybListener);
    }

	bool Editor::init()
	{
		if (!Scene::init())
		{
			return false;
		}
        
        _mouseListener = EventListenerMouse::create();
        
        _mouseListener->onMouseDown = CC_CALLBACK_1(Editor::onMouseDown, this);
        _mouseListener->onMouseUp = CC_CALLBACK_1(Editor::onMouseUp, this);
        _mouseListener->onMouseMove = CC_CALLBACK_1(Editor::onMouseMove, this);
        
        _eventDispatcher->addEventListenerWithSceneGraphPriority(_mouseListener, this);
        
        
        _keybListener = EventListenerKeyboard::create();
        _keybListener->onKeyPressed = CC_CALLBACK_2(Editor::onKeyPressed, this);
        
        _eventDispatcher->addEventListenerWithSceneGraphPriority(_keybListener, this);
        
		return true;
	}
    
    void Editor::onMouseDown(cocos2d::EventMouse* event)
    {
        
    }
    
    void Editor::onMouseUp(cocos2d::EventMouse* event)
    {
        
    }
    
    void Editor::onMouseMove(cocos2d::EventMouse* event)
    {
        
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
