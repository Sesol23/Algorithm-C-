#include <iostream>
using namespace std;

int main() {
	int N, sum = 0;
	cin>>N;
	
	for(int i = 1; i < N; i++) {
		if(i == 1) {
			cout<<i;
			sum += i;
		}
		else if(N%i==0) {
			cout<<" + "<<i;
			sum += i;
		}
		
	}
	
	cout<<" = "<<sum;
	
	return 0;
}
