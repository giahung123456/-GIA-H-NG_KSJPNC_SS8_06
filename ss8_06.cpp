#include <stdio.h>

int main() {
   
    int mtv[3][3] = {{6,7,4},{51,26,11},{14,2,33}};
        

    int n = 3; 
    int sum = 0;

    
    printf("Cac phan tu tren duong cheo chinh la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", mtv[i][i]);
        sum += mtv[i][i];
    }

   
    printf("\nTong cac phan tu tren duong cheo chinh la: %d\n", sum);

    return 0;
}