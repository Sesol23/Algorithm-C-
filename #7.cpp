#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);
	char engString[100];
	char lastString[100];
	gets(engString); //공백이 포함 되어있을 때 scanf로는 받지 못함  
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
