#include <iostream>
#include <iomanip>
#include <math.h>
#include <conio.h>

using namespace std;

int main(){
	int i,n,angka[20];
	float jumlah=0,jumlah2=0,rata2,rataminjum,rataminjum2,varian,stdeviasi;
	cout<<"Masukan jumlah angka yang di input = ";cin>>n;
	for(i=1;i<=n;i++){
		cout<<"Masukan data ke-"<<i<<" = ";cin>>angka[i];
		jumlah=jumlah+angka[i];
	}
	rata2=jumlah/n;
	cout<<"\nHasil rerata = "<<rata2<<endl;
	cout<<"(Angka input - rerata) :"<<endl;
	for(i=1;i<=n;i++){
		rataminjum=angka[i]-rata2;
		cout<<setiosflags(ios::fixed);
		cout<<"Data ke-"<<i<<" = "<<setprecision(2)<<rataminjum<<endl;
		}
	cout<<"\n(Angka input - rerata)^2 :"<<endl;
	for(i=1;i<=n;i++){
		rataminjum2=pow((angka[i]-rata2),2);
		cout<<setiosflags(ios::fixed);
		cout<<"Data ke-"<<i<<" = "<<setprecision(2)<<rataminjum2<<endl;
		jumlah2=jumlah2+rataminjum2;
		}
	
	varian=jumlah2/(n-1);
	cout<<"\nNilai Varian = "<<varian;
	stdeviasi=sqrt(varian);
	cout<<"\nNilai Standar Deviasi = "<<stdeviasi;

getch();
}
