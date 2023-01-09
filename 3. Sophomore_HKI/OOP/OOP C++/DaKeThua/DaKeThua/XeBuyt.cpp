#include "XeBuyt.h"

XeBuyt::XeBuyt() : Xe(), PhuongTien()
{
	this->tuyenxe = 0;
	this->giave = 0.0;
}

XeBuyt::XeBuyt(string loai, string hang, double giatri, int tocdo, int tuyenxe, double giave) :
	Xe(tocdo, hang, giatri), PhuongTien(loai)
{
	this->tuyenxe = tuyenxe;
	this->giave = giave;
}

void XeBuyt::show()
{
	cout <<"\nDay la xe buyt so: " << tuyenxe << "\nGia ve cho moi chuyen di: " << giave << endl; 
}
