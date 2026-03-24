#include <bits/stdc++.h>

using namespace std;

class Hocsinh
{
private:
    string Hoten;                                                                                   //Khai báo Họ tên
    double toan,van;                                                                                //Khai báo điểm toán và văn
public:

    Hocsinh (string n="Ngo Tuan Sang",double t=10,double v=10) : Hoten(n),toan(t),van(v){;}         //Constructor mặc định khi truyền tham số

    double diemTB() const {                                                                         //Hàm tính điểm trung bình
        return (toan + van)/2;                                                                      //Trả về điểm trung bình của 2 môn toán,văn
    }

    void Thongtin(){                                                                                //Hàm xuất thông tin
        cout<<"\nHo va ten: " << Hoten  <<"\n"                                                  
            << "Diem trung binh: " << fixed << setprecision(2) << diemTB() << endl ;                //In họ tên và điểm trung bình của học sinh
    }

    void input(){                                                                                   //Hàm nhập thông tin học sinh
        cout<<"Nhap ten: ";                                                         
        getline(cin,Hoten);                                                                         //Nhập tên học sinh
        cout<<"Nhap diem: ";
        cin>> toan >> van;                                                                          //Nhập điểm toán , văn
    }
    
};

void hs(){
    Hocsinh hs;                                                                                     //Khởi tạo đối tượng
    hs.input();                                                                                     //Gọi hàm input
    hs.Thongtin();                                                                                  //Gọi hàm Thongtin
}
int main(){
    hs();
    return 0;
}