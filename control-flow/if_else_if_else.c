#include<stdio.h>

int main() {
	int a = 0x10;
	int b = 0x65;
	int c = 0x45;
	if(a>b) {
		c = 0x50;
	} else if (a>c) {
		c = 0x51;
	} else {
		c = 0x52;
	}
	return c;
}
