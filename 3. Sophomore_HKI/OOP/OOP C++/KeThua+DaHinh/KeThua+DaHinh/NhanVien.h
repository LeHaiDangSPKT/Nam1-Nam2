#pragma once
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class NhanVien
{
	protected:
		string hoTen;
		float luong;

	public:
		NhanVien();
		virtual void nhap();
		virtual void xuat();
		virtual void tinhLuong() = 0;
};

