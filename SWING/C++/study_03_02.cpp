#include<iostream>
#include<string> //string 선언
using namespace std;

int total(int* a, int* b, int* c, int* d) { // int 자료형이고  4개의 매개변수를 받는 함수를 만든다.
	
	int result;	// 모든 은행 계좌 금액의 총합을 저장하는 변수
	result = *a + *b + *c + *d;
	return result;	// 모든 은행 계좌 금액의 총합을 리턴값으로 남긴다. 
	

}void myaccounts(string i) { // 문자열을 입력받는 함수를 만들다. 
	int bank[4] = { 5000, 4000, 0, 10 };	// 은행별 금액을 저장하는 배열을 다시한번 선언한다. 
	
	if (i == "하나") // 특정계좌에 있는 금액을 리턴하기 위해 조건문을 만들었다. 
		cout << bank[0];
	else if (i == "우리")
		cout << bank[1];
	else if (i == "신한")
		cout << bank[2];
	else if (i == "국민")
		cout << bank[3];
	
}

int main() {
	
	string bank_name[4] = { "하나", "우리", "신한", "국민" };
	int bank[4] = { 5000, 4000, 0, 10 };
	

	int total_money = total(&bank[0], &bank[1], &bank[2], &bank[3]); //전체 자산(모든 계좌 금액의 총합)을 저장하는 변수
	cout << "***************SWING 자산관리 서비스***************" << endl;
	cout << "---------------은행 별 계좌 정보---------------" << endl;
	cout << "  " << bank_name[0] << "  |  " << bank_name[1] << "  |  " << bank_name[2] << "  |  " << bank_name[3] << "  |" << endl;
	cout << "  "; myaccounts(bank_name[0]); cout << "  |  "; myaccounts(bank_name[1]); cout << "  |    "; myaccounts(bank_name[2]); cout << "   |   "; myaccounts(bank_name[3]); cout << "   |" << endl;
	//myaccounts()함수 안에 문자열을 입력하는 것이 아니라 문자열 자료형을 입력해야 함수가 실행된다. 
	cout << "-----------------------------------------------" << endl;

	cout << "현재 SWING 자산관리 서비스에 등록된 회원님의 총 자산은 " << total_money << "원 입니다." << endl;
	cout << "***********************************************" << endl;
	return 0;
}
