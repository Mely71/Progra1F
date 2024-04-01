#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	char letra;
	
	cout<<"Ingrese una letra: "<<endl;
	cin>>letra;
	
	if ((letra >= 'A' && letra <= 'Z')|| (letra >= 'a' && letra <= 'z')) {
		if (letra >= 'A' && letra <= 'Z') {
			cout<<" La letra es mayuscula "<<endl;
		} else {
			cout<<" La letra es minuscula "<<endl;
		}
	}
	
	return 0;
}

