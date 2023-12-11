#pragma once
#include"common.h"
#include"Person.h"
class Shoe;//前方宣言
class Player :public Person
{
public:
	Player(const char* name);

	virtual ~Player();
	bool PlayBase(Shoe& shoe) override;
	
	//カードオブジェクトをうけとるメソッド
	//void drawCardFromShoe(Shoe& shoe);

};