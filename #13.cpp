#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

//int digit_cnt[10] : �����迭 =>  �ʱ�ȭ������ �ʾƵ� 0���� �ڵ� �ʱ�ȭ �� 
int main() {
	//freopen("input.txt", "rt", stdin);
	char N[101];
	scanf("%s", &N);
	int digit_cnt[10] = {0,}; //�����迭 => 0���� �ʱ�ȭ������ ������ ������ ������ ä���� 
	
	int tmp; 
	for(int i = 0; N[i] != '\0'; i++) { //ä���� �迭���� for�� ������ 
		tmp = N[i]-48;
		digit_cnt[tmp]++;
	}
	
	int max = INT_MIN;
	int max_num;
	for(int i = 0; i <= 9; i++) {
		if(max <= digit_cnt[i]) {
			max = digit_cnt[i];
			max_num = i;
		}
	}
	
	printf("%d\n", max_num);
	
	return 0;
}
