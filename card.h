#pragma once
#include"Shoe.h"
class Shoe;
class Card
{
   
private:
	int _cardMarkNum;//�J�[�h�̃}�[�N���
	int _cardNum;//�J�[�h�̔ԍ����
	int _cardNumber;
	//static Card card[CARD_NUM];
public:
	
	void makeCardInf(int cardNum);
	Card();//�R���X�g���N�^
	virtual ~Card();//�f�X�g���N�^
	int getMarkNum();
	int getNum();
	int getObNum();
};