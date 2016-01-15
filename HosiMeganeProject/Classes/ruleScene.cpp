#include "titleScene.h"
#include "ruleScene.h"

USING_NS_CC;

CCScene* ReleScene::scene()
{
    // 'scene' is an autorelease object
    CCScene *scene = CCScene::create();
    
    // 'layer' is an autorelease object
	ReleScene *layer = ReleScene::create();

    // add layer as a child to scene
    scene->addChild(layer);

    // return the scene
    return scene;
}

// on "init" you need to initialize your instance
bool ReleScene::init()
{
    //////////////////////////////
    // 1. super init first
    if ( !CCLayer::init() )
    {
        return false;
    }
	CCSize winSize = CCDirector::sharedDirector()->getVisibleSize();
	CCPoint origin = CCDirector::sharedDirector()->getVisibleOrigin();

	CCSprite* pSprite = CCSprite::create("ルール説明.png");

	pSprite->setPosition(ccp(winSize.width / 2 + origin.x, winSize.height / 2 + origin.y));

	this->addChild(pSprite);


	CCSprite* rule = CCSprite::create("モドルボタン.png");
	CCMenuItemSprite* ruleb = CCMenuItemSprite::create(rule, rule, this, menu_selector(ReleScene::gameStartButton));

	CCMenu *rbutton = CCMenu::create(ruleb, NULL);

	rbutton->setPosition(ccp(winSize.width / 5 * 4, winSize.height / 5));
	this->addChild(rbutton);
	
    return true;
}

void ReleScene::gameStartButton(CCObject* psender)
{
	//
	CCScene *nextScene = titleScene::scene();

	CCScene* pScene = CCTransitionFlipY::create(1.0f, nextScene);

	if (pScene)
	{
		CCDirector::sharedDirector()->replaceScene(pScene);
	}
	
}
