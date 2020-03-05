#include<stdio.h>	
#include <iostream>
#include <time.h>

int main() {

	srand(time(NULL));

	int secret = rand() % 9+1 ,num=0;
	std::cout << "El Numero Secreto es :" << secret << "\n";

	while (num!=secret) {

		std::cout << "Inserte numero de 1 al 10 : \n";
		std::cin >> num;

		if (num<secret) {
			std::cout << "El Numero Secreto Es Mayor \n";
		}
		if (num > secret) {
			std::cout << "El Numero Secreto Es Menor \n";
		}
	
	}

	std::cout << "Numero Correcto!!!\n";

	return 0;
}