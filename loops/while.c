#include<stdio.h>

int main() {
	int x = 0x10;
	int y = 0x29;
	int z = 0x50;
	int a;
	while(x <= 0x10) {
		if (x >= 0x30 && y <= 0x23) {
			a = 0x10;
			x += 0x10;
		} else {
			a = 0x20;
			x += 0x20;
		}
		x += 0x12;
	}
	return 0;
}
