#include "cardSceneT.h"

USING_NS_CC;

//カードの選択に関わる関数
void cardSceneT::cardPushCallback1(CCObject* psender)
{
	CCMenuItem* card = (CCMenuItem*)psender;
	int cardTag = card->getTag();

	CCLOG("%d", cardTag);

	/*CCLabelTTF* label = (CCLabelTTF *)this->getChildByTag(100);

	label->setString("kannryou");*/

	CCSprite* pcard = (CCSprite*)this->getChildByTag(cardTag);


	
	//このカードが選択されていなかった場合
	if (cardCount[0] == 1 /*&& cardCount[1] != 2 && cardCount[2] != 2 && cardCount[3] != 2 && cardCount[4] != 2 && weitTime == 0*/)
	{
		for (int i = 0; i < cardLimit; i++)
		{
			if (cardCount[i] == 2 && cardCount[0] != 2)//i番目のカードが選択されている場合
			{
				float duration = 0.2f;
				//そのカードの選択を解除する
				CCSprite* player = (CCSprite *)this->getChildByTag(i);
				CCMoveBy* actionMove = CCMoveBy::create(duration, ccp(0, -10));
				player->runAction(actionMove);
				cardCount[i] = 1;
			}
		}
		float duration = 0.2f;

		CCSprite* player = (CCSprite *)this->getChildByTag(0);
		CCMoveBy* actionMove = CCMoveBy::create(duration, ccp(0, 10));
		player->runAction(actionMove);
		cardCount[0] = 2;
		CCLabelTTF* label = (CCLabelTTF *)this->getChildByTag(101);

		char szName[100] = { 0 };

		if (cardArray[0] == 1)
		{
			CCString* power = CCString::createWithFormat("Rock"" %d", this->cardArray[1]);
			label->setString(power->getCString());
		}
		else if (cardArray[0] == 2)
		{
			CCString* power = CCString::createWithFormat("Scissors"" %d", this->cardArray[1]);
			label->setString(power->getCString());
		}
		else if (cardArray[0] == 3)
		{
			CCString* power = CCString::createWithFormat("Paper"" %d", this->cardArray[1]);
			label->setString(power->getCString());
		}
	}
	else if (cardCount[0] == 2)
	{
		float duration = 0.2f;

		CCSprite* player = (CCSprite *)this->getChildByTag(0);
		CCMoveBy* actionMove = CCMoveBy::create(duration, ccp(0, -10));
		player->runAction(actionMove);
		cardCount[0] = 1;
	}
}

void cardSceneT::cardPushCallback2(CCObject* psender)
{
	CCMenuItem* card = (CCMenuItem*)psender;
	int cardTag = card->getTag();

	CCLOG("%d", cardTag);

	CCSprite* pcard = (CCSprite*)this->getChildByTag(cardTag);

	if (cardCount[1] == 1 /*&& cardCount[0] != 2 && cardCount[2] != 2 && cardCount[3] != 2 && cardCount[4] != 2 && weitTime == 0*/)
	{
		for (int i = 0; i < cardLimit; i++)
		{
			if (cardCount[i] == 2 && cardCount[1] != 2)//i番目のカードが選択されている場合
			{
				float duration = 0.2f;
				//そのカードの選択を解除する
				CCSprite* player = (CCSprite *)this->getChildByTag(i);
				CCMoveBy* actionMove = CCMoveBy::create(duration, ccp(0, -10));
				player->runAction(actionMove);
				cardCount[i] = 1;
			}
		}
		float duration = 0.2f;

		CCSprite* player = (CCSprite *)this->getChildByTag(1);
		CCMoveBy* actionMove = CCMoveBy::create(duration, ccp(0, 10));
		player->runAction(actionMove);
		cardCount[1] = 2;
		CCLabelTTF* label = (CCLabelTTF *)this->getChildByTag(101);

		char szName[100] = { 0 };

		if (cardArray[2] == 1)
		{
			CCString* power = CCString::createWithFormat("Rock"" %d", this->cardArray[3]);
			label->setString(power->getCString());
		}
		else if (cardArray[2] == 2)
		{
			CCString* power = CCString::createWithFormat("Scissors"" %d", this->cardArray[3]);
			label->setString(power->getCString());
		}
		else if (cardArray[2] == 3)
		{
			CCString* power = CCString::createWithFormat("Paper"" %d", this->cardArray[3]);
			label->setString(power->getCString());
		}
	}
	else if (cardCount[1] == 2)
	{
		float duration = 0.2f;

		CCSprite* player = (CCSprite *)this->getChildByTag(1);
		CCMoveBy* actionMove = CCMoveBy::create(duration, ccp(0, -10));
		player->runAction(actionMove);
		cardCount[1] = 1;
	}
}

void cardSceneT::cardPushCallback3(CCObject* psender)
{
	CCMenuItem* card = (CCMenuItem*)psender;
	int cardTag = card->getTag();

	CCLOG("%d", cardTag);

	CCSprite* pcard = (CCSprite*)this->getChildByTag(cardTag);

	if (cardCount[2] == 1 /*&& cardCount[0] != 2 && cardCount[1] != 2 && cardCount[3] != 2 && cardCount[4] != 2 && weitTime == 0*/)
	{
		for (int i = 0; i < cardLimit; i++)
		{
			if (cardCount[i] == 2 && cardCount[2] != 2)//i番目のカードが選択されている場合
			{
				float duration = 0.2f;
				//そのカードの選択を解除する
				CCSprite* player = (CCSprite *)this->getChildByTag(i);
				CCMoveBy* actionMove = CCMoveBy::create(duration, ccp(0, -10));
				player->runAction(actionMove);
				cardCount[i] = 1;
			}
		}
		float duration = 0.2f;

		CCSprite* player = (CCSprite *)this->getChildByTag(2);
		CCMoveBy* actionMove = CCMoveBy::create(duration, ccp(0, 10));
		player->runAction(actionMove);
		cardCount[2] = 2;
		CCLabelTTF* label = (CCLabelTTF *)this->getChildByTag(101);

		char szName[100] = { 0 };

		if (cardArray[4] == 1)
		{
			CCString* power = CCString::createWithFormat("Rock"" %d", this->cardArray[5]);
			label->setString(power->getCString());
		}
		else if (cardArray[4] == 2)
		{
			CCString* power = CCString::createWithFormat("Scissors"" %d", this->cardArray[5]);
			label->setString(power->getCString());
		}
		else if (cardArray[4] == 3)
		{
			CCString* power = CCString::createWithFormat("Paper"" %d", this->cardArray[5]);
			label->setString(power->getCString());
		}
	}
	else if (cardCount[2] == 2)
	{
		float duration = 0.2f;

		CCSprite* player = (CCSprite *)this->getChildByTag(2);
		CCMoveBy* actionMove = CCMoveBy::create(duration, ccp(0, -10));
		player->runAction(actionMove);
		cardCount[2] = 1;
	}
}

void cardSceneT::cardPushCallback4(CCObject* psender)
{
	CCMenuItem* card = (CCMenuItem*)psender;
	int cardTag = card->getTag();

	CCLOG("%d", cardTag);

	CCSprite* pcard = (CCSprite*)this->getChildByTag(cardTag);

	if (cardCount[3] == 1 /*&& cardCount[0] != 2 && cardCount[1] != 2 && cardCount[2] != 2 && cardCount[4] != 2 && weitTime == 0*/)
	{
		for (int i = 0; i < cardLimit; i++)
		{
			if (cardCount[i] == 2 && cardCount[3] != 2)//i番目のカードが選択されている場合
			{
				float duration = 0.2f;
				//そのカードの選択を解除する
				CCSprite* player = (CCSprite *)this->getChildByTag(i);
				CCMoveBy* actionMove = CCMoveBy::create(duration, ccp(0, -10));
				player->runAction(actionMove);
				cardCount[i] = 1;
			}
		}
		float duration = 0.2f;

		CCSprite* player = (CCSprite *)this->getChildByTag(3);
		CCMoveBy* actionMove = CCMoveBy::create(duration, ccp(0, 10));
		player->runAction(actionMove);
		cardCount[3] = 2;
		CCLabelTTF* label = (CCLabelTTF *)this->getChildByTag(101);

		char szName[100] = { 0 };

		if (cardArray[6] == 1)
		{
			CCString* power = CCString::createWithFormat("Rock"" %d", this->cardArray[7]);
			label->setString(power->getCString());
		}
		else if (cardArray[6] == 2)
		{
			CCString* power = CCString::createWithFormat("Scissors"" %d", this->cardArray[7]);
			label->setString(power->getCString());
		}
		else if (cardArray[6] == 3)
		{
			CCString* power = CCString::createWithFormat("Paper"" %d", this->cardArray[7]);
			label->setString(power->getCString());
		}
	}
	else if (cardCount[3] == 2)
	{
		float duration = 0.2f;

		CCSprite* player = (CCSprite *)this->getChildByTag(3);
		CCMoveBy* actionMove = CCMoveBy::create(duration, ccp(0, -10));
		player->runAction(actionMove);
		cardCount[3] = 1;
	}
}

void cardSceneT::cardPushCallback5(CCObject* psender)
{
	CCMenuItem* card = (CCMenuItem*)psender;
	int cardTag = card->getTag();

	CCLOG("%d", cardTag);

	CCSprite* pcard = (CCSprite*)this->getChildByTag(cardTag);

	if (cardCount[4] == 1 /*&& cardCount[0] != 2 && cardCount[1] != 2 && cardCount[2] != 2 && cardCount[3] != 2 && weitTime == 0*/)
	{
		for (int i = 0; i < cardLimit; i++)
		{
			if (cardCount[i] == 2 && cardCount[4] != 2)//i番目のカードが選択されている場合
			{
				float duration = 0.2f;
				//そのカードの選択を解除する
				CCSprite* player = (CCSprite *)this->getChildByTag(i);
				CCMoveBy* actionMove = CCMoveBy::create(duration, ccp(0, -10));
				player->runAction(actionMove);
				cardCount[i] = 1;
			}
		}
		float duration = 0.2f;

		CCSprite* player = (CCSprite *)this->getChildByTag(4);
		CCMoveBy* actionMove = CCMoveBy::create(duration, ccp(0, 10));
		player->runAction(actionMove);
		cardCount[4] = 2;
		CCLabelTTF* label = (CCLabelTTF *)this->getChildByTag(101);

		char szName[100] = { 0 };

		if (cardArray[8] == 1)
		{
			CCString* power = CCString::createWithFormat("Rock"" %d", this->cardArray[9]);
			label->setString(power->getCString());
		}
		else if (cardArray[8] == 2)
		{
			CCString* power = CCString::createWithFormat("Scissors"" %d", this->cardArray[9]);
			label->setString(power->getCString());
		}
		else if (cardArray[8] == 3)
		{
			CCString* power = CCString::createWithFormat("Paper"" %d", this->cardArray[9]);
			label->setString(power->getCString());
		}
	}
	else if (cardCount[4] == 2)
	{
		float duration = 0.2f;

		CCSprite* player = (CCSprite *)this->getChildByTag(4);
		CCMoveBy* actionMove = CCMoveBy::create(duration, ccp(0, -10));
		player->runAction(actionMove);
		cardCount[4] = 1;
	}
}

void cardSceneT::cardMoveCallBack(CCObject* pSender)
{
	CCSprite* card = (CCSprite *)getChildByTag(1000);//とりあえずのダミースプライトを作成
	for (int i = 0; i < cardLimit; i++)//どのボタンが押されたのか確認
	{
		if (cardCount[i] == 2)
		{
			card = (CCSprite *)getChildByTag(i);//押されたボタンのタグを取得
		}
	}
	//ボタンが押されている場合のみ
	if (cardCount[0] == 2 || cardCount[1] == 2 || cardCount[2] == 2 || cardCount[3] == 2 || cardCount[4] == 2)
	{
		CCSize visibleSize = CCDirector::sharedDirector()->getVisibleSize();
		CCPoint origin = CCDirector::sharedDirector()->getVisibleOrigin();

		CCSprite *button = (CCSprite *)this->getChildByTag(80);

		float dulation = 1.0f;
		float time = 2.0f;
		float moment = 0.2f;
		CCMoveTo* actionMove = CCMoveTo::create(dulation, ccp(visibleSize.width / 10 * 9, visibleSize.height / 10 * 2));
		CCMoveBy* noneActionMove = CCMoveBy::create(time, ccp(0, 0));
		CCMoveBy* attack = CCMoveBy::create(moment, ccp(0, 50));
		CCCallFuncN* actionMoveDone = CCCallFuncN::create(this, callfuncN_selector(cardSceneT::spriteVanish));
		card->runAction(CCSequence::create(actionMove, noneActionMove, attack, actionMoveDone, NULL));

		for (int i = 0; i < cardLimit; i++)
		{
			if (cardCount[i] == 2)
			{
				playerPow[0] = cardArray[i * 2];//カードの強さを保存
				playerPow[1] = cardArray[i * 2 + 1];
				cardCount[i] = 0;//カードの状態を初期化
				cardArray[i * 2] = 0;//カードの種類と強さのデータを初期化
				cardArray[i * 2 + 1] = 0;
			}
		}
		this->enemyCardPlay();
		weitTime = 1;
	}
}

void cardSceneT::OKButton()//カードの選択を完了するボタン
{
	CCSize visibleSize = CCDirector::sharedDirector()->getVisibleSize();
	CCPoint origin = CCDirector::sharedDirector()->getVisibleOrigin();

	CCMenuItemImage *cardMoveButton = CCMenuItemImage::create(
		"ケッテイボタン.png",
		"ケッテイボタン2.png",
		this,
		menu_selector(cardSceneT::cardMoveCallBack));

	cardMoveButton->setPosition(ccp(origin.x + visibleSize.width - cardMoveButton->getContentSize().width / 2,
		origin.y + cardMoveButton->getContentSize().height / 2));

	// create menu, it's an autorelease object
	CCMenu* pMenu = CCMenu::create(cardMoveButton, NULL);
	pMenu->setPosition(CCPointZero);
	this->addChild(pMenu);
}

void cardSceneT::enemyCardPlay()//エネミーのカード選択処理
{
	enemyPlay = rand() % 5;
	CCSprite* card = (CCSprite *)this->getChildByTag(enemyPlay + 10);

	enemyPow[0] = enemyCardArray[enemyPlay * 2];
	enemyPow[1] = enemyCardArray[enemyPlay * 2 + 1];
	enemyCardArray[enemyPlay * 2] = 0;
	enemyCardArray[enemyPlay * 2 + 1] = 0;

	CCSize visibleSize = CCDirector::sharedDirector()->getVisibleSize();
	CCPoint origin = CCDirector::sharedDirector()->getVisibleOrigin();

	float dulation = 1.0f;
	float moment = 0.2f;

	CCMoveBy* weit = CCMoveBy::create(dulation, ccp(0, 0));
	CCMoveTo* actionMove = CCMoveTo::create(dulation, ccp(visibleSize.width / 10 * 9, visibleSize.height / 10 * 8));
	CCMoveBy* noneActionMove = CCMoveBy::create(dulation, ccp(0, 0));
	CCMoveBy* attack = CCMoveBy::create(moment, ccp(0, -50));
	CCCallFuncN* actionMoveDone = CCCallFuncN::create(this, callfuncN_selector(cardSceneT::spriteVanish));
	card->runAction(CCSequence::create(weit, actionMove, noneActionMove, attack, actionMoveDone, NULL));

	/*bool isCleanUp = true;
	this->removeChild(card, isCleanUp);*/

	CCLabelTTF* enemy = (CCLabelTTF *)this->getChildByTag(100);
	if (enemyPow[0] == 1)
	{
		CCString* power = CCString::createWithFormat("Rock"" %d", this->enemyPow[1]);
		enemy->setString(power->getCString());
	}
	else if (enemyPow[0] == 2)
	{
		CCString* power = CCString::createWithFormat("Scissors"" %d", this->enemyPow[1]);
		enemy->setString(power->getCString());
	}
	else if (enemyPow[0] == 3)
	{
		CCString* power = CCString::createWithFormat("Paper"" %d", this->enemyPow[1]);
		enemy->setString(power->getCString());
	}
	//this->judgement();
	this->scheduleOnce(schedule_selector(cardSceneT::judgement), 1.0f);
}