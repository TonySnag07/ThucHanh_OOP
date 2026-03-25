#include <bits/stdc++.h>

using namespace std;

class PhanSo {
private:
    int tu,mau;                                           //Khai báo tử và mẫu

public:
    PhanSo(int t = 0, int m = 1) : tu(t), mau(m) {;}      //constructor mặc định khi không nhập tham số
    
    void nhap() {                                         //Hàm nhập phân số
        cout << "Nhap tu so: "; cin >> tu;                //Nhập tử
        do{
            cout<<"Nhap mau so khac 0: ";cin >> mau;
            if(mau == 0)
            cout << "Phan so khong ton tai." << endl;     
        }
        while(mau == 0);                                  //Ham do-while để nhập lại mẫu khi mẫu = 0
    }

    void xuat(){                                          //Hàm xuất phân số
        cout << tu << "/" << mau;                         //Xuất phân số
    }

    double stp(){                                         //Hàm tìm số thập phân để so sánh 2 phân số
        return (float) tu/mau;                            //Trả về kết quả số thập phân 
    }

};
int main(){
    PhanSo ps1,ps2;                                       //Khởi tạo 2 đối tượng phân số
    cout << "Nhap phan so 1:\n"; ps1.nhap();              //Nhập phân số 1
    cout << "Nhap phan so 2:\n"; ps2.nhap();              //Nhập phân số 2
    cout << "Phan so lon nhat la: ";                      //In ra phân số lớn nhất
    if(ps1.stp() > ps2.stp()) ps1.xuat();                 //Nếu phân số 1 > phân số 2 thì xuất ra phân số 1  
    else if(ps1.stp() < ps2.stp()) ps2.xuat();            //Nếu phân số 1 < phân số 2 thì xuất ra phân số 2  
    else cout << "Hai phan so bang nhau";                 //Nếu hai phân số bằng nhau thì xuất ra 2 phân số bằng nhau
    return 0;
}