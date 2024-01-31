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
	
	vector<int> rnk(n,1); //rnk �迭 1�� �ʱ�ȭ  
	for(int i = 1; i < n; i++) {
		for(int j = i-1; j >= 0; j--) {
			if(arr[i] < arr[j]) rnk[i]++;
			else if(arr[i] > arr[j]) rnk[j]++;
		}
	}
	
	for(int i = 0; i < n; i++) printf("%d ", rnk[i]); 
	
	return 0;
}
