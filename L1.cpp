#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	int n, h, m, s;
	scanf("%d", &n);
	s = n % 60;
	m = (n / 60) % 60;
	h = (n / 3600) % 24;
	printf("%d:%02d:%02d", h, m, s);
	return 0;
}
