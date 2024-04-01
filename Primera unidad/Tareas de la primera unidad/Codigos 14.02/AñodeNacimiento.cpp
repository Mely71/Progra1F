#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int año;
	
	cout<<"Ingrese su año de nacimeiento: ";
	cin>>año;
	
	if (año >= 2000) 
	{
		cout<<"Es del siglo 20";
	}
	else
	{
		cout<<"Es del siglo 21";
	}
	
	return 0;
}

