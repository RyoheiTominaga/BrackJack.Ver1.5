#include"Player.h"
#include"Shoe.h"
#include"Person.h"
#include"card.h"
#include<iostream>
using namespace std;

Player::Player(const char* name) :Person(name)
{
	
}
Player::~Player()
{

}
bool Player::PlayBase(Shoe& shoe)
{
	do
	{
		int i = 0;
		cout << "hit or stand >> ";
		//入力
		char str[HAND_SIZE]; //文字列型
		cin >> str; //文字列を入力
		//hitが入力された場合
		if (strcmp(str, "hit") == 0) {
			//カードの配布
			drawnCardFromShoe(shoe);
			//手札の表示
			cout << "====================" << endl;

			cout << "player" << endl;
			//showHand();
			cout << "====================" << endl;
			i++;
		}
		else if (strcmp(str, "stand") == 0) {
			
			//返り値をtrueとして終了
			return true;
			
		}

	} while (calcScore());
		//バーストしているのでfalseを返して終了
		return false;
}

