#include "SoPhuc.h"
#include <bits/stdc++.h>

using namespace std;

void SoPhuc::Nhap(){
    cout << "Nhap phan thuc: "; cin >> iThuc;                              
    cout<<"Nhap phan ao: ";cin >> iAo;
}

void SoPhuc::Xuat(){
    if (iThuc == 0 && iAo == 0) {
        cout << 0;
        return;
    }
    if (iThuc != 0) cout << iThuc;
    if(iAo != 0) {
        if (iAo > 0) {
            if (iThuc != 0) cout << " + "; 
        } else {
            cout << " - "; 
        }
        if(abs(iAo) != 1) cout << abs(iAo);
        cout<<"i";
    }
}

SoPhuc SoPhuc::Tong(const SoPhuc& sp) const{
        return SoPhuc(iThuc + sp.iThuc , iAo + sp.iAo);
}

SoPhuc SoPhuc::Hieu(const SoPhuc& sp) const{
    return SoPhuc(iThuc - sp.iThuc , iAo - sp.iAo );
}

SoPhuc SoPhuc::Tich(const SoPhuc& sp) const{
        return SoPhuc( iThuc * sp.iThuc - iAo * sp.iAo , iThuc * sp.iAo + iAo * sp.iThuc );
}

SoPhuc SoPhuc::Thuong(const SoPhuc& sp) const{
    double mau_so = sp.iThuc * sp.iThuc + sp.iAo * sp.iAo;
    if (mau_so == 0) {
        cout << "(Loi: Khong the chia cho 0) ";
        return SoPhuc(0, 0);
    }                        
    return SoPhuc(  (iThuc * sp.iThuc + iAo * sp.iAo)/mau_so , 
                    (sp.iThuc * iAo - iThuc * sp.iAo)/mau_so );
}