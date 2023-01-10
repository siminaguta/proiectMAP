#include <iostream>
#include <string>
using namespace std;

string numar_cifre_romane(int n) 
{
	int valori[] = { 1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1 };	

	//toate simbolurile posibile pentru cifrele romane
	string simboluri[] = { "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I" }; 
	string rezultat = "";

	int i = 0;
	while (n > 0) 
	{
		for (int j = n / valori[i]; j > 0; j--) {
			rezultat += simboluri[i];
			n -= valori[i];
		}
		i++;
	}

	return rezultat;
}

int main() 
{
	int numar;

	cout << "Introduceti un numar: ";
	cin >> numar;
	cout << "Numar tradus in cifre romane este: " << numar_cifre_romane(numar); 

	return 0;
}