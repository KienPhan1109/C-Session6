#include <stdio.h>

int main(){
    int day, month, year;
    printf("Nhập vào số tháng: "); scanf("%d", &month);
    if (month < 1 || month > 12) {
        printf("Tháng nhập vào không hợp lệ");
        return 0;
    }
    printf("Nhập vào số năm: "); scanf("%d", &year);
    if (year < 1)
    {
        printf("Năm nhập vào không hợp lệ");
        return 0;
    }
    switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            day=31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            day=30;
            break;
        case 2:
            if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
            {
                day=29;
            }
            else
            {
                day=28;
            }
            break;
    }
    printf("Số ngày trong tháng %d năm %d là: %d", month, year, day);
}