#include <iostream>
using namespace std;

int main(){
	int a, ans, b, c, d, e;
	cin >> a;
	b = a % 10;
	c = (a / 10) % 10;
	d = ((a / 10) / 10) % 10;
	e = (((a / 10) / 10) / 10) % 10;
	ans = (b - e)*(b - e) + (d - c)*(d - c) + 1;
	cout << ans;
	return 0;
}
