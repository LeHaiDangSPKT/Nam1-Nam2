#pragma once
#include <iostream>
#include <string>
using namespace std;
#include <iomanip>
#include <vector>
#include "NhanVien.h"
#include "NhanVienVanPhong.h"
#include "NhanVienSanXuat.h"
class CongTy
{
	private:
		vector<NhanVien*> NVVP;
		vector<NhanVien*> NVSX;
	public:
		void nhap();
		void tinhLuong();
		void xuat();
};

