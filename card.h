#pragma once
#include"Shoe.h"
class Shoe;
class Card
{
   
private:
	int _cardMarkNum;//�J�[�h�̃}�[�N���
	int _cardNum;//�J�[�h�̔ԍ����
	
	//static Card card[CARD_NUM];
public:
	void operator=(const Card& other);
	void makeCardInf(int cardNum);
	Card();//�R���X�g���N�^
	virtual ~Card();//�f�X�g���N�^
	int getMarkNum();
	int getNum();
	void SetCard(int num, int mark);
	//int getObNum();
};