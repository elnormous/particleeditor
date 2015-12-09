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
        
        _particleSystem = ParticleSystemQuad::create();
        _particleSystem->setPosition(100.0f, 100.0f);
        
        cocos2d::Texture2D* texture = Director::getInstance()->getTextureCache()->addImage("particle.png");
        
        if (texture)
        {
            Rect rect = Rect::ZERO;
            rect.size = texture->getContentSize();
            _particleSystem->setTextureWithRect(texture, rect);
        }
        
        _particleSystem->setTotalParticles(1000);
        _particleSystem->setPosVar(Vec2(10.0f, 10.0f));
        
        _particleSystem->setSpeed(100.0f);
        
        _particleSystem->setLife(10.0f);
        _particleSystem->setStartSize(100.0f);
        _particleSystem->setStartColor(Color4F(1.0f, 1.0f, 1.0f, 1.0f));
        
        _particleSystem->resetSystem();
        
        addChild(_particleSystem);
        
        scheduleUpdate();
        
		return true;
	}
    
    void Editor::update(float delta)
    {
        if (_particleSystem->getParticleCount() == 0)
        {
            _particleSystem->resetSystem();
        }
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
