#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);
	int n, k; //어차피 대입될 값이므로 초기화할 필요 X;
	scanf("%d %d", &n, &k);
	
	vector<int> arr(n); //동적 배열
	for(int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	
	int sum = 0; //int의 기본값은 4199804이므로 0으로 초기화해주지 않으면 최종 max값은 
	//4199804과 같거나 더 큰 값이 출력됨   
	//따라서 0으로 초기화 필수 
	for(int i = 0; i < k; i++) {
		sum += arr[i];
	}
	int max = sum;
	for(int i = k; i < n; i++) {
		sum += (arr[i] - arr[i-k]);
		if(max < sum) max = sum;
	}
	
	printf("%d\n", max); 
	
	return 0;
}
