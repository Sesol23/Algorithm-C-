#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int w_cnt[58];
int main() {
	//freopen("input.txt", "rt", stdin);
	char w[100];
	scanf("%s", &w);
	
	int tmp;
	for(int i = 0; w[i] != '\0'; i++) {
		tmp = w[i] - 65;
		w_cnt[tmp]++;
	}
	
	scanf("%s", &w);
	for(int i = 0; w[i] != '\0'; i++) {
		tmp = w[i] - 65;
		w_cnt[tmp]--;
	}
	
	for(int i = 0; i < 58; i++) { //끝까지 체크해야 하는 배열은 '\0' 쓰지 말 것 
		if(w_cnt[i] != 0) {
			cout << "NO";
			exit(0);
		}
	}
	
	cout << "YES";
	return 0;
}
