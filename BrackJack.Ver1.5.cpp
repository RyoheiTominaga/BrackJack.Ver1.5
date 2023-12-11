// BrackJack.Ver1.5.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//
#include"Shoe.h"
#include"Player.h"
#include"Dealer.h"
#include"card.h"
#include"Person.h"
#include <iostream>
using namespace std;

class Person;

static void showResult(Player& p, Dealer& d1,Dealer& d2,Dealer& d3) {
	cout << "============================" << endl;
	cout << "            result          " << endl;
	cout << "============================" << endl;
	cout << "============================" << endl;
	cout << "dealer" << endl;
	d1.showHand();
	cout << "============================ ============================ ============================ " << endl;
	printf("Players");
	p.showHand();cout << "   ";d2.showHand();cout << "   ";d3.showHand();
	cout << "============================ ============================ ============================ " << endl;

	Person P[4] = {p,d1,d2,d3};
	
	for (int i = 0;i < 4;++i) {

		for (int j = i;j < 4 - i;++j) {
			if (P[j].calcScore() > P[j + 1].calcScore()) {
				swap(P[j], P[j + 1]);
			}
		}
	}
	printf("%sの勝ち",P[0]._pName);


	/*if (p.calcScore() > d1.calcScore()) {
		cout << "Player Win!" << endl;
	}
	else if (p.calcScore() < d1.calcScore()) {
		cout << "Player Lose" << endl;
	}
	else {
		cout << "Push" << endl;
	}*/
}//staticを付けることでここでしか使えなくするφ(｀д´)ﾒﾓﾒﾓ...
int main()
{
	
	//srand(unsigned(time) (NULL));
	Player p("ore");
	Dealer d1("Dealer");
	Dealer d2("makku");
	Dealer d3("misudo");
	Shoe shoe;
	for (int i = 0;i < 2;++i)
	{
		p.hit(&shoe);
	}
	
	printf("\n=========================\n");
	printf("\n%s\n",d1._pName);
	p.showHand();
	printf("\n=========================\n");


	printf("========================= ========================= ========================= ");
	printf("\n%s        %s        %s\n",p._pName,d2._pName,d3._pName );
	//d.hit(&shoe);
	d1.showHand();
	d1.hit(&shoe);
	printf("\n========================= ========================= ========================= \n");
	//まずはプレイヤーのターン処理
	if (p.PlayBase(shoe) == true)
	{
		//プレイヤーがスタンドした場合の処理
		// 
		//次にディーラーのターン処理
		d1.PlayBase(shoe);
		d2.PlayBase(shoe);
		d3.PlayBase(shoe);

		//勝敗判定・結果表示
		showResult(p, d1, d2, d3);
	}
	else
	{
		cout << "バーストしたのであなたの負けです" << endl;
	}
}

// プログラムの実行: Ctrl + F5 または [デバッグ] > [デバッグなしで開始] メニュー
// プログラムのデバッグ: F5 または [デバッグ] > [デバッグの開始] メニュー

// 作業を開始するためのヒント: 
//    1. ソリューション エクスプローラー ウィンドウを使用してファイルを追加/管理します 
//   2. チーム エクスプローラー ウィンドウを使用してソース管理に接続します
//   3. 出力ウィンドウを使用して、ビルド出力とその他のメッセージを表示します
//   4. エラー一覧ウィンドウを使用してエラーを表示します
//   5. [プロジェクト] > [新しい項目の追加] と移動して新しいコード ファイルを作成するか、[プロジェクト] > [既存の項目の追加] と移動して既存のコード ファイルをプロジェクトに追加します
//   6. 後ほどこのプロジェクトを再び開く場合、[ファイル] > [開く] > [プロジェクト] と移動して .sln ファイルを選択します
