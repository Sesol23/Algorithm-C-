#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin);
	int n, k; //������ ���Ե� ���̹Ƿ� �ʱ�ȭ�� �ʿ� X;
	scanf("%d %d", &n, &k);
	
	vector<int> arr(n); //���� �迭
	for(int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	
	int sum = 0; //int�� �⺻���� 4199804�̹Ƿ� 0���� �ʱ�ȭ������ ������ ���� max���� 
	//4199804�� ���ų� �� ū ���� ��µ�   
	//���� 0���� �ʱ�ȭ �ʼ� 
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
