#pragma once
#include "Xe.h"
#include "PhuongTien.h"

class XeBuyt : public Xe, public PhuongTien
{
	private:
		int tuyenxe; 
		double giave;
	public:
		XeBuyt();
		XeBuyt(string loai, string hang, double giatri, int tocdo, int tuyenxe, double giave);
		void show();
};

