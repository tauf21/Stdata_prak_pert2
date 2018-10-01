#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
int main(){
	string nama;
	
	cout<<"Masukan Kata : ";cin>>nama;
	cout<<endl;
	for(int i=nama.length()-1;i>=0;i--){
		for(int a=0;a<=i;a++){
			cout<<nama[a];
			}
		cout<<endl;
		}
getch();
}