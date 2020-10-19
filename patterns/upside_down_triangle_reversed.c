#include<stdio.h>
#include<string.h>
int main() {
    int x = 0x5;
    int y = 0x1;
    while(y <= x) {
        int z = 0x1;
        while(z < y) {
            printf(" ");
            z = z + 1;
        }
        z = y;
        while(z <= x) {
            printf("* ");
            z = z + 1;
        }
        printf("\n");
        y = y + 1;
    }
}
