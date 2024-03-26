#include<iostream>
using namespace std;

int main(){
	cout<<" Halo Saya Annisa Novantika"<<endl;
    cout<<" Selamat Datang Di Program Penjumlahan Matriks "<<endl;
	cout<<" "<<endl;
	cout<<"\n";
	
	int i,j;
	int M1 [3][5] = {
	{88,97,74,65,64},
	{92,73,58,64,33},
	{83,80,44,58,63}
	};
	
	int M2 [3][5] = {
	{53,48,66,89,93},
	{84,98,58,64,27},
	{18,26,47,53,75}
	};
	
	int MHasil [3][5];
	
	for (i=0; i<3; i++){
		for (j=0; j<5; j++){
			
	MHasil [i][j] = (M1 [i][j]) + (M2 [i][j]);
	
		}
	}
	
	
	for (i=0; i<3; i++){
		for (j=0; j<5; j++){
			cout << MHasil [i][j]<< " ";
		}
	cout << "\n";	
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}

	
	

