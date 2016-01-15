#include "titleScene.h"
#include "cardSceneT.h"
#include "ruleScene.h"

USING_NS_CC;

CCScene* titleScene::scene()
{
    // 'scene' is an autorelease object
    CCScene *scene = CCScene::create();
    
    // 'layer' is an autorelease object
	titleScene *layer = titleScene::create();

    // add layer as a child to scene
    scene->addChild(layer);

    // return the scene
    return scene;
}

// on "init" you need to initialize your instance
bool titleScene::init()
{
    //////////////////////////////
    // 1. super init first
    if ( !CCLayer::init() )
    {
        return false;
    }
	CCSize winSize = CCDirector::sharedDirector()->getVisibleSize();
	CCPoint origin = CCDirector::sharedDirector()->getVisibleOrigin();

	CCSprite* pSprite = CCSprite::create("title.png");

	pSprite->setPosition(ccp(winSize.width / 2 + origin.x, winSize.height / 2 + origin.y));

	this->addChild(pSprite);

	CCSprite* a = CCSprite::create("スタートボタン.png");
	CCMenuItemSprite* b = CCMenuItemSprite::create(a, a, this, menu_selector(titleScene::gameStartButton));

	CCMenu *pbutton = CCMenu::create(b, NULL);

	pbutton->setPosition(ccp(winSize.width / 4, winSize.height / 4));
	this->addChild(pbutton);


	CCSprite* rule = CCSprite::create("ルールボタン.png");
	CCMenuItemSprite* ruleb = CCMenuItemSprite::create(rule, rule, this, menu_selector(titleScene::ruleSceneButton));

	CCMenu *rbutton = CCMenu::create(ruleb, NULL);

	rbutton->setPosition(ccp(winSize.width / 4 * 3, winSize.height / 4));
	this->addChild(rbutton);
	
    return true;
}

void titleScene::gameStartButton(CCObject* psender)
{
	//
	CCScene *nextScene = cardSceneT::scene();

	CCScene* pScene = CCTransitionFlipY::create(1.0f, nextScene);

	if (pScene)
	{
		CCDirector::sharedDirector()->replaceScene(pScene);
	}
	
}

void titleScene::ruleSceneButton(CCObject* pSneder)
{
	CCScene *nextScene = ReleScene::scene();

	CCScene* pScene = CCTransitionFlipY::create(1.0f, nextScene);

	if (pScene)
	{
		CCDirector::sharedDirector()->replaceScene(pScene);
	}
}