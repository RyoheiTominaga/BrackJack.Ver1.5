#pragma once
#include"common.h"
#include"Person.h"
class Shoe;//�O���錾
class Player :public Person
{
public:
	Player(const char* name);

	virtual ~Player();
	bool PlayBase(Shoe& shoe) override;
	
	//�J�[�h�I�u�W�F�N�g�������Ƃ郁�\�b�h
	//void drawCardFromShoe(Shoe& shoe);

};