#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

//�Ҽ��� ���� : � ���� �����ϴ� �ּ��� ���� ����  
//���� 2�� �� �������� ���� 2�� ������ 4�� ������ ���� ����  
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
