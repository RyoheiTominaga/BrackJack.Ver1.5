#include"Shoe.h"
#include<iostream>

using namespace std;
Shoe::Shoe() 
{
	_cardNum = CARD_NUM;//�J�[�h����������

	//�J�[�h������
	for (int i = 0;i < _cardNum;++i) {
		_cardShoe[i] = i;
	}
	_shuffle();//�V���b�t������
}
Shoe::~Shoe() {

}

void Shoe::_shuffle()
{
	for (int i = _cardNum; i > 1; --i) {
		int a = i - 1;
		int b = rand() % i;
		swap(_cardShoe[a], _cardShoe[b]);
	}
}

//�J�[�h���Ȃ��ꍇ�|�P��Ԃ�
int Shoe::takeCard()
{

	if (_cardNum <= 0)return -1;
	//��납������Ă����@���W�b�N�I�Ɋy
	_cardNum--;
	int card = _cardShoe[_cardNum];
	_cardShoe[_cardNum] = -1;//�f�o�b�N�p��-1�����Ă����A

	return card;
}

//�J�[�h�I�u�W�F�N�g����肻���Ԃ����\�b�h

Card Shoe::drawnCard (){

	int cardNum = takeCard();
	if (cardNum >= 0) {
		Card drawnCard;
		drawnCard.makeCardInf(cardNum);

		return drawnCard;
	}
	else {

		Card defalutCard;

		return defalutCard;
	}
}
