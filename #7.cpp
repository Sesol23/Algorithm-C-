#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);
	char engString[100];
	char lastString[100];
	gets(engString); //������ ���� �Ǿ����� �� scanf�δ� ���� ����  
	int p = 0;
	
	for(int i = 0; engString[i] != '\0'; i++) {
		if(engString[i] != ' ') {
			if(engString[i] >= 65 && engString[i] <= 90) {
				lastString[p++] = engString[i] + 32;
			}
			else lastString[p++] = engString[i]; 
		}	
	}
	lastString[p] = '\0';
	printf("%s\n", lastString);
	
	return 0;
}
