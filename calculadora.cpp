/*
	calculadora
	opera��es permitidas:
	+ -> adi��o
	- ->subtra��o
	* -> multiplica��o
	/ -> divis�o
*/

#include <iostream>
using namespace std;

int main (int argc, char * argv[])
{
	
	int num1, num2, resultado;
	float div;
	char op; //opera��o
	
	cout<< "Digite um primeiro numero: ";
	cin >> num1;
	cout<< "Digite um segundo numero: ";
	cin >> num2;
	cout<< "Digite a opera�ao: ";
	cin>>op;
	
	switch(op)
	{
		case  '+':
			resultado = num1 + num2;
			cout << "soma: " << resultado <<endl;
			break;
		case '-':
			resultado = num1 - num2;
			cout << "subtra��o: " << resultado <<endl;
			break;
		case '*':
			resultado = num1 * num2;
			cout<< "multiplica�ao: " << resultado <<endl;
			break;
		case '/':
		if(num2 !=0)
		{
			div = (float) num1 / num2;
			cout << "divisao: " <<resultado << endl;
		}
		else
		{
			cout << "Divisao por zero!" <<endl;
		}
			break;
		default:
			cout <<"opera��es inexistente." << endl;
			break;
				
	}
	return 0;
}