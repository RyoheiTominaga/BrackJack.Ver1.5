#pragma once
#include"common.h"
#include"card.h";
class Shoe {
private:
	int _cardShoe[CARD_NUM];
	int _cardNum;
	void _shuffle();//�V���b�t��
public:
	Shoe();
	virtual ~Shoe();//�f�X�g���N�^�ɂ�virtual������(# ߄D�)
public:
	int takeCard(); //�J�[�h���P���Ԃ�

public:
	//�s���ȃI�[�o�[���C�h�w��q�G���[�������Ȃ��ł��B�B
   Card drawnCard();
};