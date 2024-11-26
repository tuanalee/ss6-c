#include <stdio.h>

int main() {
    int numbers[5]; 
    int sum_of_odds = 0; 

    
    for (int i = 0; i < 5; i++) {
        printf("Nhap so nguyen thu %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

   
    for (int i = 0; i < 5; i++) {
        if (numbers[i] % 2 != 0) { 
            sum_of_odds += numbers[i];
        }
    }

    
    printf("Tong cac so le la: %d\n", sum_of_odds);

    return 0;
}
