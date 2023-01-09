#include "NhanVienSanXuat.h"

NhanVienSanXuat::NhanVienSanXuat()
{
	this->soSanPham = 0;
	this->tienCong1SP = 0;
}

void NhanVienSanXuat::nhap()
{
	NhanVien::nhap();
	cout << "So san pham: ";
	cin >> this->soSanPham;
	cout << "Tien cong 01 san pham (nghin): ";
	cin >> this->tienCong1SP;
}

void NhanVienSanXuat::xuat()
{
	NhanVien::xuat();
	cout << setw(15) << left << this->soSanPham;
	cout << setw(20) << left << this->tienCong1SP;
	cout << setw(25) << left << this->luong;
}

void NhanVienSanXuat::tinhLuong()
{
	this->luong = (this->soSanPham * this->tienCong1SP)/1000;
}
