#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	bool num;
	
	
	cout<<"Ingrese un numero "<<endl;
	cin>>num;
	
	if (num / 3 == 0)
	{
		cout<<"Es divisible entre 3 ";
	}
	else
	{
		cout<<"No es divisible entre 3 ";
	}
	return 0;
}

