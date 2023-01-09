#pragma once
#include "NhanVien.h"
class NhanVienSanXuat : public NhanVien
{
	private:
		int soSanPham;
		float tienCong1SP;

	public:
		NhanVienSanXuat(); 
		void nhap();
		void xuat();
		void tinhLuong();
};

