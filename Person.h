#pragma once
#include"common.h"
#include"Shoe.h"
#include"card.h"
class Shoe;//�O���錾
class Person
{
public:
	char* _pName;//���O
protected:
public:
	int _hand[HAND_SIZE];//��D���
	int _cardNum;//��D�̖���
	int _markNum[HAND_SIZE];
	int _NumberNum[HAND_SIZE];
	int _obNum;

public:
	Person(const char* pName);
	virtual ~Person();

	virtual bool PlayBase(Shoe& shoe)=0;

	void hit(Shoe* pShoe);//��D�ɓn����F�V���[����ꖇ����

	void showHand();//��D�\��

	int calcScore();//�X�R�A

	void drawnCardFromShoe(Shoe& shoe);
};