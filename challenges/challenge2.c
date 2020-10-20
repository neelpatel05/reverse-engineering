#include<stdio.h>

short functionOne(int a) {
    int b = a;
    short c = *(short *)&b;
    return c;
}

void functionTwo(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
	int a = 10;
    int y = a << 2;
    int c = functionOne(a);
    functionTwo(&a,&y);
    return c;
}
