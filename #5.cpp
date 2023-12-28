#include <stdio.h>
using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);
	char regiNum[20];
	scanf("%s", &regiNum);
	int year = 2023;
	int age = 0;
	
	if(regiNum[7] == '1' || regiNum[7] == '2') {
		age = year - (1900 + (regiNum[0]-48)*10 + (regiNum[1]-48)) + 1;
	} else {
		age = year - (2000 + (regiNum[0]-48)*10 + (regiNum[1]-48)) + 1;
	}
	printf("%d", age);
	
	if(regiNum[7] == '1' || regiNum[7] == '3') printf(" M\n");
	else printf(" W\n");
	
	return 0;
}
