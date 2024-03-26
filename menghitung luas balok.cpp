#include <iostream>
using namespace std;

// Ini program menghitung Balok

float p,l,t,v;

int main(){

	cout<<"selamat menghitung volume"
	cout<<"Masukan Panjang(m)=";
	cin>>p;
	cout<<"Masukan Lebar(m) = ";
	cin>>l;
	cout<<"Masukan Tinggi(m) = ";
	cin>>t;
	
	v=(p*l*t);
	
	cout<<"Volume balok yang tercipta adalah" <<v;
	return 0;
}
