#include <iostream>
using namespace std;

int main() {
	int A, B, i, sum = 0;
	cin>>A>>B;
	
	for(i = A; i < B; i++) {
		sum += i;
		cout<<i<<" + ";
	}
	
	sum += i;
	cout<<i<<" = "<<sum;
	
	return 0;
}
