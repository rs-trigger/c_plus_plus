#include <iostream>
using namespace std;

int main(){
	int h1, m1, s1, h2, m2, s2, ans;
	cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;
	int tmp1 = h1*3600 + m1*60 + s1;
	int tmp2 = h2*3600 + m2*60 + s2;
	ans = tmp2 - tmp1;
	cout << ans;
}
