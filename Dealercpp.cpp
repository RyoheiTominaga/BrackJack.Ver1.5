#include"Dealer.h"
#include"Shoe.h"
#include"card.h"
#include<iostream>
using namespace std;

Dealer::Dealer(const char* name) :Person(name);
{
   
}
Dealer::~Dealer() {

}
bool Dealer::PlayBase(Shoe& shoe)
{
	//�X�R�A��16�ȉ��̏ꍇhit�𑱂���
	while (calcScore() < 17 && calcScore() > 0) {
		//�q�b�g����
		drawnCardFromShoe(shoe);
		cout << "hit" << endl;
		//��D�̕\��
		cout << "====================" << endl;
		cout << "dealer" << endl;
		showHand();
		cout << "====================" << endl;
	}
	if (calcScore() < 22)
	{
		return true;
	}

	else {
		return false;
	}
}