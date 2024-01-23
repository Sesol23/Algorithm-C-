#include <iostream>
#include <stdio.h>
using namespace std;

int digit_sum(int x) {
	int sum = 0;
	int tmp;
	while(x > 0) {
		tmp = x%10;
		sum += tmp;
		x = x/10;
	}
	
	return sum;
}


int main() {
	//freopen("input.txt", "rt", stdin);
	int N;
	scanf("%d", &N);
	//int cnt[N+1] => 배열의 최대 크기가 변수면 안 됨
	
	int max = INT_MIN;
	int max_num;
	
	for(int i = 0; i < N; i++) {
		int num;
		scanf("%d", &num);
		
		int sum = digit_sum(num);
		if(max < sum) {
			max = sum;
			max_num = num;
		}
		else if(max == sum) {
			if(max_num < num) {
				max_num = num;
			}
		}
	
	}
	
	printf("%d\n", max_num);
	
	return 0;
}
