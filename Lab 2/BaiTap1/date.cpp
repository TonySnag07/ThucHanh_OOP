#include <bits/stdc++.h>
#include "date.h"

using namespace std;

bool NgayThangNam::laNamNhuan() const {                                                           //Hàm kiểm tra năm nhuận
        return (iNam % 4 == 0 && iNam % 100 != 0) || (iNam % 400 == 0);
}

bool NgayThangNam::HopLe() {                                                                      //Hàm kiểm tra ngày có hợp lệ hay không
    if (iNam < 1 || iThang < 1 || iThang > 12) return false;                           
    if (iNgay < 1 || iNgay > SoNgay()) return false;
    return true;
}

int NgayThangNam::SoNgay() const {
        int d[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        if (iThang == 2 && laNamNhuan()) {
            return 29;
        }
        return d[iThang];
    }

void NgayThangNam::Nhap(){
    do {
        cout << "Nhap ngay, thang, nam: ";
        cin >> iNgay>> iThang >> iNam;
        
        if (!HopLe()) {
            cout << "Ngay khong hop le. Vui long nhap lai!\n";
        }
    } while (!HopLe());    
}

void NgayThangNam::Xuat(){
    cout << iNgay << "/" << iThang << "/" << iNam ;
}

void NgayThangNam::NgayThangNamTiepTheo() {                                                //Hàm tìm ngày tiếp theo
    iNgay++;                                                                         //Tăng thêm 1 ngày
    
    if (iNgay > SoNgay()) {                                                          //Kiểm tra nếu số ngày > số ngày tối đa của tháng
            iNgay = 1;                                                               //Quay về ngày 1
        iThang++;                                                                    //Nhảy sang tháng tiếp theo
        
        if (iThang > 12) {                                                           //Kiếm tra nếu qua tháng 12
            iThang = 1;                                                              //Quay về tháng 1
            iNam++;                                                                  //Qua năm tiếp theo
        }
    }
}