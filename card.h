#pragma once
#include"Shoe.h"
class Shoe;
class Card
{
   
private:
	int _cardMarkNum;//カードのマーク情報
	int _cardNum;//カードの番号情報
	int _cardNumber;
	//static Card card[CARD_NUM];
public:
	
	void makeCardInf(int cardNum);
	Card();//コンストラクタ
	virtual ~Card();//デストラクタ
	int getMarkNum();
	int getNum();
	int getObNum();
};