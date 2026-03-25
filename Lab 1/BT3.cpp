#include <bits/stdc++.h>

using namespace std;

class PhanSo {
private:
    int tu, mau;                                                        //Khai báo tử , mẫu

    void rutGon() {                                                     //Hàm rút gọn phân số
        if (mau == 0) return;
        int ucln = __gcd(tu, mau);                                      //Ước chung lớn nhất của tử và mẫu
        tu /= ucln;                                                     //chia tử với ƯCLN để rút gọn phân số
        mau /= ucln;                                                    //chia mẫu với ƯCLN để rút gọn phân số
        if (mau < 0) {
            tu = -tu;
            mau = -mau;
        }
    }

public:
    PhanSo(int t = 0, int m = 1) : tu(t), mau(m) { rutGon(); }          //Constructor mặc định khi không truyền tham số

    void nhap() {                                                       //Hàm nhập phân số
        cout << "Nhap tu so: "; cin >> tu;                              //Nhập tử
        do{
            cout<<"Nhap mau so khac 0: ";cin >> mau;    
            if(mau == 0)
            cout << "Phan so khong ton tai." << endl;
        } while(mau == 0);                                              //Ham do-while để nhập lại mẫu khi mẫu = 0
        rutGon();
    }

    void xuat() const {                                                 //Hàm xuất phân số
        if (tu == 0) cout << 0;                                         //Nếu tử = 0 thì in ra 0
        else if (mau == 1) cout << tu;                                  //Nếu mẫu=1 thì chỉ in tử
        else cout << tu << "/" << mau;                                  //In ra phân số
    }

    PhanSo operator+(const PhanSo& ps) const {                          //Sử dụng nạp chồng toán tử để tính tổng
        return PhanSo(tu * ps.mau + ps.tu * mau, mau * ps.mau);
    }
    PhanSo operator-(const PhanSo& ps) const {                          //Sử dụng nạp chồng toán tử để tính hiệu
        return PhanSo(tu * ps.mau - ps.tu * mau, mau * ps.mau);
    }
    PhanSo operator*(const PhanSo& ps) const {                          //Sử dụng nạp chồng toán tử để tính tích
        return PhanSo(tu * ps.tu, mau * ps.mau);
    }
    PhanSo operator/(const PhanSo& ps) const {                          //Sử dụng nạp chồng toán tử để tính thương
        return PhanSo(tu * ps.mau, mau * ps.tu);
    }
};

void Tinhtoan() {                                                       //Hàm nhập và in kết quả
    PhanSo ps1, ps2;                                                    //Khởi tạo 2 đối tượng phân số
    cout << "Nhap phan so 1:\n"; ps1.nhap();                            //Nhập phân số 1
    cout << "Nhap phan so 2:\n"; ps2.nhap();                            //Nhập phân số 2

    cout << "Tong: "; (ps1 + ps2).xuat(); cout << endl;                 //In ra tổng 2 phân số
    cout << "Hieu: "; (ps1 - ps2).xuat(); cout << endl;                 //In ra hiệu 2 phân số
    cout << "Tich: "; (ps1 * ps2).xuat(); cout << endl;                 //In ra tích 2 phân số
    cout << "Thuong: "; (ps1 / ps2).xuat(); cout << endl;               //In ra thương 2 phân số
}

int main(){
    Tinhtoan();                                                         //Gọi hàm Tinhtoan
    return 0;
}