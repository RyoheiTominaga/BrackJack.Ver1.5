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
		//����
		char str[HAND_SIZE]; //������^
		cin >> str; //����������
		//hit�����͂��ꂽ�ꍇ
		if (strcmp(str, "hit") == 0) {
			//�J�[�h�̔z�z
			drawnCardFromShoe(shoe);
			//��D�̕\��
			cout << "====================" << endl;

			cout << "player" << endl;
			//showHand();
			cout << "====================" << endl;
			i++;
		}
		else if (strcmp(str, "stand") == 0) {
			
			//�Ԃ�l��true�Ƃ��ďI��
			return true;
			
		}

	} while (calcScore());
		//�o�[�X�g���Ă���̂�false��Ԃ��ďI��
		return false;
}

