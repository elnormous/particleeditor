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
        
        Size visibleSize = Director::getInstance()->getVisibleSize();
        
        _mouseListener = EventListenerMouse::create();
        
        _mouseListener->onMouseDown = CC_CALLBACK_1(Editor::onMouseDown, this);
        _mouseListener->onMouseUp = CC_CALLBACK_1(Editor::onMouseUp, this);
        _mouseListener->onMouseMove = CC_CALLBACK_1(Editor::onMouseMove, this);
        
        _eventDispatcher->addEventListenerWithSceneGraphPriority(_mouseListener, this);
        
        
        _keybListener = EventListenerKeyboard::create();
        _keybListener->onKeyPressed = CC_CALLBACK_2(Editor::onKeyPressed, this);
        
        _eventDispatcher->addEventListenerWithSceneGraphPriority(_keybListener, this);
        
        _particleSystem = ParticleSystemQuad::create();
        _particleSystem->setPosition(visibleSize / 2.0f);
        
        cocos2d::Texture2D* texture = Director::getInstance()->getTextureCache()->addImage("particle.png");
        
        if (texture)
        {
            Rect rect = Rect::ZERO;
            rect.size = texture->getContentSize();
            _particleSystem->setTextureWithRect(texture, rect);
        }
        
        // duration
        _particleSystem->setDuration(-1.0f);
        
        // position variance
        _particleSystem->setPosVar(Vec2(7.0f, 7.0f));
        
        // maximum particles
        _particleSystem->setTotalParticles(77);
        
        _particleSystem->setAngle(90.0f);
        _particleSystem->setAngleVar(10.0f);
        
        // type
        _particleSystem->setEmitterMode(ParticleSystem::Mode::GRAVITY);
        
        // speed
        _particleSystem->setSpeed(225.0f);
        
        _particleSystem->setSpeedVar(30.0f);
        
        //lifespan
        _particleSystem->setLife(1.0f);
        _particleSystem->setLifeVar(0.0f);
        
        // start size
        _particleSystem->setStartSize(64.0f);
        _particleSystem->setStartSizeVar(5.0f);
        
        // end size
        _particleSystem->setEndSize(0.0f);
        _particleSystem->setEndSizeVar(0.0f);
        
        // start color
        _particleSystem->setStartColor(Color4F(1.0f, 0.0f, 1.0f, 1.0f));
        _particleSystem->setStartColorVar(Color4F(0.0f, 0.0f, 0.0f, 0.0f));
        
        // end color
        _particleSystem->setEndColor(Color4F(0.0f, 0.0f, 1.0f, 1.0f));
        _particleSystem->setEndColorVar(Color4F(0.0f, 0.0f, 0.0f, 0.0f));
        
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
