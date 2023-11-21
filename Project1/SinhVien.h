//0306221391 PHAM ANH TUAN CDTH22D

#pragma once
#include "Nguoi.h"
#include <string.h>

#define XuatSac 1
#define Gioi 2
#define Kha 3
#define TrungBinh 4
#define Yeu 5
#define Kem 6
using namespace std;
class SinhVien :
    public Nguoi
{
private:
    double _diemVan;
    double _diemToan;
    double _diemNgoaiNgu;
public: 
    SinhVien();
    SinhVien(string i_HoTen, bool i_GioiTinh, int i_NamSinh, string i_NoiSinh, string i_DiaChi, double i_diemVan, double i_diemToan, double i_diemNgoaiNgu);
    ~SinhVien();

    void Nhap();
    void Xuat();

    double TinhDiemTrungBinh();
    int XepLoai();

    int LoaiThanhVien();
};

