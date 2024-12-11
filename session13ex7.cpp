#include <stdio.h>
#include <stdlib.h>

int** tao_ma_tran(int hang, int cot) {
    int i, j;
    int **ma_tran = (int**)malloc(hang * sizeof(int*));
    for(i = 0; i < hang; i++) {
        ma_tran[i] = (int*)malloc(cot * sizeof(int));
    }
    
    for(i = 0; i < hang; i++) {
        for(j = 0; j < cot; j++) {
            printf("Nhap gia tri cho phan tu [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &ma_tran[i][j]);
        }
    }
    
    return ma_tran;
}

void in_ma_tran(int** ma_tran, int hang, int cot) {
    printf("\nMa tran da nhap:\n");
    for(int i = 0; i < hang; i++) {
        for(int j = 0; j < cot; j++) {
            printf("%d ", ma_tran[i][j]);
        }
        printf("\n");
    }
}

void giai_phong_ma_tran(int** ma_tran, int hang) {
    for(int i = 0; i < hang; i++) {
        free(ma_tran[i]);
    }
    free(ma_tran);
}

int main() {
    int hang, cot;
    
    printf("Nhap so hang cua ma tran: ");
    scanf("%d", &hang);
    
    printf("Nhap so cot cua ma tran: ");
    scanf("%d", &cot);
    
    int** ma_tran = tao_ma_tran(hang, cot);
    
    in_ma_tran(ma_tran, hang, cot);
    
    giai_phong_ma_tran(ma_tran, hang);
    
    return 0;
}

