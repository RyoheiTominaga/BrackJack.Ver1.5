#pragma once
#include"common.h"
#include"Person.h"
class Shoe;//�O���錾
class Dealer:public Person
{
public:
	Dealer(const char* name);

	virtual ~Dealer();
	bool PlayBase(Shoe& shoe)override;

/*public:
	bool Play(Shoe* pShoe);*/
};