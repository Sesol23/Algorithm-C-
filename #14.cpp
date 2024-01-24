#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int reverse(int x) {
	int res = 0;
	int tmp;
	while(x>0) {
		tmp = x%10;
		res = res*10 + tmp;
		x = x/10;
	}
	
	return res;
}

bool isPrime(int x) {
	if(x == 1) return false;
	for(int i = 2; i < x; i++) {
		if(x%i == 0) return false;
	}
	
	return true;
}

int main() {
	//freopen("input.txt", "rt", stdin);
	int N;
	scanf("%d", &N);
	
	int num;
	int tmp;
	for(int i = 0; i < N; i++) {
		scanf("%d", &num);
		tmp = reverse(num);
		if(isPrime(tmp)) printf("%d ", tmp);
	}
	
	return 0;
}
