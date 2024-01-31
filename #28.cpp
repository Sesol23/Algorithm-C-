#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
 
//팩토리얼 계산 후 일의 자리서부터 연속된 0의 개수를 구하는 방식은 안 됨. 가령 1000! 같은 수는 너무 커서 담아낼 수가 없기 때문.
//반면에 소인수분해의 경우, 1단위씩 숫자를 증가시키며 각 숫자마다 소인수분해를 해주는 것뿐이므로 1000! 같은 수를 계산하는 경우가 없음. 따라서 성립됨.
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
