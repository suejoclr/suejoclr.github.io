#include<iostream>
#include<string>	//string 선언
using namespace std;
int main() {
	int randnum;	// 랜덤한 수를 저장할 변수를 정의한다
	srand(time(NULL));	//이 함수를 사용해야 랜덤 난수 생성이 가능해진다.
	randnum = rand() % 101;	// randnum의 범위를 rand() % 101를 사용하여 0에서 100까지 랜덤한 수가 저장될 수 있게 해준다.
	int num; //특정배수 개수를 정의하는 변수
	int a;	//특정 배수를 정의하는 변수
	int k;	//배수들을 정의하는 변수

	cout << "랜덤한 수: " << randnum << endl;  //randnum에 저장되어 있는 랜덤 난수가 출력된다.

	cout << "특정배수 개수 : ";
	cin >> num;	// 특정배수 개수를 입력받아 num에 저장한다. 

	

	cout << "<특정배수만 출력하는 프로그램>" << endl;
	for (int i = 0; i <= (num-1); i++) {	//i의 범위를 0부터 num-1까지로 설정하여 num번 만큼 반복될수 있게 한다. 
		
		cout << i << "번째 특정 배수:"; 
		cin >> a;	//특정 배수를 입력받아 a에 저장한다. 

		cout << "<특정배수만 출력하는 프로그램>" << endl;
		for (k = a; k <= randnum; k++) {   //처음 출력되는 숫자를 a부터 출력되게 하기 위해서 k=a로 설정함. k의 범위는 랜덤한 수까지 설정했다.
			if ((k % a) == 0) {	//a의 배수를 출력시키기 위해서 if조건문을 이용해 k를 a로 나누었을때 나머지가 0이 되는 값만 출력되게 함
				cout << k << " ";  //" "를 통해 배수 값들을 알아보기 쉽게 함.
			}
			else
				continue;	//continue;를 이용해 k를 a로 나누었을때 나머지가 0이 아닌값들은 반복을 멈추고 다시 반복문 처음으로 돌아가게 함.
			
		}
		cout << endl;  // 특정배수만 출력하는 프로그램과 특정배수 제외 출력하는 프로그램을 구분하기 위해 나눔

		cout << "<특정배수 제외 출력하는 프로그램>" << endl;
		for (k = 1; k <= randnum; k++) {	//출력되는 값이 1부터 출력하게 하기 위해 k는 1부터 랜덤한 수 까지로 범위를 설정함.
			if ((k % a) != 0) {	// 특정배수 제외 출력하는 프로그램이기 때문에 if조건문을 이용해 k를 a로 나눈값이 0이 아닌 값들만 출력하게 함.
				cout << k << " ";
			}
			else
				continue;	// k를 a로 나눈값이 0이면 반복을 멈추고 다시 반복문 처음으로 돌아가게 continue; 를 사용함

		}
		cout << endl;
	}


	return 0;
}
