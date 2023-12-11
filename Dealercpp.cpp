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
	//スコアが16以下の場合hitを続ける
	while (calcScore() < 17 && calcScore() > 0) {
		//ヒットする
		drawnCardFromShoe(shoe);
		cout << "hit" << endl;
		//手札の表示
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