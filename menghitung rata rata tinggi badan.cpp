n  #include <iostream>
using namespace std;

int main()
{
	cout<< "Program Menghitung ratarata Tb 5 Mahasiswa" <<endl; //judul program
	//selanjutnya menginput Tb Mahasiswa//
int jumlah_mahasiswa,Tb1,Tb2,Tb3,Tb4,Tb5;
	float rata;
	cout	<< "Masukkan Tinggi badan Mahasiswa Pertama = ";
	cin		>> Tb1;
	cout	<< "Masukkan Tinggi badan Mahasiswa Kedua = ";
	cin		>> Tb2;
	cout	<< "Masukkan Tinggi badan Mahasiswa Ketiga = ";
	cin		>> Tb3;
	cout	<< "Masukkan Tinggi badan Mahasiswa Keempat = ";
	cin		>> Tb4;
	cout	<< "Masukkan Tinggi badan Mahasiswa Kelima = ";
	cin		>> Tb5;
	
	rata=(Tb1+Tb2+Tb3+Tb4+Tb5)/5 ;
	cout	<< "Rata rata Tinggi badan Mahasiswa adalah = " <<rata;
	return 0;
}
