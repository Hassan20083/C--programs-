#include<iostream>
using namespace std;

main()
{
	int pocketmn,mounths,month=30,year=365,yrs,result,re;
	char a;
	cout<<"Enter your pocket money in Rupees :";
	cin>>pocketmn;

	cout<<"Select anyone \n ";
	cout<<"1) mounthly  2) year\n ";	
	cout<<"press 1 or 2 \n further more\n ";
	cin>>a;
		
		if(a=='1')
			{
				cout<<"Enter mounths :";
				cin>>mounths;
				result=month*mounths;
				re=result*pocketmn;
				cout<<"Total pocket money is  "<<re<<endl;
			}
		else if(a=='2')
		    { 
		      	cout<<"Enter years:";
				cin>>yrs;
				result=year*yrs;
				re=result*pocketmn;
				cout<<"Total pocket money is  "<<re<<endl;
		    }	
	
}
