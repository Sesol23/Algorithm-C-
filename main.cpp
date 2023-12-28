#include <iostream>
using namespace std;

int main() {
	int N, M, sum = 0;
	cin>>N>>M;
	
	for(int i = 1; i <= N; i++) {
		
		if(M*i > N) break;
		sum += M*i;
		
	}
	
	cout<<sum;
	
	return 0;
}
