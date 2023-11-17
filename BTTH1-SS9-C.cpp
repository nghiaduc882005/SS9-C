#include <stdio.h>
int main(){
	int arr[100];
	int n, choice, is_prime, sum, min, max, i, j;
	do{
		printf("*******************************MENU**********************************\n");
		printf("1. Nhap so phan tu can nhap va gia tri cac phan tu\n");
        printf("2. In ra gia tri cac phan tu dang quan ly\n");
        printf("3. In ra gia tri cac phan tu chan và tinh tong\n");
        printf("4. In ra giá tri lon nhat và nho nhat trong mang\n");
        printf("5. In ra các phan tu la so nguyen to trong mang va tinh tong\n");
        printf("6. Nhap vao mot so va thong ke trong mang co bao nhieu phan tu co gia tri nhu vay\n");
        printf("7. Them mot phan tu vao vi tri chi dinh\n");
        printf("8. Thoat\n");
        
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &choice);
        
        switch(choice){
        	case 1:
        		printf("Nhap so phan tu can nhap: \n");
        		scanf("%d", &n);
        		printf("Nhap gia tri cac phan tu: \n");
        		for(int i = 0; i<n; i++){
        		   printf("arr[%d] = ", i);
				   scanf("%d", &arr[i]);
				}
				break;
			case 2:
				printf("Cac phan tu dang quan ly la:\n");
				for(int i = 0; i < n; i++){
				   printf(" %d ", arr[i]);
			    }
			    printf("\n");
			    break;
			case 3:
				printf("Gia tri cac phan tu chan la:\n");
				for(int i = 0; i < n; i++){
					if(arr[i] % 2 == 0){
					  printf("%d", arr[i]);
					  sum += arr[i];
					}
				}
				printf("Tong gia tri cac phan tu chan la: %d\n", sum);
				break;
			case 4:
				max = arr[0];
				min = arr[0];
				for(int i = 1; i < n; i++){
					if (arr[i] > max){
						max = arr[i];
				    }
					if (arr[i] < min){
						min = arr[i];
		            }
				}
				printf("Gia tri lon nhat trong mang la : %d\n", max);
				printf("Gia tri nho nhat trong mang la : %d\n", min);				
			case 5://So nguyen to la so tu nhien lon hon 1 khong phai la tich cua hai so tu nhien nho hon.
                printf("Cac phan tu la so nguyen to la: \n");
                
                break;
			case 6:
				
				break;
			case 7:
				
				break;
			case 8:
                printf("Tam biet!\n");
                break;
            default: //khac voi nhung lua chon con lai
                printf("Lua chon khong hop le. Vui long chon lai.\n");
        }
    } while(choice != 8);
}

