#include "PhuongTien.h"

PhuongTien::PhuongTien()
{
	this->loai = "";
}

PhuongTien::PhuongTien(string loai)
{
	this->loai = loai;
}

void PhuongTien::show()
{
	cout << "Loai phuong tien di lai: " << loai << "\n";
}
