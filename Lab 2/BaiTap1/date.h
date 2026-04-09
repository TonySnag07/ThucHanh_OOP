#ifndef DATE_H
#define DATE_H

class NgayThang {
private:
    int iNgay, iThang, iNam;
    int SoNgay() const;
    bool laNamNhuan() const;
    bool HopLe();
public:
    NgayThang(int d = 1, int m = 1, int y = 1970) : iNgay(d), iThang(m), iNam(y) {;}
    void Nhap();
    void Xuat();
    void NgayThangTiepTheo();
};
#endif