#ifndef PHANSO_H
#define PHANSO_H

class PhanSo{
private:
    int itu,imau;
    void RutGon();
public:
    PhanSo(int t = 0, int m = 1) : itu(t), imau(m) { RutGon();}
    void Nhap();
    void Xuat();
    PhanSo Tong(const PhanSo& ps) const;
    PhanSo Hieu(const PhanSo& ps) const;
    PhanSo Tich(const PhanSo& ps) const;
    PhanSo Thuong(const PhanSo& ps) const;
    int SoSanh(const PhanSo& ps) const;
};
#endif