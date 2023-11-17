#include <stdio.h>

int main() {
    int n, m;
    printf("Nhap so hang n: ");
    scanf("%d", &n);
    printf("Nhap so cot m: ");
    scanf("%d", &m);

    int a[n][m];
    int i, j;

    int choice;
    do {
        printf("\nMENU\n");
        printf("1. Nhap gia tri cac phan tu cua mang\n");
        printf("2. In gia tri cac phan tu cua mang theo ma tran\n");
        printf("3. In gia tri cac phan tu la le va tinh tong\n");
        printf("4. In ra cac phan tu nam tren duong bien va tinh tich\n");
        printf("5. In ra cac phan tu nam tren duong cheo chinh va cheo phu va tinh tong\n");
        printf("6. In ra gia tri lon nhat va nho nhat trong mang\n");
        printf("7. Tinh gia tri trung binh cua cac phan tu trong mang va thong ke co bao nhieu phan tu co gia tri bang gia tri trung binh\n");
        printf("8. In ra dong co tong gia tri cac phan tu la lon nhat\n");
        printf("9. Thoat\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Nhap gia tri cac phan tu cua mang:\n");
                for (i = 0; i < n; i++) {
                    for (j = 0; j < m; j++) {
                        printf("a[%d][%d] = ", i, j);
                        scanf("%d", &a[i][j]);
                    }
                }
                break;
            case 2:
                printf("Gia tri cac phan tu cua mang theo ma tran:\n");
                for (i = 0; i < n; i++) {
                    for (j = 0; j < m; j++) {
                        printf("%d ", a[i][j]);
                    }
                    printf("\n");
                }
                break;
            case 3:
                printf("Gia tri cac phan tu la le va tong:\n");
                int sum = 0;
                for (i = 0; i < n; i++) {
                    for (j = 0; j < m; j++) {
                        if (a[i][j] % 2 != 0) {
                            printf("%d ", a[i][j]);
                            sum += a[i][j];
                        }
                    }
                }
                printf("\nTong cac phan tu la le: %d\n", sum);
                break;
            case 4:
                printf("Cac phan tu nam tren duong bien va tich:\n");
                int product = 1;
                for (i = 0; i < n; i++) {
                    for (j = 0; j < m; j++) {
                        if (i == 0 || i == n - 1 || j == 0 || j == m - 1) {
                            printf("%d ", a[i][j]);
                            product *= a[i][j];
                        }
                    }
                }
                printf("\nTich cac phan tu nam tren duong bien: %d\n", product);
                break;
            case 5:
                printf("Cac phan tu nam tren duong cheo chinh va cheo phu va tong:\n");
                int sumDiagonal = 0;
                for (i = 0; i < n; i++) {
                    for (j = 0; j < m; j++) {
                        if (i == j || i + j == n - 1) {
                            printf("%d ", a[i][j]);
                            sumDiagonal += a[i][j];
                        }
                    }
                }
                printf("\nTong cac phan tu nam tren duong cheo chinh va cheo phu: %d\n", sumDiagonal);
                break;
            case 6:
                int max = a[0][0];
                int min = a[0][0];
                for (i = 0; i < n; i++) {
                    for (j = 0; j < m; j++) {
                        if (a[i][j] > max) {
                            max = a[i][j];
                        }
                        if (a[i][j] < min) {
                            min = a[i][j];
                        }
                    }
                }
                printf("Gia tri lon nhat trong mang: %d\n", max);
                printf("Gia tri nho nhat trong mang: %d\n", min);
                break;
            case 7:
                int sumAll = 0;
                int count = 0;
                for (i = 0; i < n; i++) {
                    for (j = 0; j < m; j++) {
                        sumAll += a[i][j];
                    }
                }
                int avg = sumAll / (n * m);
                printf("Gia tri trung binh cua cac phan tu trong mang: %d\n", avg);
                for (i = 0; i < n; i++) {
                    for (j = 0; j < m; j++) {
                        if (a[i][j] == avg) {
                            count++;
                        }
                    }
                }
                printf("Co %d phan tu co gia tri bang gia tri trung binh\n", count);
                break;
            case 8:
                int maxRow = 0;
                int maxSum = 0;
                for (i = 0; i < n; i++) {
                    int sumRow = 0;
                    for (j = 0; j < m; j++) {
                        sumRow += a[i][j];
                    }
                    if (sumRow > maxSum) {
                        maxSum = sumRow;
                        maxRow = i;
                    }
                }
                printf("Dong co tong gia tri cac phan tu la lon nhat: %d\n", maxRow);
                break;
            case 9:
                printf("Tam biet!\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai!\n");
                break;
        }
    } while (choice != 9);
}
