#include <iostream>
#include <stdio.h>
using namespace std;

int cnt[50001];
int main() {
	int N;
	scanf("%d", &N);
	
	for(int i = 1; i <= N; i++) {
		for(int j = i; j <= N; j += i) {
			cnt[j] += 1;
		}
	}
	
	for(int i = 1; i <= N; i++) {
		printf("%d ", cnt[i]);
	}
	
	return 0;
}
