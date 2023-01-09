#include "NhanVienVanPhong.h"

NhanVienVanPhong::NhanVienVanPhong()
{
	this->luongCoBan = 0.0;
}

void NhanVienVanPhong::nhap()
{
	NhanVien::nhap();
	cout << "Luong co ban (trieu): ";
	cin >> this->luongCoBan;
	cout << "So ngay lam viec: ";
	cin >> this->soNgayLamViec;
}

void NhanVienVanPhong::xuat()
{
	NhanVien::xuat();

	cout << setw(15) << left << this->luongCoBan;
	cout << setw(20) << left << this->soNgayLamViec;
	cout << setw(25) << left << this->luong;
}

void NhanVienVanPhong::tinhLuong()
{
	this->luong = this->soNgayLamViec * this->luongCoBan;
}
