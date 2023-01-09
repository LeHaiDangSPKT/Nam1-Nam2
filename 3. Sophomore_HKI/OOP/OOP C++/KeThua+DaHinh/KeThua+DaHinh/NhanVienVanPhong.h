#pragma once
#include "NhanVien.h"
class NhanVienVanPhong : public NhanVien
{
	private:
		float luongCoBan;
		int soNgayLamViec;

	public:
		NhanVienVanPhong();
		void nhap();
		void xuat();
		void tinhLuong();
};

