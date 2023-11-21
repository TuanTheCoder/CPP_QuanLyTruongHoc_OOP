//0306221391 PHAM ANH TUAN CDTH22D
#include <iostream>
#include "Nguoi.h"
#include "GiaoVien.h"
#include "SinhVien.h"
using namespace std;

int main() {
	Nguoi* LTH = new GiaoVien;
	cout << "Hay nhap thong tin cua"<< (LTH->LoaiThanhVien() ==GIAO_VIEN ?" giao vien!" :" sinh vien!") << endl;
	LTH->Nhap();
	LTH->Xuat();
	LTH = new SinhVien;
	cout << "Hay nhap thong tin cua" << (LTH->LoaiThanhVien() == GIAO_VIEN ? " giao vien!" : " sinh vien!") << endl;
	LTH->Nhap();
	LTH->Xuat();

	
	delete LTH;
	return 0;
}