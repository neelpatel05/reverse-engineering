#include<stdio.h>
#include<string.h>
int main() {
    int x = 1;
    int y = 5;
    while(x <= y) {
        int z = 0x1;
        while(z <= x) {
            printf("* ");
            z = z + 1;
        }
        printf("\n");
        x = x + 1;
    }
}
