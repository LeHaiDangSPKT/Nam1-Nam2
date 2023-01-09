#include "NhanVien.h"

NhanVien::NhanVien() 
{
	this->hoTen = "";
	this->luong = 0.0;
}

void NhanVien::nhap()
{
	cout << "Ho ten: ";
	cin.ignore();
	getline(cin, this->hoTen);
}

void NhanVien::xuat()
{

	cout << setw(30) << left << this->hoTen;
}


