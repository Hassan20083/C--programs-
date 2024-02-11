#include <fstream>
#include<iostream>
using namespace std;
int main()
{
	
	string i;
ofstream obj;
cout<<"enter somehing";
cin>>i;
obj.open("ata.exe");
obj <<i;
obj.close(); 
}
