#include <iostream>

using namespace std;

int main (int argc, char * argv[])
{
	
	int vetor[4];
	
	for(int i = 0; i < 4; i++)
		vetor[i] =i;
	for(int i = 0; i < 4; i++)
		cout << vetor[i] << endl;
	cout << sizeof(vetor) <<endl;
		return 0;
		
}
