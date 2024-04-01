#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int num1 = 10, num2 = 10;
	
	while(num1 > 0) {
		cout<<"EL primer numero es: " <<num1 << endl;
		num1--;
	}
	
	cout<<endl;
	
	do {
		cout<<"El segundo numero es: " << num2 <<endl;
		num2--;
	} while (num2 > 0);
	
	cout<<endl;
	
	for(int num3 = 10; num3 > 0; num3--){
		cout<<"El tercer numero es: " << num3 << endl;
		
	}
	
	return 0;
}

