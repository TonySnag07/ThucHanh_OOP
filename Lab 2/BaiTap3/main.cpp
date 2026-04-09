#include <bits/stdc++.h>
#include "SoPhuc.h"

using namespace std;

int main(){
    SoPhuc sp1,sp2;
    cout << "Nhap so phuc 1:\n"; sp1.Nhap();                            
    cout << "Nhap so phuc 2:\n"; sp2.Nhap();                            
    cout << "Tong: "; sp1.Tong(sp2).Xuat(); cout << endl;
    cout << "Hieu: "; sp1.Hieu(sp2).Xuat(); cout << endl;
    cout << "Tich: "; sp1.Tich(sp2).Xuat(); cout << endl;
    cout << "Thuong: "; sp1.Thuong(sp2).Xuat(); cout << endl;              
    return 0;
}