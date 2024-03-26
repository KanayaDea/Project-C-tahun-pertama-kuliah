#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	long harga, biaya, diskon, grandtotal, bayar, kembalian;
	char paket;
	int jumlah;
	int arr[5]={5};
	int c=0;
	const int PPN = 500;
	
		
	cout<<"======================================================================"<<endl;
	cout<<"|                        TUGAS BESAR MATKUL PKS                      |"<<endl;
	cout<<"|                               KELOMPOK 17                          |"<<endl;
	cout<<"====================== Program Memesan Makanan ======================="<<endl;
	cout<<"\n";
	cout<<"Anggota Kelompok : "<<endl;
	cout<<"1. Kanaya Dea Thalita Akhmad_121450001"<<endl;
	cout<<"2. Farah Faizah_121450002"<<endl;
	cout<<"3. Nadilla Andhara Putri_121450003"<<endl;
	cout<<endl;
		
	cout<<"======================================================================"<<endl;
	cout<<"|                               Warung Mie 17                         "<<endl;
	cout<<"======================================================================"<<endl;
	cout<<endl;
	
	cout<<"|                              MENU PAKET                             |"<<endl;
	cout<<"|	[1] Mie Rebus + Telur + Es Teh                                   |"<<endl;
	cout<<"|	[2] Mie Goreng + Telur + Nasi + Es teh                           |"<<endl;
	cout<<"|	[3] Mie Ayam + Es Teh                                            |"<<endl;
	cout<<"======================================================================="<<endl;
	cout<<endl;
	
	cout<<"		(Masukkan Menu Paket Berdasarkan Nomor)"<<endl;
	cout<<"Menu Paket yang Anda pilih : "; cin>>paket;
	cout<<"Jumlah Porsi yang Anda Beli : "; cin>>jumlah;
	cout<<""<<endl<<endl;
	
	switch(paket){
		case '1':
			cout<<"Anda Memilih Menu Paket : Mie Rebus + Telur + Es Teh"<<endl;
			harga=13000;
			break;
		case '2':
			cout<<"Anda Memilih Menu Paket : Mie Goreng + Telur + Nasi + Es teh"<<endl;
			harga=18000;
			break;
		case '3':
			cout<<"Anda Memilih Menu Paket : Mie Ayam + Es Teh"<<endl;
			harga : 15000;
			break;
		default:
			cout<<"Menu yang Anda Pilih Tidak Tersedia"<<endl;
			break;
	}
	
	biaya = harga * jumlah;
	diskon = 0.1 * biaya;
	grandtotal = biaya - diskon;
	
	if(jumlah>=5){
		biaya = harga * jumlah;
		diskon = 0.2 * biaya;
		grandtotal = biaya- diskon;
	} else {
		cout<<"Anda Mendapatkan Diskon 20%"<<endl;
	}
	
	cout<<endl;
	
	cout<<"-----------------------------------------------------------------------"<<endl;
	cout<<"                               NOTA BELANJA                            "<<endl;
	cout<<"-----------------------------------------------------------------------"<<endl;
	cout<<"Rincian Belanja : "		<<endl;
	cout<<"\tMenu Paket		= "		<<paket<<endl;
	cout<<"\tJumlah Porsi		= "		<<jumlah<<endl;
	cout<<"\tBiaya 			= Rp. "		<<biaya<<endl;
	cout<<"\tDiskon			= Rp. "		<<diskon<<endl;
	cout<<endl;
	cout<<"\tJumlah Belanja		= Rp. "		<<grandtotal<<endl;
	cout<<"\tPajak			= Rp. "		<<PPN<<endl;
	cout<<"\tTotal Belanja		= Rp. "		<<grandtotal+PPN<<endl;
	cout<<endl;
	cout<<"\tBayar			= Rp. "; cin>>bayar;
	
	kembalian = bayar-grandtotal-PPN;
	
	cout<<"\tUang Kembalian		= Rp. "<<kembalian<<endl<<endl;
	cout<<"\tCashback		= Rp. ";
	
	for(int c=0; c<4; c++)
	cout<<arr[c];
	cout<<endl;
	
	do{
		cout<<endl;
		cout<<"	Terimakasih Telah Berbelanja di Warung Mie 17"<<endl<<endl;
		c++;
	}while(c<3);
	
	getch();
}
