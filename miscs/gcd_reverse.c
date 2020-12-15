#include<stdio.h>

int main() {
	int e;
	int a = 0x5a;
	int b = 0xf;
	int c = 0x1;
	while(c<=a && c<=b) {
		if (a%c == 0 && b%c == 0) {
			e = c;
		}
		c = c + 1;
	}
	return e;
}
