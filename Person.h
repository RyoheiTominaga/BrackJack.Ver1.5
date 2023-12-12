#pragma once
#include"common.h"
#include"Shoe.h"
#include"card.h"
class Shoe;//前方宣言
class Person
{
public:
	char* _pName;//名前
protected:
public:
	int _hand[HAND_SIZE];//手札情報
	int _cardNum;//手札の枚数
	int _markNum[HAND_SIZE];
	int _NumberNum[HAND_SIZE];
	int _obNum;

public:
	Person(const char* pName);
	virtual ~Person();

	virtual bool PlayBase(Shoe& shoe)=0;

	void hit(Shoe* pShoe);//手札に渡すやつ：シューから一枚引く

	void showHand();//手札表示

	int calcScore();//スコア

	void drawnCardFromShoe(Shoe& shoe);
};