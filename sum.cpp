#include<iostream>
using namespace std;
float sum(int,float);
int main()
{  
	int a;
	float result, b;
	cout<<"enter frist number";
	cin>>a;
	cout<<"enter second number";
	cin>>b;	
	result=sum(a,b);
	cout<<"sum "<<result<<endl; 
	
}

float sum(int a,float b)
{

	return a+b;
}
