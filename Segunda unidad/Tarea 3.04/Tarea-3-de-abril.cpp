#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int num = 0;
	cout<<"Ingrese un numero "<<endl;
	cin>>num;
	
	switch(num) {
	case 1:
		cout<<"Area comun";
		break;
	case 3:
		cout<<"Area comun";
		break;
	case 5:
		cout<<"Area especifica";
		break;
	case 7:
		cout<<"Area especifica";
		break;
	default:
		cout<<"No nos encontramos en ese semestre";
	}
	
	return 0;
}

