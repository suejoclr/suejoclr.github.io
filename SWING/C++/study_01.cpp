#include <iostream>
using namespace std;
int main() {
	//음료 가격 및 금액 입력 받기
  //조건
  //1. 이름 입력하고 출력하기 (단, 띄어쓰기 할 것 ex.김 민성)
  //2. 배운 내용 참고하여 음료과 가격과 개수 입력 받기
  //3. 500원 할인해주기
  //4. 총 금액 출력하기
  
  
  
	char name[10];
	cout << "당신의 이름은 무엇입니까?";
	cin.getline(name, 10);  //cin.getline() <<공백 포함한 문자열 입력 받을 수 있다. 
	cout << "반갑습니다. " << name << "님" << endl;
	cout << "" << endl;
	
	cout << "----------SWING 30----------" << endl;
	cout << "음료의 가격 입력을 시작합니다." << endl;
	cout << "" << endl;
	int coke;
	int samdasu;
	int fanta;
	int coke_num;
	int samdasu_num;
	int fanta_num;
	int sum;
	cout << "콜라의 가격 :  ";
	cin >> coke;
	cout << "삼다수의 가격 :  ";
	cin >> samdasu;
	cout << "환타의 가격 : ";
	cin >> fanta;
	cout << "" << endl;
	cout << "개수를 입력해주세요." << endl;
	cout << "" << endl;
	cout << "콜라 수량 : ";
	cin >> coke_num;
	cout << "삼다수 수량 : ";
	cin >> samdasu_num;
	cout << "환타 수량 : ";
	cin >> fanta_num;
	cout << "------------------------------" << endl;
	sum = (coke * coke_num) + (fanta * fanta_num) + (samdasu * samdasu_num) - 500;
	cout << "500원을 할인받아 총" << sum << "원 입니다." << endl;


		return 0;
}
