#include<iostream>
using namespace std;

int factorial(int);
int main(){
	int i, n;
	float hasil;
	cout<<"Masukkan Bilangan Bulat Positif = ";
	cin>>i;
	cout<<""<<endl;
	cout<<"Menghitung Nilai Faktorial Dari n"<<endl;
	cout<<""<<endl;
	cout<<"Masukkan Bilangan Bulat Positif n = ";
	cin>>n;
	for(i=1;i<=n;i++){
	hasil = hasil * i;
	}
	cout<< n <<"! = "<< hasil;
	cout <<endl;
	
	return 0;
}
