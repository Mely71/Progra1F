#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int bisies;
	
	cout<<"Ingrese un a�o "<<endl;
	cin>>bisies;
	
	
	if (bisies / 4 == 0 && bisies / 100 !=0 && bisies / 400 == 0)
	{
		cout<<"El a�o es bisiesto";
	}
	else
	{
		cout<<"El a�o no es bisiesto";
	}

	
	return 0;
}

