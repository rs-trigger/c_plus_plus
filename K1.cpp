#include <iostream>
using namespace std;

int main(){
	int n, m, h;
	cin >> n;
	m = n % 60;
	h = (n / 60) % 24;
	cout << h << " " << m;
	return 0;
}
