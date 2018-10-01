#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int i,n,angka[20];
	float jumlah=0,rata2;
	cout<<"Masukan jumlah angka yang di input = ";cin>>n;
	for(i=1;i<=n;i++){
		cout<<"Masukan data ke-"<<i<<" = ";cin>>angka[i];
		jumlah=jumlah+angka[i];
	}
	rata2=jumlah/n;
	cout<<"\nHasil rerata = "<<rata2;
	
getch();	
}
