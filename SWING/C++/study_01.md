---
layout: single
title:  "과제 01"
---

#include <iostream>
using namespace std;
int main() {
	
	char name[10];
	cout << "당신의 이름은 무엇입니까?";
	cin.getline(name, 10);
	cout << "반갑습니다. " << name << "님" << endl;
	cout << "" << endl;
	
	cout << "----------SWING 30----------" << endl;
	cout << "음료의 가격 입력을 시작합니다." << endl;
	cout << "" << endl;
	int coke;
	int samdasu;
	int hwanta;
	int coke_num;
	int samdasu_num;
	int hwanta_num;
	int sum;
	cout << "콜라의 가격 :  ";
	cin >> coke;
	cout << "삼다수의 가격 :  ";
	cin >> samdasu;
	cout << "환타의 가격 : ";
	cin >> hwanta;
	cout << "" << endl;
	cout << "개수를 입력해주세요." << endl;
	cout << "" << endl;
	cout << "콜라 수량 : ";
	cin >> coke_num;
	cout << "삼다수 수량 : ";
	cin >> samdasu_num;
	cout << "환타 수량 : ";
	cin >> hwanta_num;
	cout << "------------------------------" << endl;
	sum = (coke * coke_num) + (hwanta * hwanta_num) + (samdasu * samdasu_num) - 500;
	cout << "500원을 할인받아 총" << sum << "원 입니다." << endl;


		return 0;
}
