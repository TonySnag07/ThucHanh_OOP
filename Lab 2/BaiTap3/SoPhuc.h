#ifndef SOPHUC_H
#define SOPHUC_H

class SoPhuc{
private:
    double iThuc,iAo;
public:
    SoPhuc(double r = 0, double v = 0) : iThuc(r), iAo(v) {;} 
    void Nhap();
    void Xuat();
    SoPhuc Tong(const SoPhuc& sp) const;
    SoPhuc Hieu(const SoPhuc& sp) const;
    SoPhuc Tich(const SoPhuc& sp) const;
    SoPhuc Thuong(const SoPhuc& sp) const;
};
#endif