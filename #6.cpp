#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main() {
	//freopen("input.txt", "rf", stdin);
	char stringNum[50];
	scanf("%s", stringNum);
	int num[50];
	int j = 0;
	int m = 0;
	int lastNum = 0;
	
	for(int i = 0; i < 50; i++) {
		if(stringNum[i] >= 48 && stringNum[i] <= 57) {
			num[j] = stringNum[i]-48;
			j++;
		}
	}
	
	while(num[m] == 0) m++;
	
	while(m < j) {
		lastNum += num[m]*pow(10, j-m-1);
		m++;
	}
	
	printf("%d\n", lastNum);
	
	int cnt = 0;
	for(int i = 1; i <= lastNum; i++) {
		if(lastNum%i ==0) cnt++;
	}
	
	printf("%d\n", cnt);
	
	return 0;
}
