#include "cardSceneT.h"

USING_NS_CC;

//カード表示に関わる関数
void cardSceneT::cardAdd()
{
	CCSize winSize = CCDirector::sharedDirector()->getVisibleSize();
	CCPoint origin = CCDirector::sharedDirector()->getVisibleOrigin();
	for (int i = 0; i < cardLimit; i++)
	{

		cardTyp = rand() % 3 + 1;
		cardPow = rand() % 6 + 1;
		cardNum = (cardTyp - 1) * 6 + cardPow;

		char szName[100] = { 0 };
		sprintf(szName, "card%d.png", cardNum);
		char callBack[100] = { 0 };
		sprintf(callBack, "cardSceneT::cardPushCallback");

		if (cardArray[i * 2] == 0)
		{

			if (i == 0)
			{
				CCSprite* a = CCSprite::create(szName);
				CCMenuItemSprite* b = CCMenuItemSprite::create(a, a, this, menu_selector(cardSceneT::cardPushCallback1));

				b->setTag(i);
				CCMenu *pcard = CCMenu::create(b, NULL);
				pcard->setTag(i);
				pcard->setPosition(ccp(origin.x + (i - (5 * (i / 5))) * 130 + winSize.width / 10,
					origin.y + 150 * ((i / 5) * 2) + 1 + 150));
				this->addChild(pcard);
				this->cardCount[i] = 1;
				cardArray[i * 2] = cardTyp;
				cardArray[i * 2 + 1] = cardPow;
			}
			if (i == 1)
			{
				CCSprite* a = CCSprite::create(szName);
				CCMenuItemSprite* b = CCMenuItemSprite::create(a, a, this, menu_selector(cardSceneT::cardPushCallback2));
				b->setTag(i);
				CCMenu *pcard = CCMenu::create(b, NULL);
				pcard->setTag(i);
				pcard->setPosition(ccp(origin.x + (i - (5 * (i / 5))) * 130 + winSize.width / 10, origin.y + 150 * ((i / 5) * 2) + 1 + 150));
				this->addChild(pcard);
				this->cardCount[i] = 1;
				cardArray[i * 2] = cardTyp;
				cardArray[i * 2 + 1] = cardPow;
			}
			if (i == 2)
			{
				CCSprite* a = CCSprite::create(szName);
				CCMenuItemSprite* b = CCMenuItemSprite::create(a, a, this, menu_selector(cardSceneT::cardPushCallback3));
				b->setTag(i);
				CCMenu *pcard = CCMenu::create(b, NULL);
				pcard->setTag(i);
				pcard->setPosition(ccp(origin.x + (i - (5 * (i / 5))) * 130 + winSize.width / 10, origin.y + 150 * ((i / 5) * 2) + 1 + 150));
				this->addChild(pcard);
				this->cardCount[i] = 1;
				cardArray[i * 2] = cardTyp;
				cardArray[i * 2 + 1] = cardPow;
			}
			if (i == 3)
			{
				CCSprite* a = CCSprite::create(szName);
				CCMenuItemSprite* b = CCMenuItemSprite::create(a, a, this, menu_selector(cardSceneT::cardPushCallback4));
				b->setTag(i);
				CCMenu *pcard = CCMenu::create(b, NULL);
				pcard->setTag(i);
				pcard->setPosition(ccp(origin.x + (i - (5 * (i / 5))) * 130 + winSize.width / 10, origin.y + 150 * ((i / 5) * 2) + 1 + 150));
				this->addChild(pcard);
				this->cardCount[i] = 1;
				cardArray[i * 2] = cardTyp;
				cardArray[i * 2 + 1] = cardPow;
			}
			if (i == 4)
			{
				CCSprite* a = CCSprite::create(szName);
				CCMenuItemSprite* b = CCMenuItemSprite::create(a, a, this, menu_selector(cardSceneT::cardPushCallback5));
				b->setTag(i);
				CCMenu *pcard = CCMenu::create(b, NULL);
				pcard->setTag(i);
				pcard->setPosition(ccp(origin.x + (i - (5 * (i / 5))) * 130 + winSize.width / 10, origin.y + 150 * ((i / 5) * 2) + 1 + 150));
				this->addChild(pcard);
				this->cardCount[i] = 1;
				cardArray[i * 2] = cardTyp;
				cardArray[i * 2 + 1] = cardPow;
			}
		}
	}
	weitTime = 0;
}

void cardSceneT::enemyCardAdd()
{
	CCSize winSize = CCDirector::sharedDirector()->getVisibleSize();
	CCPoint origin = CCDirector::sharedDirector()->getVisibleOrigin();

	for (int i = 0; i < cardLimit; i++)
	{
		cardTyp = rand() % 3 + 1;
		cardPow = rand() % 6 + 1;
		cardNum = (cardTyp - 1) * 6 + cardPow;

		char szName[100] = { 0 };
		sprintf(szName, "card%d.png", cardNum);
		char callBack[100] = { 0 };
		sprintf(callBack, "cardSceneT::cardPushCallback");

		if (enemyCardArray[i * 2] == 0)
		{
			CCSprite* card = CCSprite::create(szName);

			// position the sprite on the center of the screen
			card->setPosition(ccp(origin.x + (i - (5 * (i / 5))) * 130 + winSize.width / 10, origin.y + 450));

			// add the sprite as a child to this layer
			card->setTag(i + 10);
			enemyCardArray[i * 2] = cardTyp;
			enemyCardArray[i * 2 + 1] = cardPow;
			this->addChild(card);
		}
	}
}

void cardSceneT::cardReAdd(float dt)
{
	this->cardAdd();
	this->enemyCardAdd();

	this->finalJudg();
}