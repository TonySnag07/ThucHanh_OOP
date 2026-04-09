#include <bits/stdc++.h>
#include "GioPhutGiay.h"
using namespace std;

bool GioPhutGiay::HopLe()
{
    if(iGio < 0 || iGio > 23 || iPhut < 0 || iPhut > 59 || iGiay < 0 || iGiay > 59) return false;
    return true;
}

void GioPhutGiay::Nhap()
{
    do{
        cout << "Nhap gio, phut, giay: ";
        cin >> iGio >> iPhut >> iGiay;
        if(!HopLe()) cout << "Thoi gian khong dung.\n";
    }while(!HopLe());
}

void GioPhutGiay::Xuat()
{
    cout << iGio << ":" << iPhut << ":" << iGiay;
}

void GioPhutGiay::TinhCongThemMotGiay()
{
    iGiay++;
    if(iGiay > 59){
        iGiay = 0;
        iPhut++;
        if(iPhut > 59){
            iPhut = 0;
            iGio++;
            if(iGio > 23) iGio = 0;
        }
    }
}
