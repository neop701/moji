#define _CRT_SECURE_NO_WARNINGS
#include<assert.h>
#include<stdio.h>
#include<process.h>
int main() {
    const int col = 8;
    const int row = 8;

    FILE* fp = fopen("data.txt", "r");
    assert(fp != 0);

    char data[row][col] = {};
    for (int r = 0; r < row; r++) {
        for (int c = 0; c < col; c++) {
            fscanf(fp, "%c", &data[r][c]);
        }
        char temp = getc(fp);
    }

    fclose(fp);
    
    for (int r = 0; r < row; r++) {
        for (int c = 0; c < col; c++) {
            if (data[r][c] == '1')
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
	return 0;
}
