#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);
	int n;
	scanf("%d", &n);
	int pre;
	scanf("%d", &pre);
	int now;
	int cnt = 1;
	int max = INT_MIN;
	for(int i = 1; i < n; i++) {
		scanf("%d", &now);
		if(now >= pre) {
			cnt++;
			if(max < cnt) max = cnt;
		}
		else cnt = 1;
		pre = now;
	}
	
	printf("%d\n", max);
	
	return 0;
}
