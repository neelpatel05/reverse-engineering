#include <stdio.h>
int main() {
    int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

	int transpose[3][3] = {{0,0,0},{0,0,0},{0,0,0}};
	int r, c, i, j;
	r = 3;
	c = 3;

    for (i = 0; i < r; ++i) {
        for (j = 0; j < c; ++j) {
            transpose[j][i] = a[i][j];
        }
    }

    for (i = 0; i < c; ++i) {
        for (j = 0; j < r; ++j) {
            printf("%d  ", transpose[i][j]);
            if (j == r - 1)
                printf("\n");
        }
    }
    return 0;
}
