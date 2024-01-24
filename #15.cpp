#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

bool isPrime(int x) {
	if(x == 1) return false;
	for(int i = 2; i*i <= x; i++) {
		if(x%i == 0) return false;
	}
	
	return true;
}

int main() {
	//freopen("input.txt", "rt", stdin);
	int N;
	scanf("%d", &N);
	
	int cnt = 0;
	for(int i = 2; i <= N; i++) {
		if(isPrime(i)) cnt++;
	}
	
	printf("%d\n", cnt);
	
	return 0;
}
