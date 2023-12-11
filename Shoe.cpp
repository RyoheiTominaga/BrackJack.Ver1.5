#include"Shoe.h"
#include<iostream>

using namespace std;
Shoe::Shoe() 
{
	_cardNum = CARD_NUM;//カード枚数初期化

	//カード初期化
	for (int i = 0;i < _cardNum;++i) {
		_cardShoe[i] = i;
	}
	_shuffle();//シャッフルする
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

//カードがない場合－１を返す
int Shoe::takeCard()
{

	if (_cardNum <= 0)return -1;
	//後ろから引いていく　ロジック的に楽
	_cardNum--;
	int card = _cardShoe[_cardNum];
	_cardShoe[_cardNum] = -1;//デバック用に-1を入れていく、

	return card;
}

//カードオブジェクトを作りそれを返すメソッド

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
