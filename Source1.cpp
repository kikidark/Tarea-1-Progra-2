#include<stdio.h>	
#include <iostream>

int main() {

	int num = 0;

	while (num<5000) {

		std::cout << "Inserte numero de 1 al 5000 : \n";
		std::cin >> num;

		if (num <= 5000) {


			for (int i = num; i > 0; i--) {

				if (num % i == 0) {

					std::cout << i << "\n";
				}


			}

		}
		else {

			std::cout << "Numero Mayor a 5000 \n";
		}

	}

	return 0;
}