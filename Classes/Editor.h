#pragma once

namespace ParticleEditor
{
	class Editor : public cocos2d::Scene
	{
	public:
		// Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
		virtual bool init() override;
		
		// implement the "static create()" method manually
		CREATE_FUNC(Editor);

    CC_CONSTRUCTOR_ACCESS:
        Editor();
        virtual ~Editor();
        
	private:
		DISALLOW_COPY_AND_ASSIGN(Editor);
		
        void onMouseDown(cocos2d::EventMouse* event);
        void onMouseUp(cocos2d::EventMouse* event);
        void onMouseMove(cocos2d::EventMouse* event);
        
        void onKeyPressed(cocos2d::EventKeyboard::KeyCode keyCode, cocos2d::Event* event);
        
        cocos2d::EventListenerMouse* _mouseListener = nullptr;
        
        cocos2d::EventListenerKeyboard* _keybListener = nullptr;
	};
}
