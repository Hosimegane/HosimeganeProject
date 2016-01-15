#include "cardSceneT.h"

USING_NS_CC;

//勝敗判定に関わる関数
void cardSceneT::judgement(float dt)
{
	CCLabelTTF* judge = (CCLabelTTF *)this->getChildByTag(102);
	if (playerPow[0] == 1 && enemyPow[0] == 1)
	{
		this->draw();
	}
	else if (playerPow[0] == 1 && enemyPow[0] == 2)
	{
		this->playerWin();
	}
	else if (playerPow[0] == 1 && enemyPow[0] == 3)
	{
		this->enemyWin();
	}
	else if (playerPow[0] == 2 && enemyPow[0] == 1)
	{
		this->enemyWin();
	}
	else if (playerPow[0] == 2 && enemyPow[0] == 2)
	{
		this->draw();
	}
	else if (playerPow[0] == 2 && enemyPow[0] == 3)
	{
		this->playerWin();
	}
	else if (playerPow[0] == 3 && enemyPow[0] == 1)
	{
		this->playerWin();
	}
	else if (playerPow[0] == 3 && enemyPow[0] == 2)
	{
		this->enemyWin();
	}
	else if (playerPow[0] == 3 && enemyPow[0] == 3)
	{
		this->draw();
	}

	this->scheduleOnce(schedule_selector(cardSceneT::scoreUP),2.0f);//二秒後にスコアを更新

	this->scheduleOnce(schedule_selector(cardSceneT::cardReAdd), 3.0f);
}

void cardSceneT::playerWin()
{
	CCLabelTTF* judge = (CCLabelTTF *)this->getChildByTag(102);
	CCString* judgement = CCString::createWithFormat("p-win");
	judge->setString(judgement->getCString());

	playerScore += playerPow[1];
	/*CCLabelTTF* Score = (CCLabelTTF *)this->getChildByTag(103);
	CCString* score = CCString::createWithFormat("PLAYER"" %d""P", playerScore);
	Score->setString(score->getCString());*/
}

void cardSceneT::enemyWin()
{
	CCLabelTTF* judge = (CCLabelTTF *)this->getChildByTag(102);
	CCString* judgement = CCString::createWithFormat("e-win");
	judge->setString(judgement->getCString());

	enemyScore += enemyPow[1];
	/*CCLabelTTF* Score = (CCLabelTTF *)this->getChildByTag(104);
	CCString* score = CCString::createWithFormat("ENEMY"" %d""P", enemyScore);
	Score->setString(score->getCString());*/
}

void cardSceneT::draw()
{
	CCLabelTTF* judge = (CCLabelTTF *)this->getChildByTag(102);
	CCString* judgement = CCString::createWithFormat("draw");
	judge->setString(judgement->getCString());
}

void cardSceneT::scoreUP(float dt)
{
	CCLabelTTF* pScore = (CCLabelTTF *)this->getChildByTag(103);
	CCString* pscore = CCString::createWithFormat("PLAYER"" %d""P", playerScore);
	pScore->setString(pscore->getCString());

	CCLabelTTF* eScore = (CCLabelTTF *)this->getChildByTag(104);
	CCString* escore = CCString::createWithFormat("ENEMY"" %d""P", enemyScore);
	eScore->setString(escore->getCString());
}

void cardSceneT::finalJudg()
{
	if (playerScore >= 20)
	{
		CCSize winSize = CCDirector::sharedDirector()->getVisibleSize();
		CCPoint origin = CCDirector::sharedDirector()->getVisibleOrigin();

		CCSprite* card = CCSprite::create("syouri.png");
		card->setPosition(ccp(winSize.width / 2, winSize.height / 2));

		this->addChild(card);
		//exit(0);
		this->scheduleOnce(schedule_selector(cardSceneT::gameEnd), 3.0f);
	}
	else if (enemyScore >= 20)
	{
		CCSize winSize = CCDirector::sharedDirector()->getVisibleSize();
		CCPoint origin = CCDirector::sharedDirector()->getVisibleOrigin();

		CCSprite* card = CCSprite::create("gameOver.png");
		card->setPosition(ccp(winSize.width / 2, winSize.height / 2));

		this->addChild(card);

		//exit(0);
		this->scheduleOnce(schedule_selector(cardSceneT::gameEnd), 3.0f);
	}


}
