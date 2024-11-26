#include <stdio.h>

int main() {
    int numbers[5]; 
    int count_even = 0; 
    int count_odd = 0; 

   
    for (int i = 0; i < 5; i++) {
        printf("Nhap so nguyen thu %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

   
    for (int i = 0; i < 5; i++) {
        if (numbers[i] % 2 == 0) {
            count_even++;
        } else { 
            count_odd++;
        }
    }

   
    printf("So luong so chan la: %d\n", count_even);
    printf("So luong so le la: %d\n", count_odd);

    return 0;
}
