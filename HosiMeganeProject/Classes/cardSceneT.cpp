#include "cardSceneT.h"

USING_NS_CC;

CCScene* cardSceneT::scene()
{
    // 'scene' is an autorelease object
    CCScene *scene = CCScene::create();
    
    // 'layer' is an autorelease object
	cardSceneT *layer = cardSceneT::create();

    // add layer as a child to scene
    scene->addChild(layer);

    // return the scene
    return scene;
}

// on "init" you need to initialize your instance
bool cardSceneT::init()
{
    //////////////////////////////
    // 1. super init first
    if ( !CCLayer::init() )
    {
        return false;
    }
	for (int i = 0; i < 10; i++)
	{
		cardArray[i] = { 0 };
		enemyCardArray[i] = { 0 };
	}
	srand((unsigned int)time(NULL));//�����̏�����
    

	this->charAdd();
	this->scoreAdd();
	this->OKButton();
	this->cardAdd();
	this->enemyCardAdd();

    return true;
}

void cardSceneT::charAdd()//�w�i�ƃX�R�A�A������̏����\��
{
	CCSize visibleSize = CCDirector::sharedDirector()->getVisibleSize();
	CCPoint origin = CCDirector::sharedDirector()->getVisibleOrigin();

	CCSprite* pSprite = CCSprite::create("�w�i�Q�{�[�_�[��2.png");

	// position the sprite on the center of the screen
	pSprite->setPosition(ccp(visibleSize.width / 2 + origin.x, visibleSize.height / 2 + origin.y));

	// add the sprite as a child to this layer
	this->addChild(pSprite, 0);

	CCLabelTTF* enemy = CCLabelTTF::create("ENEMY", "Arial", 24);

	// position the label on the center of the screen
	enemy->setPosition(ccp(origin.x + visibleSize.width / 2 + 10,
		origin.y + visibleSize.height - enemy->getContentSize().height));

	// add the label as a child to this layer
	enemy->setTag(100);
	this->addChild(enemy);

	CCLabelTTF* vs = CCLabelTTF::create("vs", "Arial", 24);

	// position the label on the center of the screen
	vs->setPosition(ccp(origin.x + visibleSize.width / 3 + 75,
		origin.y + visibleSize.height - vs->getContentSize().height));

	// add the label as a child to this layer
	vs->setTag(102);
	this->addChild(vs);

	CCLabelTTF* zibun = CCLabelTTF::create("PLAYER", "Arial", 24);

	// position the label on the center of the screen
	zibun->setPosition(ccp(origin.x + visibleSize.width / 3 - 10,
		origin.y + visibleSize.height - zibun->getContentSize().height));

	// add the label as a child to this layer
	zibun->setTag(101);
	this->addChild(zibun);

	//�^�O���Ƃ肠�����擾���������p�̃_�~�[
	CCLabelTTF* null = CCLabelTTF::create("kankeinasi", "Arial", 0);

	//��ʊO�A�����Ȃ��Ƃ���ɔz�u
	null->setPosition(ccp(origin.x + visibleSize.width * 100,
		origin.y + visibleSize.height - null->getContentSize().height));

	//�^�O1000�Ԃ��w��
	null->setTag(1000);
	this->addChild(null);


}

void cardSceneT::scoreAdd()
{
	CCSize visibleSize = CCDirector::sharedDirector()->getVisibleSize();
	CCPoint origin = CCDirector::sharedDirector()->getVisibleOrigin();

	CCLabelTTF* pScore = CCLabelTTF::create("PLAYER 0P", "Arial", 24);
	pScore->setColor(ccc3(0, 255, 255));
	pScore->setPosition(ccp(visibleSize.width / 10 * 9, visibleSize.height / 10 * 1));
	pScore->setTag(103);
	this->addChild(pScore);
	CCLabelTTF* eScore = CCLabelTTF::create("ENEMY 0P", "Arial", 24);
	eScore->setColor(ccc3(0, 255, 255));
	eScore->setPosition(ccp(visibleSize.width / 10 * 9, visibleSize.height / 10 * 9));
	eScore->setTag(104);
	this->addChild(eScore);
}

void cardSceneT::spriteVanish(CCNode* sender)//�X�v���C�g�폜�̏���
{
	CCSprite *sprite = (CCSprite *)sender;
	bool isCleenUp = true;
	this->removeChild(sprite, isCleenUp);
}

void cardSceneT::gameEnd(float dt)//�Q�[���I���̏���
{
	exit(0);
}
