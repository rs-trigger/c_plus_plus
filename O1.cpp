#include <iostream>
using namespace std;

int main(){
	int a, b, n, ans1, ans2, tmp;
	cin >> a >> b >> n;
	tmp = (a * 100 + b) * n;
	ans1 = tmp / 100;
	ans2 = tmp % 100;
	cout << ans1 << " " << ans2;
	return 0;
}
