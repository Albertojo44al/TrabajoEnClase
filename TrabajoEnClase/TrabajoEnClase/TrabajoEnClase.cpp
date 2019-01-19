
#include <iostream>
#include <string>
using namespace std;

//
int main() {
	int numero, decimal, decimal2;
	int dividendo, resto, divisor = 2;
	string binario = "";
	cout << "Ingrese el numero decimal a convertir: ";
	cin >> numero;
	decimal = numero;
	decimal2 = numero;
	dividendo = numero;

	if (decimal > 0) {
		// Sistema binario
		while (dividendo >= divisor) {
			resto = dividendo % 2;
			if (resto == 1)
				binario = "1" + binario;
			else
				binario = "0" + binario;
			dividendo = dividendo / divisor;
		}
		if (dividendo == 1)
			binario = "1" + binario;
		else
			binario = "0" + binario;
		cout << "En sistema binario " << decimal << " se escribe " << binario << endl;
		//sistema octal
		int res2, i = 1, octal = 0;
		while (numero != 0)
		{
			res2 = numero % 8;
			numero /= 8;
			octal += res2 * i;
			i *= 10;
		}
		cout << "En sistema octal " << decimal << " se escribe " << octal << endl;
		// sistema hexadecimal

		int res3;
		string s = "";

		while (decimal2 > 0) {
			res3 = decimal2 % 16;
			if (res3 > 9) {
				switch (res3) {
				case 10: s = "A" + s; break;
				case 11: s = "B" + s; break;
				case 12: s = "C" + s; break;
				case 13: s = "D" + s; break;
				case 14: s = "E" + s; break;
				case 15: s = "F" + s; break;
				}
			}
			else {
				s = char(res3 + 48) + s;
			}
			decimal2 = decimal2 / 16;

		}
		if (s == "")
			cout << "En sistema hexadecimal " << decimal << " se escribe " << "0" << endl;
		else
			cout << "En sistema hexadecimal " << decimal << " se escribe " << s << endl;

	}
	else {
		cout << "Ingrese un numero mayor a 0";
	}

}
