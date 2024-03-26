#include<iostream>
using namespace std;

int main(){	
	int nama,umur,no;
	
	cout<< "Selamat Datang di XII" << endl;
	cout<< "Sebelum memasuki bioskop diharapkan untuk mengisi data"<< endl;
	cout<< "Masukkan nama anda =" <<endl;
	cin>>nama;
	cout<< "Umur anda ="<<endl;
	cin>>umur;
	cout<< "Nomor bangku yang akan dipilih 1 sampai 10 ="<<endl ;
	cin>>no;

	if(umur>13){
		cout<< "Anda dapat membeli tiket bioskop" << endl;
	} else{
		cout<< "Anda masih dibawah umur" << endl;
	}
	
	return 0;
}

