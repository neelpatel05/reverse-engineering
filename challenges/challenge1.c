#include<stdio.h>

int main() {
	int x = 34;
	int y = 57;
	int z;
	for(int i = 0; i < 50; i+=4) {
		if((x <= 60 && y > 90) || (x++ <= 100 && --y != 90)) {
			z = 10;
			x += 8;
			y += 5*x;
		} else if (++x != --y && x++ == y++) {
			z = 20;
			x += 9;
			y += x/2;
		} else if (x == 100) {
			continue;
		} else if (y == 100) {
			break;
		} else {
			puts("Reverse it");
		}
	}
	printf("%d\t%d\t%d\t",x,y,z);
	return 0;
}
