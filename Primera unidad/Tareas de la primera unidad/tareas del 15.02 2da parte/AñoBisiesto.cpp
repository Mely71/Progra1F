#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int bisies;
	
	cout<<"Ingrese un año "<<endl;
	cin>>bisies;
	
	
	if (bisies / 4 == 0 && bisies / 100 !=0 && bisies / 400 == 0)
	{
		cout<<"El año es bisiesto";
	}
	else
	{
		cout<<"El año no es bisiesto";
	}

	
	return 0;
}

