#include"card.h"
#include<iostream>
using namespace std;
void Card::makeCardInf(int cardNum) {
	_cardMarkNum = cardNum / 13;
	_cardNum = cardNum % 13 + 1;
}
Card::Card() {
	_cardMarkNum = 0;
	_cardNum = 0;
	
}
Card::~Card() {

}
int Card::getMarkNum() {
	return _cardMarkNum;
}
int Card::getNum() {
	return  _cardNum;
}

void Card::operator=(const Card& other) {
	_cardMarkNum = other._cardMarkNum;
	_cardNum = other._cardNum;
}

void Card:: SetCard(int num, int mark) {
	_cardNum = num;
	_cardMarkNum = mark;
}
