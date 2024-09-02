#include <iostream>

using namespace std;

void inverte(char nome[])
{
	// obtendo o tamanho da string
	int tam;
	for( tam = 0; nome [tam]; tam++);
	for (int i = tam - 1 ; i >= 0; i--);
	 cout << nome[i];
}

int main(int argc, char *[])
{
	char nome[] = "marcos";
	inverte (nome);
	return 0;
	
}




/*	do
	{
		cout << nome[i];
	}
	while(nome [i++]);
/*

/*{
	char nome[] ={ "marcos"};
	int i = 0;
	
	while(nome[i] != '\0'){
		cout<<nome[i++];
	}
	return 0;
}
while testa expressão no começo do looping
do while testa no final do looping.
*/