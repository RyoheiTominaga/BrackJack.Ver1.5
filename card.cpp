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
	_cardNumber = 0;
}
Card::~Card() {

}
int Card::getMarkNum() {
	return _cardMarkNum;
}
int Card::getNum() {
	return  _cardNum;
}
int Card::getObNum() {
	return _cardNumber;
	_cardNumber++;
}
