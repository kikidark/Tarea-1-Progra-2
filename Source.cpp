#include<stdio.h>	
#include <iostream>

int main() {

	int secret = rand() % 9+1,num=0;
	std::cout << "El Numero Secreto es :" << secret << "\n";

	while (num!=secret) {

		std::cout << "Inserte numero de 1 al 10 : \n";
		std::cin >> num;
	
	}

	std::cout << "Numero Correcto!!!\n";

	


	return 0;
}