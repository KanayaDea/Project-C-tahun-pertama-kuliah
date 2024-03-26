#include<iostream>
using namespace std;

string makan[3] = {"Nasi Goreng", "Mie Goreng", "Ayam Goreng"};
string minum[3] = {"Air Mineral", "Es Teh", "Es Jeruk"};

void pesanan()
{
	cout<<"Menu Makan :\n";
	for(int a=0; a<3; a++){
		cout<<"- "<<makan[a]<<endl;
	}
	cout<<"\nMenu Minum :\n";
	for(int b=0; b<3; b++){
		cout<<"- "<<minum[b]<<endl;
	}
}

void menu()
{
	int p,q,r=15000,s=3000;
	cout<<"Ingin Makan apa (1-3) = "; cin>>p;
	cout<<"Ingin Minum apa (1-3) = "; cin>>q;
	cout<<endl;
	
	switch (p){
		case 1 :
			cout<<"Pesanan Pertama : "<<makan[0]<<" = Rp. "<<r;
			break;
		case 2 :
			cout<<"Pesanan Pertama : "<<makan[1]<<" = Rp. "<<r;
			break;
		case 3 :
			cout<<"Pesanan Pertama : "<<makan[2]<<" = Rp. "<<r;
			break;
	}
	cout<<endl;
	
	switch (q){
		case 1 :
			cout<<"Pesanan Kedua : "<<minum[0]<<" = Rp. "<<s;
			break;
		case 2 :
			cout<<"Pesanan Kedua : "<<minum[1]<<" = Rp. "<<s;
			break;
		case 3 :
			cout<<"Pesanan Kedua : "<<minum[2]<<" = Rp. "<<s;
			break;
	}
	cout<<endl;
	cout<<"\n\tTotal = Rp. "<<r+s;
}

int main(){
	char pil;
	cout<<"\t===========SELAMAT DATANG DI WARUNG MM==============\n";
	cout<<"\t-----Makanan serba Rp.15000 & Minuman serba Rp.3000-----\n";
	cout<<endl;
	
	do{
		pesanan();
		menu();
		cout<<endl;
		cout<<"\nIngin melakukan pesanan lagi? (y/n) : "; cin>>pil;
	}
	while (pil=='y'|| pil=='Y');
	cout<<"\n\t---TERIMAKASIH DAN SELAMAT DATANG KEMBALI---";
	
}