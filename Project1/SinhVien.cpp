//0306221391 PHAM ANH TUAN CDTH22D

#include "SinhVien.h"
#include <string>
#include <ctime>
#include <iostream>

using namespace std;
SinhVien::SinhVien():Nguoi(){
	this->_diemVan = -1;
	this->_diemToan = -1;
	this->_diemNgoaiNgu = -1;

}
SinhVien::~SinhVien() {
	this->_diemVan = -1;
	this->_diemToan = -1;
	this->_diemNgoaiNgu = -1;
}
SinhVien::SinhVien(string i_HoTen, bool i_GioiTinh, int i_NamSinh, string i_NoiSinh, string i_DiaChi, double i_diemVan, double i_diemToan, double i_diemNgoaiNgu):Nguoi(i_HoTen, i_GioiTinh, i_NamSinh, i_NoiSinh, i_DiaChi) {
	this->_diemVan = i_diemVan;
	this->_diemToan = i_diemToan;
	this->_diemNgoaiNgu = i_diemNgoaiNgu;
}
void SinhVien::Nhap() {
	Nguoi::Nhap();
	cout << "Hay nhap diem Van:";
	cin >> this->_diemVan;
	cout << "Hay nhap diem Toan:";
	cin >> this->_diemToan;
	cout << "Hay nhap diem Ngoai Ngu:";
	cin >> this->_diemNgoaiNgu;
}
void SinhVien::Xuat() {
	Nguoi::Xuat();
	cout << "Diem Van la: " << this->_diemVan << endl;
	cout << "Diem Toan la: " << this->_diemToan << endl;
	cout << "Diem Ngoai Ngu la: " << this->_diemNgoaiNgu << endl;
	cout << "Diem TB la: " << TinhDiemTrungBinh() << endl;
	cout << "Xep loai la: ";
	int XL = XepLoai();
	switch (XL)
	{
	case 1:
		cout << "Xuat Sac!" << endl;
		break;
	case 2:
		cout << "Gioi!" << endl;
		break;
	case 3:
		cout << "Kha!" << endl;
		break;
	case 4:
		cout << "Trung Binh!" << endl;
		break;
	case 5:
		cout << "Yeu!" << endl;
		break;
	default:
		cout << "Kem!"<<endl;
		break;
	}
	
}

double SinhVien::TinhDiemTrungBinh() {
	double DTB;
	DTB = (this->_diemNgoaiNgu + this->_diemToan + this->_diemVan) / 3;
	return DTB;
}
int SinhVien::XepLoai() {
	double DiemTB = TinhDiemTrungBinh();
	if (DiemTB >= 9 && this->_diemVan >= 8 && this->_diemToan >= 8 && this->_diemNgoaiNgu >= 8)
	{
		return XuatSac;
	}
	else if (DiemTB >= 8 && this->_diemVan >= 6.5 && this->_diemToan >= 6.5 && this->_diemNgoaiNgu >= 6.5)
	{
		return Gioi;
	}
	else if (DiemTB >= 6.5 && this->_diemVan >= 5 && this->_diemToan >= 5 && this->_diemNgoaiNgu >= 5){

		return Kha;
	}
	else if (DiemTB >= 5 && this->_diemVan >= 3 && this->_diemToan >= 3 && this->_diemNgoaiNgu >= 3) {
		return TrungBinh;
	}
	else if (DiemTB >= 3 && this->_diemVan >= 1 && this->_diemToan >= 1 && this->_diemNgoaiNgu >= 1)
	{
		return Yeu;
	}
	else
	{
		return Kem;
	}
}

int SinhVien::LoaiThanhVien() {
	return SINH_VIEN;
}