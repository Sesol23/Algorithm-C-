#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
 
//���丮�� ��� �� ���� �ڸ������� ���ӵ� 0�� ������ ���ϴ� ����� �� ��. ���� 1000! ���� ���� �ʹ� Ŀ�� ��Ƴ� ���� ���� ����.
//�ݸ鿡 ���μ������� ���, 1������ ���ڸ� ������Ű�� �� ���ڸ��� ���μ����ظ� ���ִ� �ͻ��̹Ƿ� 1000! ���� ���� ����ϴ� ��찡 ����. ���� ������.
int main() {
	//freopen("input.txt", "rt", stdin);
	int n;
	scanf("%d", &n);
	
	int cnt2 = 1, cnt5 = 1;
	int tmp;
	int j;
	for(int i = 10; i <= n; i++) {
		tmp = i;
		j = 2;
		while(tmp != 1) {
			if(tmp%j == 0) {
				if(j == 2) cnt2++;
				else if(j == 5) cnt5++;
				tmp /= j;
			}
			else {
				j++;
			}
		}
	}
	
	if(cnt2 > cnt5) printf("%d\n", cnt5);
	else printf("%d\n", cnt2);
	
	return 0;
}
