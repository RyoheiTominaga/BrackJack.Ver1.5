#pragma once
#include"common.h"
#include"Person.h"
class Shoe;//‘O•ûéŒ¾
class Dealer:public Person
{
public:
	Dealer(const char* name);

	virtual ~Dealer();
	bool PlayBase(Shoe& shoe)override;

/*public:
	bool Play(Shoe* pShoe);*/
};