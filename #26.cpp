#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);
	int n;
	scanf("%d", &n);
	vector<int> arr(n);
	for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
	
	printf("1 ");
	int cnt;
	for(int i = 1; i < n; i++) {
		cnt = 1;
		for(int j = i-1; j >= 0; j--) {
			if(arr[j] >= arr[i]) {
				cnt++;
			}
		}
		
		printf("%d ", cnt);
	}
	
	return 0;
}
