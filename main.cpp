#include <iostream>
#include "my_math.h"
using namespace std;

int main ( int argc, char *argv[])
{
	int n = 5;
	
	cout << "fatorial de "<< n << " : " <<fatorial(5)<< endl;
	cout << "quadrado com lado "<< n << " : " <<area_quadrada(5)<<endl;
	cout << "area retangulo " <<area_retangulo(5, 5)<<endl;
	return 0;
}