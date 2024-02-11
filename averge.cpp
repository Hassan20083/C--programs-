#include<iostream>

using namespace std;

main()

{
	int a[10],sum=0;
	double avrg;
	for(int b=0; b<10; b++)
	{
		cin>>a[b];
	}
	
	for(int c=0; c<10; c++)
	{
		sum=sum+a[c];
	}
  		
  	avrg=sum/10;	
     cout<<endl;
		cout<<"averge of arrey is: "<<avrg;
}
