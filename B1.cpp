#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	int a, b, c;
	scanf("%d", &a);
	b = a + 1;
	c = a - 1;
	printf("The next number for the number %d is %d.\n", a, b);
	printf("The previous number for the number %d is %d.", a, c);
	return 0;
}
