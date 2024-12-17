#include <stdio.h>

int main() {
    int ngay, thang;

    printf("Nhập ngày sinh: ");
    scanf("%d", &ngay);

    printf("Nhập tháng sinh: ");
    scanf("%d", &thang);

    printf("Cung hoàng đạo của bạn là: ");
    
    if ((ngay >= 21 && thang == 3) || (ngay <= 20 && thang == 4)) {
        printf("Bạch Dương\n");
    } else if ((ngay >= 21 && thang == 4) || (ngay <= 20 && thang == 5)) {
        printf("Kim Ngưu\n");
    } else if ((ngay >= 21 && thang == 5) || (ngay <= 21 && thang == 6)) {
        printf("Song Tử\n");
    } else if ((ngay >= 22 && thang == 6) || (ngay <= 22 && thang == 7)) {
        printf("Cự Giải\n");
    } else if ((ngay >= 23 && thang == 7) || (ngay <= 22 && thang == 8)) {
        printf("Sư Tử\n");
    } else if ((ngay >= 23 && thang == 8) || (ngay <= 22 && thang == 9)) {
        printf("Xử Nữ\n");
    } else if ((ngay >= 23 && thang == 9) || (ngay <= 23 && thang == 10)) {
        printf("Thiên Bình\n");
    } else if ((ngay >= 24 && thang == 10) || (ngay <= 22 && thang == 11)) {
        printf("Bọ Cạp\n");
    } else if ((ngay >= 23 && thang == 11) || (ngay <= 21 && thang == 12)) {
        printf("Nhân Mã\n");
    } else if ((ngay >= 22 && thang == 12) || (ngay <= 19 && thang == 1)) {
        printf("Ma Kết\n");
    } else if ((ngay >= 20 && thang == 1) || (ngay <= 18 && thang == 2)) {
        printf("Bảo Bình\n");
    } else if ((ngay >= 19 && thang == 2) || (ngay <= 20 && thang == 3)) {
        printf("Song Ngư\n");
    } else {
        printf("Ngày tháng không hợp lệ!\n");
    }

    return 0;
}