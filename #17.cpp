#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

bool check(int x, int y) {
	int tmp = x*(x+1)/2;
	if(tmp == y) return true;
	return false;
}

int main() {
	//freopen("input.txt", "rt", stdin);
	int N;
	scanf("%d", &N);
	
	int last_num;
	int sum;
	for(int i = 0; i < N; i++) {
		scanf("%d", &last_num);
		scanf("%d", &sum);
		
		if(check(last_num, sum)) printf("YES\n");
		else printf("NO\n");
	}
	
	return 0;
}
