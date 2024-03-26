#include<iostream>
using namespace std;

int main () {
		int bil;
		cout<<"Program uji ganjil dan genap"<<endl;
		cout<<"masukkan nilai yang akan diuji : " <<endl;
		cin>>bil;
		
		if(bil%2==0 && bil %2 !=1) {
			cout<< "nilai anda bernilai genap" <<endl;
	} else {
		cout << "nilai anda bernilai ganjil" << endl;
	}
	return 0;
	
}
