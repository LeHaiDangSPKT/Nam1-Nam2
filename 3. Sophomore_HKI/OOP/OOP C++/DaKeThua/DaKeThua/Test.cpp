#include <iostream>
#include <string>
#include "XeBuyt.h"


using namespace std;

int main() {

	XeBuyt myBus("Xe cong cong", "SaigonBus", 1 , 60, 136, 3000);

	myBus.PhuongTien::show(); 	
	myBus.Xe::show(); 	 	 	
	myBus.show(); 	 	 	 	

	cin.get();
	return 0;
}