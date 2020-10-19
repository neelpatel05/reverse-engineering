#include<stdio.h>
#include<string.h>
int main() {
    int x = 5;
    int y = 1;
    while(y <= x) {
        int z = 1;
        while(z <= (x-y)) {
            printf(" ");
            z = z + 1;
        }
        z = 1;
        while(z <= y) {
            printf("* ");
            z = z + 1;
        }
        printf("\n");
        y = y + 1;
    }
}
