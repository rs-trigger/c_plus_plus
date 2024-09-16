#include <iostream>
using namespace std;

int main(){
	int a, b;
	cin >> a >> b;
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	// a ^ b == a XOR b
	cout << a << " " << b;
	return 0;
}
