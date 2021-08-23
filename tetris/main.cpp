#include <iostream>
using namespace std;

int main() {
	char start;
	system("mode con cols=110 lines=50 | title tetris");
	cout << endl << endl << endl << endl;
	cout << "\t▒▒▒▒▒▒▒\t▒▒▒▒▒▒▒\t▒▒▒▒▒▒▒\t▒▒▒▒▒▒▒    ▒▒▒    ▒▒▒▒▒" << endl;
	cout << "\t▒▒▒▒▒▒▒\t▒▒▒▒▒▒▒\t▒▒▒▒▒▒▒\t▒▒▒▒▒▒▒▒  ▒▒▒  ▒▒▒▒▒▒▒" << endl;
	cout << "\t▒▒▒▒▒▒▒\t▒▒▒▒▒▒▒\t▒▒▒▒▒▒▒\t▒▒▒    ▒▒▒  ▒▒▒  ▒▒▒    ▒▒▒" << endl;
	cout << "\t    ▒▒▒    \t▒▒▒        \t    ▒▒▒    \t▒▒▒    ▒▒▒          ▒▒▒    ▒▒▒" << endl;
	cout << "\t    ▒▒▒    \t▒▒▒        \t    ▒▒▒    \t▒▒▒▒▒▒▒▒  ▒▒▒  ▒▒▒        " << endl;
	cout << "\t    ▒▒▒    \t▒▒▒▒▒▒▒\t    ▒▒▒    \t▒▒▒▒▒▒▒▒  ▒▒▒  ▒▒▒▒▒▒    " << endl;
	cout << "\t    ▒▒▒    \t▒▒▒▒▒▒▒\t    ▒▒▒    \t▒▒▒▒▒        ▒▒▒    ▒▒▒▒▒▒" << endl;
	cout << "\t    ▒▒▒    \t▒▒▒▒▒▒▒\t    ▒▒▒    \t▒▒▒▒▒▒      ▒▒▒            ▒▒▒" << endl;
	cout << "\t    ▒▒▒    \t▒▒▒        \t    ▒▒▒    \t▒▒  ▒▒▒▒    ▒▒▒            ▒▒▒" << endl;
	cout << "\t    ▒▒▒    \t▒▒▒        \t    ▒▒▒    \t▒▒    ▒▒▒    ▒▒▒  ▒▒▒    ▒▒▒" << endl;
	cout << "\t    ▒▒▒    \t▒▒▒▒▒▒▒\t    ▒▒▒    \t▒▒      ▒▒▒  ▒▒▒  ▒▒▒    ▒▒▒" << endl;
	cout << "\t    ▒▒▒    \t▒▒▒▒▒▒▒\t    ▒▒▒    \t▒▒      ▒▒▒  ▒▒▒  ▒▒▒▒▒▒▒" << endl;
	cout << "\t    ▒▒▒    \t▒▒▒▒▒▒▒\t    ▒▒▒    \t▒▒      ▒▒▒  ▒▒▒    ▒▒▒▒▒" << endl;
	cout << endl << endl << endl;
	cout << "시작하려면 's'를 입력해주세요 ==> ";
	cin >> start;

	if (((int)start) == 115) {
		cout << "<< 게임 설명 >>" << endl;
		cout << "테트리스 게임은 퍼즐 게임으로 블럭을 쌓으면서 한 줄이 꽉 채워지면 그 줄은 사라집니다." << endl;
		cout << "맨 위에 있는 선에 닿기 전까지 게임은 진행됩니다!" << endl << endl;
		cout << "<< 조작 방법 >>" << endl;
		cout << "스페이스바를 누르면 한 번에 내려갑니다."

	}
	else {
		cout << "'s'를 입력해주세요!!" << endl;
	}
}