#ifndef __CARD_SCENET_H__
#define __CARD_SCENET_H__

#include "cocos2d.h"

class cardSceneT : public cocos2d::CCLayer
{
protected:
	//�^�O0�`4,10�`14�܂Ŏg�p�� �^�O100�`102�A1000�𕶎���Ɏg�p��
	int cardLimit = 5;//�J�[�h�̕\�����E��
	int cardCount[10];//�J�[�h���I������Ă��邩����p�̕ϐ� 1�͒ʏ��ԁ@�Q�͑I�𒆁@0�͔�\���̏ꍇ
	int cardArray[10];//�J�[�h�̎�ނƔԍ��A�����̊Ǘ��p �����ށi0�A�J�[�h�Ȃ��F1�A�O�[�F2�A�`���L�F3�A�p�[�j�A����������
	int enemyCardArray[10];//�G�̃J�[�h�̎�ނƋ����̔���p ��ނƋ����̋�ʂ�cardArray�Ɠ���
	int cardTyp = 0;//�J�[�h�̎�ނ̊m�F�p�̕ϐ�
	int cardPow = 0;//�J�[�h�̋����̊m�F�p�̕ϐ�
	int cardNum = 0;//�J�[�h�摜�ԍ��m�F�p�̕ϐ�
	int playerPow[2];//�v���C���[�̎g�p������D�m�F�p
	int enemyPow[2];//�G�l�~�[�̎g�p������D�m�F�p�ϐ�
	int enemyPlay = 0;//�G�l�~�[�̎g�p������D�̊m�F�p�ϐ�
	int playerScore = 0;//�l�������|�C���g�̕ۊǗp�ϐ�
	int enemyScore = 0;//�G�̃X�R�A�ۊǗp�ϐ�
	int weitTime = 0;//�҂����ԗp�̕ϐ�
public:
    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
    virtual bool init();  

    // there's no 'id' in cpp, so we recommend returning the class instance pointer
    static cocos2d::CCScene* scene();
    
	void charAdd();//�������w�i�Ȃǂ̏����\������
	void scoreAdd();//�X�R�A�̕\������

	//cardAdd.cpp
	void cardAdd();//���g�̃J�[�h�\������
	void enemyCardAdd();//�G�̃J�[�h�\������
	void cardReAdd(float dt);//�J�[�h�̍ĕ\������
	//cardAdd.cpp

	//cardSelect.cpp
	void cardPushCallback1(CCObject* psender);//�J�[�h�̑I�������@�ꖇ��
	void cardPushCallback2(CCObject* psender);//�񖇖�
	void cardPushCallback3(CCObject* psender);//�O����
	void cardPushCallback4(CCObject* psender);//�l����
	void cardPushCallback5(CCObject* psender);//�ܖ���
	
	void OKButton();//�J�[�h�I�������̃{�^��

	void cardMoveCallBack(CCObject* pSender);//�g�p�����J�[�h�̈ړ�����
	void enemyCardPlay();//�G�̃J�[�h�I�������@�i�����_���I���j
	//cardSelect.cpp

	//judgment.cpp
	void judgement(float dt);//����񂯂񏟔s���f�̏���

	void playerWin();//���g�̂���񂯂񏟗�����
	void enemyWin();//�G�̂���񂯂񏟗�����
	void draw();//����񂯂�̈�����������

	void scoreUP(float dt);//�X�R�A�̍X�V����

	void finalJudg();//�Q�[���̏��s����
	//judgment.cpp

	void spriteVanish(CCNode* sender);//�X�v���C�g�폜
	void gameEnd(float dt);//�Q�[���̏I������

    // implement the "static node()" method manually
	CREATE_FUNC(cardSceneT);
};

#endif // __CARD_SCENET_H__
