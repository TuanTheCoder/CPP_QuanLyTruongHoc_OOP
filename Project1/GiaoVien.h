//0306221391 PHAM ANH TUAN CDTH22D

#pragma once
#include "Nguoi.h"
#include <string.h>
using namespace std;
class GiaoVien :
    public Nguoi
{
private:
    int _NamBDGiangDay;
    string _ChuyenMon;
public:
    GiaoVien();
    GiaoVien(string i_HoTen, bool i_GioiTinh, int i_NamSinh, string i_NoiSinh, string i_DiaChi,int i_NamBDGiangDay,string i_ChuyenMon);
    ~GiaoVien();
    void Nhap();
    void Xuat();
    string GetChuyenMon();
    int SoNamGiangDay();
    int LoaiThanhVien();
};

