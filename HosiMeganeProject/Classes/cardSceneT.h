#ifndef __CARD_SCENET_H__
#define __CARD_SCENET_H__

#include "cocos2d.h"

class cardSceneT : public cocos2d::CCLayer
{
protected:
	//タグ0～4,10～14まで使用中 タグ100～102、1000を文字列に使用中
	int cardLimit = 5;//カードの表示限界数
	int cardCount[10];//カードが選択されているか判定用の変数 1は通常状態　２は選択中　0は非表示の場合
	int cardArray[10];//カードの種類と番号、強さの管理用 奇数が種類（0、カードなし：1、グー：2、チョキ：3、パー）、偶数が強さ
	int enemyCardArray[10];//敵のカードの種類と強さの判定用 種類と強さの区別はcardArrayと同じ
	int cardTyp = 0;//カードの種類の確認用の変数
	int cardPow = 0;//カードの強さの確認用の変数
	int cardNum = 0;//カード画像番号確認用の変数
	int playerPow[2];//プレイヤーの使用した手札確認用
	int enemyPow[2];//エネミーの使用した手札確認用変数
	int enemyPlay = 0;//エネミーの使用した手札の確認用変数
	int playerScore = 0;//獲得したポイントの保管用変数
	int enemyScore = 0;//敵のスコア保管用変数
	int weitTime = 0;//待ち時間用の変数
public:
    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
    virtual bool init();  

    // there's no 'id' in cpp, so we recommend returning the class instance pointer
    static cocos2d::CCScene* scene();
    
	void charAdd();//文字列や背景などの初期表示処理
	void scoreAdd();//スコアの表示処理

	//cardAdd.cpp
	void cardAdd();//自身のカード表示処理
	void enemyCardAdd();//敵のカード表示処理
	void cardReAdd(float dt);//カードの再表示処理
	//cardAdd.cpp

	//cardSelect.cpp
	void cardPushCallback1(CCObject* psender);//カードの選択処理　一枚目
	void cardPushCallback2(CCObject* psender);//二枚目
	void cardPushCallback3(CCObject* psender);//三枚目
	void cardPushCallback4(CCObject* psender);//四枚目
	void cardPushCallback5(CCObject* psender);//五枚目
	
	void OKButton();//カード選択完了のボタン

	void cardMoveCallBack(CCObject* pSender);//使用したカードの移動処理
	void enemyCardPlay();//敵のカード選択処理　（ランダム選択）
	//cardSelect.cpp

	//judgment.cpp
	void judgement(float dt);//じゃんけん勝敗判断の処理

	void playerWin();//自身のじゃんけん勝利処理
	void enemyWin();//敵のじゃんけん勝利処理
	void draw();//じゃんけんの引き分け処理

	void scoreUP(float dt);//スコアの更新処理

	void finalJudg();//ゲームの勝敗判定
	//judgment.cpp

	void spriteVanish(CCNode* sender);//スプライト削除
	void gameEnd(float dt);//ゲームの終了処理

    // implement the "static node()" method manually
	CREATE_FUNC(cardSceneT);
};

#endif // __CARD_SCENET_H__
