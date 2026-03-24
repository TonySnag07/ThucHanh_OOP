#include <bits/stdc++.h>

using namespace std;

class PhanSo {
private:
    int tu, mau;

    void rutGon() {
        if (mau == 0) return;
        int ucln = __gcd(tu, mau);
        tu /= ucln;
        mau /= ucln;
        if (mau < 0) {
            tu = -tu;
            mau = -mau;
        }
    }

public:
    PhanSo(int t = 0, int m = 1) : tu(t), mau(m) { rutGon(); }

    void nhap() {
        cout << "Nhap tu so: "; cin >> tu;
        do{
            cout<<"Nhap mau so khac 0: ";cin >> mau;
            if(mau == 0)
            cout << "Phan so khong ton tai." << endl;
        }
        while(mau == 0);
        rutGon();
    }

    void xuat() const {
        if (tu == 0) cout << 0;
        else if (mau == 1) cout << tu;
        else cout << tu << "/" << mau;
    }

    PhanSo operator+(const PhanSo& ps) const {
        return PhanSo(tu * ps.mau + ps.tu * mau, mau * ps.mau);
    }
    PhanSo operator-(const PhanSo& ps) const {
        return PhanSo(tu * ps.mau - ps.tu * mau, mau * ps.mau);
    }
    PhanSo operator*(const PhanSo& ps) const {
        return PhanSo(tu * ps.tu, mau * ps.mau);
    }
    PhanSo operator/(const PhanSo& ps) const {
        return PhanSo(tu * ps.mau, mau * ps.tu);
    }
};

void Tinhtoan() {
    PhanSo ps1, ps2;
    cout << "Nhap phan so 1:\n"; ps1.nhap();
    cout << "Nhap phan so 2:\n"; ps2.nhap();

    cout << "Tong: "; (ps1 + ps2).xuat(); cout << endl;
    cout << "Hieu: "; (ps1 - ps2).xuat(); cout << endl;
    cout << "Tich: "; (ps1 * ps2).xuat(); cout << endl;
    cout << "Thuong: "; (ps1 / ps2).xuat(); cout << endl;
}

int main(){
    Tinhtoan();
    return 0;
}