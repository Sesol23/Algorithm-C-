#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;

int cnt[101]; //���� �迭�� �ڵ� 0���� �ʱ�ȭ�Ǿ��ִ� ����  
int main() {
	//freopen("input.txt", "rt", stdin);
	int n;
	scanf("%d", &n);
	
	int pre;
	scanf("%d", &pre);
	int now;
	int sub;
	for(int i = 1; i < n; i++) {
		scanf("%d", &now);
		sub = abs(now - pre); //���� �Լ�  
		
		if(sub > n-1 || sub < 1) {
			printf("NO\n");
			exit(0);
		}
		else if(cnt[sub] != 0) {
			printf("NO\n");
			exit(0);
		} 
		else cnt[sub]++;
		
		pre = now;
	}
	
	printf("YES\n");
	
	return 0;
}
