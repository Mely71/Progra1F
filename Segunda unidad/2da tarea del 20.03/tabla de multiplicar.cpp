#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int num;
	
	do {
		cout<<"Ingrese un numero: "<<endl;
		cin>>num;
	}while((num < 1)|| (num > 10));
	
	for (int x = 1; x<=10; x++) {
		cout<<num<<" * "<<x<<" = "<<num * x <<endl;
	}
	return 0;
}

