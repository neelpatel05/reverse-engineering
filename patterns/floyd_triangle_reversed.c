#include<stdio.h>
#include<string.h>
int main() {
    int x = 0x1;
    int y = 0x5;
    int z = 0x1;
    while(z <= y) {
        int a = 0x1;
        while(a <= z) {
            printf("%d ",x);
            x = x + 1;
            a = a + 1;
        }
        printf("\n");
        z = z + 1;
    }
}
