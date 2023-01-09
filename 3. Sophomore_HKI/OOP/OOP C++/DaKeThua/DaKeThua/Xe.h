#pragma once
#include <iostream>
#include <string>
using namespace std;

class Xe
{
	private:
		int  tocdo;
		string  hang;
		double giatri;
	public:
		Xe();
		Xe(int tocdo, string hang, double giatri);
		void show();
};

