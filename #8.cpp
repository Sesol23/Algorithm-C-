#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);
	char bracket[30];
	scanf("%s", &bracket);
	int cnt = 0;
	
	for(int i = 0; bracket[i] != '\0'; i++) {
		if(bracket[i] == ')') {
			cnt--;
		} else cnt++;
		if(cnt < 0) break; 
	}
	
	if(cnt == 0) printf("YES\n");
	else printf("NO\n");
	
	return 0;
}
