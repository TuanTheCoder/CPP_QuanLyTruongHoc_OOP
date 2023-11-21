//0306221391 PHAM ANH TUAN CDTH22D

#pragma once
#include <iostream>
#include <string.h>

#define GIAO_VIEN 1
#define SINH_VIEN 2

using namespace std;


class Nguoi
{
protected:
	string _HoTen;
	bool _GioiTinh;
	int _NamSinh;
	string _NoiSinh;
	string _DiaChi;
public:
	Nguoi();
	Nguoi(string i_HoTen,bool i_GioiTinh,int i_NamSinh,string i_NoiSinh, string i_DiaChi);
	virtual ~Nguoi();
	virtual void Nhap();
	virtual void Xuat();
	int TuoiHienTai();
	virtual int LoaiThanhVien() = 0;
};

