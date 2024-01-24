#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

//int digit_cnt[10] : 전역배열 =>  초기화해주지 않아도 0으로 자동 초기화 됨 
int main() {
	//freopen("input.txt", "rt", stdin);
	char N[101];
	scanf("%s", &N);
	int digit_cnt[10] = {0,}; //지역배열 => 0으로 초기화해주지 않으면 쓰레기 값으로 채워짐 
	
	int tmp; 
	for(int i = 0; N[i] != '\0'; i++) { //채워진 배열까지 for문 돌리기 
		tmp = N[i]-48;
		digit_cnt[tmp]++;
	}
	
	int max = INT_MIN;
	int max_num;
	for(int i = 0; i <= 9; i++) {
		if(max <= digit_cnt[i]) {
			max = digit_cnt[i];
			max_num = i;
		}
	}
	
	printf("%d\n", max_num);
	
	return 0;
}
