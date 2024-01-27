#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	freopen("input.txt", "rt", stdin);
	int N;
	scanf("%d", &N);
	
	int hgt[100];
	for(int i = 0; i < N; i++) {
		scanf("%d", &hgt[i]);
	}
	
	int cnt = 0;
	int max = hgt[N-1]; 
	for(int i = N-2; i >= 0; i--) {
		if(max < hgt[i]) {
			cnt++;
			max = hgt[i];
		} 
	}
	
	printf("%d\n", cnt);
	
	return 0;
}
