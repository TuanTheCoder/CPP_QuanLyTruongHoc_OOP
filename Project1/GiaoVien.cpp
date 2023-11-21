//0306221391 PHAM ANH TUAN CDTH22D

#include "GiaoVien.h"
#include <string>
#include <ctime>
#include <iostream>
using namespace std;
GiaoVien::GiaoVien():Nguoi() {
	this->_NamBDGiangDay = 0;
	this->_ChuyenMon = "";
}
GiaoVien::GiaoVien(string i_HoTen, bool i_GioiTinh, int i_NamSinh, string i_NoiSinh, string i_DiaChi, int i_NamBDGiangDay, string i_ChuyenMon) :Nguoi(i_HoTen, i_GioiTinh, i_NamSinh, i_NoiSinh, i_DiaChi) {
	this->_NamBDGiangDay = i_NamBDGiangDay;
	this->_ChuyenMon = i_ChuyenMon;
}
GiaoVien::~GiaoVien() {
	this->_NamBDGiangDay = 0;
	this->_ChuyenMon = "";
}
string GiaoVien::GetChuyenMon() {
	return this->_ChuyenMon;
}
void GiaoVien::Nhap() {
	Nguoi::Nhap();
	cout << "Hay nhap Nam Bat Dau Giang Day: ";
	cin >> this->_NamBDGiangDay;
	cin.ignore();
	cout << "Hay nhap Chuyen mon: ";
	getline(cin, this->_ChuyenMon);
}
void GiaoVien::Xuat() {
	Nguoi::Xuat();
	cout << "Nam Bat Dau Giang Day la: " << this->_NamBDGiangDay << endl;
	cout << "Chuyen Mon la: " << this->_ChuyenMon << endl;

}
int GiaoVien::SoNamGiangDay() {
	int nam;
	time_t t = time(0);
	tm now;
	localtime_s(&now, &t);
	nam = now.tm_year + 1900;
	return nam-this->_NamBDGiangDay;
}
int GiaoVien::LoaiThanhVien() {
	return GIAO_VIEN;
}