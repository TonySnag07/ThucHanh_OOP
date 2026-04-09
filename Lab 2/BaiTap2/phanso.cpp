#include <bits/stdc++.h>
#include "phanso.h"

using namespace std;

void PhanSo::RutGon(){
    if (imau == 0) return;
    int ucln= __gcd(itu,imau);
    imau/= ucln;
    itu /= ucln;
    if (imau < 0 ){
        itu = -itu;
        imau = - imau;
    }
}
void PhanSo::Nhap(){
    cout << "Nhap tu so: "; cin >> itu;
    do{
        cout<<"Nhap mau so khac 0: ";cin >> imau;
        if(imau == 0)
        cout << "Phan so khong ton tai." << endl;
    } while(imau == 0);
    RutGon();
}
void PhanSo::Xuat(){
    if (itu == 0) cout << 0;
    else if (imau == 1) cout << itu;
    else cout << itu << "/" << imau; 
}
PhanSo PhanSo::Tong(const PhanSo& ps) const {
    return PhanSo(itu * ps.imau + ps.itu * imau, imau * ps.imau);
}
PhanSo PhanSo::Hieu(const PhanSo& ps) const {
    return PhanSo(itu * ps.imau - ps.itu * imau, imau * ps.imau);
}
PhanSo PhanSo::Tich(const PhanSo& ps) const {
    return PhanSo(itu * ps.itu, imau * ps.imau);
}
PhanSo PhanSo::Thuong(const PhanSo& ps) const {
    return PhanSo(itu * ps.imau, imau * ps.itu);
}
int PhanSo::SoSanh(const PhanSo& ps) const{
    int VeTrai = itu * ps.imau;
    int VePhai = imau * ps.itu;
    if (VeTrai < VePhai) return 1;
    else if (VeTrai > VePhai) return -1;
    else return 0;
}
