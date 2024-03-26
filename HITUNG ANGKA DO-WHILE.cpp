#include <iostream>
using namespace std;
int main () {
	int K, i, sum;
	cin >> K;
	sum = 0;
	i=1;
	do{
		cout<< i << endl;
		sum = sum + i;
		i = i + 1;
	} while (i <= K);
	cout << "Jumlah = " << sum << endl;
	return 0;
}
