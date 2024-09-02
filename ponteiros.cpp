#include <iostream>

using namespace std;

int main (int argc, char *argv[])
{
	
	int* parray = new int[10];

	
	cout<< "Digite um numero: ";
	cin >> *(parray);
	
	
	delete[] parray;
	parray = NULL;
	
	return 0;
}