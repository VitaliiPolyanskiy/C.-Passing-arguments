#include <iostream>

using namespace std;

void ShowParameters(int nNumber1, float fltNumber2)
{
	// Аргументы nNumber1 и fltNumber2, которые указываются при определении функции, называются формальными.
	// Они создаются в момент вызова функции в оперативной памяти.
	// При выходе из функции такие параметры будут уничтожены.
	// Поэтому, если в другой функции программы будут параметры с тем же именем, то конфликта не будет.

	cout << "First parameter is integer and equals to " << nNumber1 << endl;
	cout << "First parameter is single-precision floating-point number and equals to " << fltNumber2
		<< endl;
}

void ChangeParameters(int nNumber)
{
	nNumber = 5;

	cout << "Parameter changed its value to " << nNumber << endl;

	// При выходе из функции временная копия nNumber уничтожается.
}

int main()
{
	ShowParameters(3, 4.57f);

	int nValue = 7;

	cout << endl << "nValue before the function: " << nValue << endl;

	// В функцию передается не nValue, а точная копия переменной.

	ChangeParameters(nValue);

	// Все изменения происходят с копией переменной nValue, при этом сама переменная nValue остается неизменной.
	// При выходе из функции временная копия переменной уничтожается.

	cout << "nValue after the function: " << nValue << endl;

	return 0;
}