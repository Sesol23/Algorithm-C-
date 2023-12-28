#include <iostream>
using namespace std;

int main() {
	//freopen("input.txt", "rt", stdin); 
	int N, i, inp, min = 2147000000, max = -2147000000;
	cin>>N;
	
	for(i = 0; i < N; i++) {
		cin>>inp;
		
		if(inp > max) max = inp;
		if(inp < min) min = inp;
		
	}
	
	cout<<max-min;
	return 0;
}
