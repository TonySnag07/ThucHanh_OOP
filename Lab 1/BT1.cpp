#include <bits/stdc++.h>

using namespace std;

class PhanSo {
private:
    int tu, mau;

    void rutGon() {                                                 //Hàm rút gọn phân số
        if (mau == 0) return;
        int ucln = __gcd(tu, mau);
        tu /= ucln;                                                 //chia tử với ƯCLN để rút gọn phân số
        mau /= ucln;                                                //chia mẫu với ƯCLN để rút gọn phân số
    }
    
    public:
    PhanSo(int t = 0, int m = 1) : tu(t), mau(m) { rutGon(); }      //constructor mặc định khi không nhập tham số
    
    void nhap() {                                                   //Hàm nhập phân số
        cout << "Nhap tu so: "; cin >> tu;                          //Nhập tử
        do{                                                         //Ham do-while để nhập lại mẫu khi mẫu = 0
            cout<<"Nhap mau so khac 0: ";cin >> mau;
            if(mau == 0)
            cout << "Phan so khong ton tai." << endl;
        }
        while(mau == 0);
        rutGon();
    }
    
    void xuat() {
        if (tu == 0) cout << 0;                                     //Nếu tử = 0  thì xuất ra 0;
        else if (mau < 0) {                                         //Kiểm tra nếu mau < 0
            tu = -tu;
            mau = -mau;                                             //đổi dấu tử và triệt tiêu dấu trừ của mẫu
            if (mau == -1) cout << tu;                               //nếu mẫu = -1 thì chỉ xuất ra tử
            else cout<< tu << "/" << mau;                           //xuất tử và mẫu
        }
        else if (mau == 1) cout << tu;                              //nếu mẫu = 1 thì chỉ xuất ra tử
        else cout << tu << "/" << mau;                              //xuất phân số có tử và mẫu
    }
};

int main(){
    PhanSo ps1;                                                     //Khởi tạo đối tượng
    ps1.nhap();                                                     //gọi hàm nhập
    ps1.xuat();                                                     //gọi hàm xuất
    return 0;
}