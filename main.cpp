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


/*
#include <stdio.h>

int main() {
    FILE* file = fopen("data.txt", "r");

    if (file == NULL) {
        printf("�t�@�C�����J���܂���ł����B\n");
        return 1;
    }

    int fArray[8][8];

    // �t�@�C�����琔����ǂݍ���Ŕz��Ɋi�[
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            fscanf(file, "%1d", &fArray[i][j]);
        }
    }

    fclose(file);

    // �����Ɋ�Â��đ啶����F��\��
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if ((i == 0 && j < 4) || (i < 4 && j == 0) || (i == 4 && j <= 4))
                printf("%c", (fArray[i][j] == 1) ? '*' : ' ');
            else
                printf("%c", (fArray[i][j] == 1) ? ' ' : '*');
        }
        printf("\n");
    }

    return 0;
}
*/
