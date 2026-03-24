#include <bits/stdc++.h>

using namespace std;

class NgayThang {
private:
    int ngay, thang, nam;                                                               //Khai báo ngày,tháng,năm

    bool laNamNhuan() const {                                                           //Hàm kiểm tra năm nhuận
        return (nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0);
    }

    int soNgay() const {
        int d[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        if (thang == 2 && laNamNhuan()) {
            return 29;
        }
        return d[thang];
    }

    bool valid() {                                                                      //Hàm kiểm tra ngày có hợp lệ hay không
        if (nam < 1 || thang < 1 || thang > 12) return false;                           
        if (ngay < 1 || ngay > soNgay()) return false;
        return true;
    }

public:
    NgayThang(int d = 1, int m = 1, int y = 1970) : ngay(d), thang(m), nam(y) {;}       // Constructor mặc định

    void nhap() {
        do {
            cout << "Nhap ngay, thang, nam: ";
            cin >> ngay >> thang >> nam;
            
            if (!valid()) {
                cout << "Ngay khong hop le. Vui long nhap lai!\n";
            }
        } while (!valid());                                                             // Dùng hàm do-while để nhập lại ngày tháng năm khi không hợp lệ
    }

    void nextday() {                                                                    //Hàm tìm ngày tiếp theo
        ngay++;                                                                         // Tăng thêm 1 ngày
        
        
        if (ngay > soNgay()) {                                                          // Nếu số ngày > số ngày tối đa của tháng
            ngay = 1;                                                                   // Quay về ngày 1
            thang++;                                                                    // Nhảy sang tháng tiếp theo
            
            if (thang > 12) {                                                           // Nếu qua tháng 12
                thang = 1;                                                              // Quay về tháng 1
                nam++;                                                                  // Qua năm tiếp theo
            }
        }
    }

    void xuat() const {                                                                 //Hàm xuất ngày tiếp theo
        cout << ngay << "/" << thang << "/" << nam;
    }
};

int main() {
    NgayThang dt;                                                                       //Khởi tạo đối tượng
    dt.nhap();                                                                          // Gọi hàm nhập
    dt.nextday();                                                                       // Tính ngày hôm sau
    cout << "Ngay tiep theo: ";                                                         //Gọi hàm xuất
    dt.xuat(); 
    return 0;
}