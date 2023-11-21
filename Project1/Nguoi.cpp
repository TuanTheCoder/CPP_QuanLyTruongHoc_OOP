//0306221391 PHAM ANH TUAN CDTH22D

#include "Nguoi.h"
#include <string>
#include <iostream>
#include <ctime>
using namespace std;
Nguoi::Nguoi() {
	this->_HoTen = 'ABC';
	this->_NamSinh = 0;
	this->_GioiTinh = -1;
	this->_NoiSinh = 'EFG';
	this->_DiaChi = 'XYZ';
}
Nguoi::Nguoi(string i_HoTen, bool i_GioiTinh, int i_NamSinh, string i_NoiSinh, string i_DiaChi) {
	this->_HoTen = i_HoTen;
	this->_NamSinh = i_NamSinh;
	this->_GioiTinh = i_GioiTinh;
	this->_NoiSinh = i_NoiSinh;
	this->_DiaChi = i_DiaChi;
}
Nguoi::~Nguoi() {
	this->_HoTen = 'ABC';
	this->_NamSinh = 0;
	this->_GioiTinh = -1;
	this->_NoiSinh = 'EFG';
	this->_DiaChi = 'XYZ';
}
void Nguoi::Nhap() {
	cout << "Hay nhap Ho Ten: ";
	getline(cin, this->_HoTen);
	cout << "Hay nhap Gioi Tinh (1 la Nam, 0 la Nu): ";
	cin >> this->_GioiTinh;
	cout << "Hay nhap Nam Sinh: ";
	cin >> this->_NamSinh;
	cin.ignore();
	cout << "Hay nhap Noi Sinh: ";
	getline(cin, this->_NoiSinh);
	cout << "Hay nhap Dia Chi: ";
	getline(cin, this->_DiaChi);
}
void Nguoi::Xuat() {
	cout << "Ho Ten la: " << this->_HoTen << endl;
	cout << "Gioi Tinh la: " << (this->_GioiTinh? "Nam" :"Nu") << endl;
	cout << "Nam Sinh: "<<this->_NamSinh << endl;
	cout << "Tuoi hien tai la: " << TuoiHienTai() << endl;
	cout << "Noi Sinh: "<<this->_NoiSinh << endl;
	cout << "Dia Chi: " << this->_DiaChi << endl;
}
int Nguoi::TuoiHienTai() {
	int nam;
	time_t t = time(0);
	tm now;
	localtime_s(&now, &t);
	nam = now.tm_year + 1900;
	return nam-this->_NamSinh;
}