#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);
	int N;
	scanf("%d", &N);
	
	int cnt = 0;
	int digit_cnt = 1;
	int tmp = 10;
	for(int i = 1; i <= N; i++) {
		
		if(i >= tmp) {
			digit_cnt++;
			tmp = pow(10, digit_cnt);
		}
		
		cnt += digit_cnt;
	}
	
	printf("%d\n", cnt);
	
	return 0;
}
