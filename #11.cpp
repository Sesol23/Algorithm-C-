#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);
	int N;
	scanf("%d", &N);
	
	int cnt = 0;
	int tmp;
	for(int i = 1; i <= N; i++) {
		tmp = i; //tmp�� ���� ���� 
		while(tmp > 0) {
			tmp = tmp/10; //�ڸ����� ���õ� ������ '/'������ ��� 
			cnt++;
		}
	}
	
	cout << cnt;
	
	return 0;
}
