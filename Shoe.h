#pragma once
#include"common.h"
#include"card.h";
class Shoe {
private:
	int _cardShoe[CARD_NUM];
	int _cardNum;
	void _shuffle();//シャッフル
public:
	Shoe();
	virtual ~Shoe();//デストラクタにはvirtualをつけろ(# ﾟДﾟ)
public:
	int takeCard(); //カードを１枚返す

public:
	//不明なオーバーライド指定子エラーが消えないです。。
   Card drawnCard();
};