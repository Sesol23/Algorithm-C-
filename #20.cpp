#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);
	int N;
	scanf("%d", &N);
	
	int A[100];
	int B[100];
	for(int i = 0; i < N; i++) {
		scanf("%d", &A[i]);
	}
	for(int i = 0; i < N; i++) {
		scanf("%d", &B[i]);
	}
	
	for(int i = 0; i < N; i++) {
		if(A[i] == B[i]) printf("D\n");
		else if((A[i] == 1 && B[i] == 3) || 
		(A[i] == 2 && B[i] == 1) ||
		(A[i] == 3 && B[i] == 2)) printf("A\n");
		else printf("B\n");
	}
	
	return 0;
}
