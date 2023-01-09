#include "CongTy.h"

void CongTy::nhap()
{
	cout << "Nhap so nhan vien: ";
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhan vien van phong (1), nhan vien san xuat (2): ";
		int k;
		cin >> k;
		NhanVien* nv;
		if (k == 1)
		{
			nv = new NhanVienVanPhong;
			nv->nhap();
			this->NVVP.push_back(nv);
		}
		else
		{
			nv = new NhanVienSanXuat;
			nv->nhap();
			this->NVSX.push_back(nv);
		}
	}
}

void CongTy::tinhLuong()
{
	for (int i = 0; i < this->NVVP.size(); i++)
		this->NVVP.at(i)->tinhLuong();
	for (int i = 0; i < this->NVSX.size(); i++)
		this->NVSX.at(i)->tinhLuong();
}

void CongTy::xuat()
{	
	cout << "\n\n\t\t\tDANH SACH NHAN VIEN CONG TY\n\n";
	cout <<"*Nhan vien van phong:\n\n";
	cout << setw(10) << left << "STT";
	cout << setw(30) << left << "Ho va ten";
	cout << setw(15) << left << "Luong co ban";
	cout << setw(20) << left << "So ngay lam viec";
	cout << setw(25) << left << "Luong chinh thuc(trieu)\n";
	cout << setfill('-');		
	cout << setw(100) << "-" << endl;
	cout << setfill(' ');

	for (int i = 0; i < this->NVVP.size(); i++)
	{
		cout << setw(10) << left << i+1;
		this->NVVP.at(i)->xuat();
		cout << "\n";
	}

	cout << "\n\n*Nhan vien san xuat:\n\n";
	cout << setw(10) << left << "STT";
	cout << setw(30) << left << "Ho va ten";
	cout << setw(15) << left << "So san pham";
	cout << setw(20) << left << "Tien/San pham";
	cout << setw(25) << left << "Luong chinh thuc(trieu)\n";
	cout << setfill('-');		
	cout << setw(100) << "-" << endl;
	cout << setfill(' ');

	for (int i = 0; i < this->NVSX.size(); i++)
	{
		cout << setw(10) << left << i + 1;
		this->NVSX.at(i)->xuat();
		cout << "\n";
	}
}
