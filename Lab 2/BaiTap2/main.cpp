#include <bits/stdc++.h>
#include "phanso.h"

using namespace std;

int main(){
    PhanSo ps1,ps2;
    cout << "Nhap phan so 1:\n"; ps1.Nhap();
    cout << "Nhap phan so 2:\n"; ps2.Nhap();

    cout << "Tong: "; ps1.Tong(ps2).Xuat(); cout << endl;
    cout << "Hieu: "; ps1.Hieu(ps2).Xuat(); cout << endl;
    cout << "Tich: "; ps1.Tich(ps2).Xuat(); cout << endl;
    cout << "Thuong: "; ps1.Thuong(ps2).Xuat(); cout << endl;
    
    if (ps1.SoSanh(ps2) != 0) {
        if (ps1.SoSanh(ps2) ==1 ) cout << "PS1 < PS2";
        else cout << "PS1 > PS2";
    }
    else cout <<"PS1 = PS2";
    return 0;
}