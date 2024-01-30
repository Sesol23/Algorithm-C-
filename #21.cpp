#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);
	int A[10], B[10];
	for(int i = 0; i < 10; i++) {
		scanf("%d", &A[i]);
	}
	for(int i = 0; i < 10; i++) {
		scanf("%d", &B[i]);
	}
	
	int winA = 0, winB = 0;
	char winner = 'D';
	for(int i = 0; i < 10; i++) {
		if(A[i] == B[i]) {
			winA++;
			winB++;
		}
		else if(A[i] > B[i]) {
			winA += 3;
			if(winA == winB) winner = 'A';	
		}
		else {
			winB += 3;
			if(winA == winB) winner = 'B';
		}
	}
	
	printf("%d %d\n", winA, winB);
	if(winA == winB) printf("%c\n", winner);
	else if(winA > winB) printf("A\n");
	else printf("B\n");
	
	return 0;
}
