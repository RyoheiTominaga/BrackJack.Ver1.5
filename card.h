#pragma once
#include"Shoe.h"
class Shoe;
class Card
{
   
private:
	int _cardMarkNum;//カードのマーク情報
	int _cardNum;//カードの番号情報
	
	//static Card card[CARD_NUM];
public:
	void operator=(const Card& other);
	void makeCardInf(int cardNum);
	Card();//コンストラクタ
	virtual ~Card();//デストラクタ
	int getMarkNum();
	int getNum();
	void SetCard(int num, int mark);
	//int getObNum();
};