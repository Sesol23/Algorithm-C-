#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);
	char stringNum[50];
	scanf("%s", &stringNum);
	int num = 0;
	
	for(int i = 0; stringNum[i] != '\0'; i++) {
		if(stringNum[i] >= 48 && stringNum[i] <= 57) {
			num = num*10 + (stringNum[i]-48);
		}
	}
	
	printf("%d\n", num);
	
	int cnt = 0;
	for(int i = 1; i <= num; i++) {
		if(num%i ==0) cnt++;
	}
	
	printf("%d\n", cnt);
	
	return 0;
}
