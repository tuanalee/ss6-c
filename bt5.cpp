#include <stdio.h>

int main() {
    int year, month;
    
    // Yeu cau nguoi dung nhap vao so nam va so thang
    printf("Nhap nam: ");
    scanf("%d", &year);
    printf("Nhap thang (1-12): ");
    scanf("%d", &month);

    // Kiem tra thang hop le
    if (month < 1 || month > 12) {
        printf("Thang khong hop le! Vui long nhap thang tu 1 den 12.\n");
        return 1; // Thoat chuong trinh
    }

    int days;

    // Xac dinh so ngay trong thang
    switch (month) {
        case 1: 
        case 3:
        case 7: 
        case 10: 
        case 12: 
            days = 31;
            break;
        case 4: 
        case 6:  
        case 9: 
        case 11: 
            days = 30;
            break;
        case 2: 
           
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                days = 29; 
            } else {
                days = 28;
            }
            break;
        default:
            days = 0; 
            break;
    }

   
    printf("Thang %d nam %d co %d ngay.\n", month, year, days);

    return 0;
}
