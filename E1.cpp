#include <iostream>
using namespace std;

int main(){
	int v, t, s, ans;
	cin >> v >> t;
	s = v * t;	
	ans = (s > 0) ? s % 109 : ((s%109) + 109) % 109;
	cout << ans;
	return 0;
}
