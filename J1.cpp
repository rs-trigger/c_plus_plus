#include <iostream>
using namespace std;

int main(){
	int a, ans;
	cin >> a;
	ans = a + 2 - a % 2;
	cout << ans;
	return 0;
}
