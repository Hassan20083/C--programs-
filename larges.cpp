#include<iostream>

using namespace std;

main()

{
	int a[10],max;
	for(int b=0; b<10; b++)
	{
		cin>>a[b];
	}
	max=a[0];
	for(int z=0; z<10; z++)
	{
	   if(max<a[z])
	   {
	   	max=a[z];
		   }	
	}
	cout<<"largest number is :"<<max;
}
