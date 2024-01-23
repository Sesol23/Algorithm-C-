#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);
	int N;
	scanf("%d", &N);
	
	int cnt = 0;
	int tmp;
	for(int i = 1; i <= N; i++) {
		tmp = i; //tmp를 쓰는 습관 
		while(tmp > 0) {
			tmp = tmp/10; //자릿수와 관련된 문제는 '/'연산자 사용 
			cnt++;
		}
	}
	
	cout << cnt;
	
	return 0;
}
