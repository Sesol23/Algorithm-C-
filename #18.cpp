#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);
	int N, M;
	scanf("%d %d", &N, &M);
	
	int noise;
	int cnt = 0;
	int max_cnt = 0;
	for(int i = 0; i < N; i++) {
		scanf("%d", &noise);
		if(noise > M) cnt++;
		else cnt = 0;
		if(max_cnt < cnt) max_cnt = cnt;
	}
	
	if(max_cnt == 0) printf("-1\n");
	else printf("%d\n", max_cnt);
	
	return 0;
}
