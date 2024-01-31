#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

//소수의 의의 : 어떤 수를 구성하는 최소의 수의 조합  
//가령 2로 안 나눠지는 수가 2를 포함한 4로 나눠질 리는 없다  
int main() {
	//freopen("input.txt", "rt", stdin);
	int n;
	scanf("%d", &n);
	
	vector<int> prime(n+1);
	int tmp;
	int j;
	for(int i = 2; i <= n; i++) {
		tmp = i;
		j = 2;
		while(tmp != 1) {
			if(tmp%j == 0) {
				tmp /= j;
				prime[j]++;
			}
			else {
				j++;
			}
		}
	}
	
	printf("%d! = ", n);
	for(int i = 2; i <= n; i++) {
		if(prime[i] != 0) printf("%d ", prime[i]);
	}
	
	return 0;
}
