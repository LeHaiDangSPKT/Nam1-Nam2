#include "Xe.h"

Xe::Xe()
{
	this->tocdo = 0;
	this->hang = "";
	this->giatri = 0.0;
}

Xe::Xe(int tocdo, string hang, double giatri)
{
	this->tocdo = tocdo;
	this->hang = hang;
	this->giatri = giatri;
}

void Xe::show()
{
	cout << "Hang xe: " << hang << "\nGia tri xe: " << giatri <<" ty dong." << "\nToc do trung binh: " << tocdo << "km/h";
}
