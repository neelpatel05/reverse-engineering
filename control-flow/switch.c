#include<stdio.h>

int switch_eg(int x) {
	switch(x) {
		case 1:
			puts("Monday");
			break;
		case 2:
			puts("Tuesday");
			break;
		case 3:
			puts("Wednesday");
			break;
		case 4:
			puts("Thursday");
			break;
		case 5:
			puts("Friday");
		case 6:
		case 7:
			puts("Weekend");
			break;
		default:
			puts("End of Week");
			break;
	}
	return 0;
}

int main() {
	int x = 5;
	switch_eg(x);
	return 0;
}
