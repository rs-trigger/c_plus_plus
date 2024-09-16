#include <iostream>
using namespace std;

int main(){
	int v, s, ans;
	cin >> v >> s;
	ans = ((s - 1) / v) + 1; 
	cout << ans;
	return 0;
}
