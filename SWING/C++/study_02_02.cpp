#include<iostream>
#include<string>	//string 선언
using namespace std;
int main() {
	int answer; // 좌석을 예약 하는지 않하는지 대답이 들어갈 변수
	int a[3][10]={  };	// 전체 좌석 배열 , 배열의 값 모두 0으로 초기화
	int x;	//입력받는 행
	int y;	//입력받는 열
	int i; //행
	int k; //열
	for (;;) { // for 반복문에서 조건 자리에 ;;이 들어가면 무한반복한다. 
		cout << "좌석을 예약하시겠습니까?(0이나 1선택)";  // 예약을 하면 1, 안하면 0이다.
		cin >> answer; // 대답 answer로 저장

		if (answer == 1) { // 좌석을 예약한다고 대답하면
			cout << "1 2 3 4 5 6 7 8 9 10" << endl; // 몇열인지 구분하기 쉽게 하기 위해 출력하는 기준점
			cout << "---------------------------------------------" << endl;

			//반복문을 이용해 배열을 간단하게 출력했다.
			for (i = 0; i < 3; i++) { // 행을 0부터 2까지 1씩 늘려가며 출력하도록 반복문을 구성해보았다.
				for (k = 0; k < 10; k++) {  // 열을 0부터 9까지 1씩 늘려가며 출력하도록 반복문을 구성해보았다. 
					cout << a[i][k]<<" "; // 각 자리를 구분하기 쉽게 " " 로 한 칸씩 띄어쓰며 출력하도록 구성해보았다. 

				}cout << endl; // 열을 나눠준다.

			}
			cout << "몇행, 몇열째 좌석을 예약하시겠습니까?";
			cin >> x >> y; // 2개의 값을 입력받아 각 행과 열 값에 저장하게 한다. 
			if (a[x - 1][y - 1] == 1) {  // 배열을 인덱스가 0부터 시작하기 때문에 x와 y에 1을 뺀 값을 배열 자리에 넣는다.
				cout << "이미 예약된 자리입니다." << endl; //조건문의 조건이 "원하는 자리의 값이 1이면"이라서 이는 이미 예약된 자리를 골랐을 경우를 의미한다. 그래서 "이미 예약된 자리입니다."라고 출력한다. 
				cout << endl;
			}
			else {
				a[x - 1][y - 1] = 1; // 원하는 자리에 1을 저장하여 다음에 좌석을 예약할 때 이미 예약한 자리는 1로 나타내도록 한다. 
				cout << "예약되었습니다." << endl; // 성공적으로 예약이 되었다. 
				cout <<" "<< endl;
			}

		}
		else {
			cout << "좌석 예약 종료" << endl;
			break;  // break;를 통해 대답이 0 이면반복을 아예 종료한다.
		}

	}

	return 0;
}
