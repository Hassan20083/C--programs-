#include<iostream>
using namespace std;
main()
{
	int slry_scle,gross_slry,slary;
	float tax, house_rt,med;
	cout<<"Enter scale: ";
	cin>>slry_scle;
	if(slry_scle==15)
	{
		slary=26000;
		house_rt=slary*0.15; 
		med=slary*0.05;
		tax=slary*0.04;
		gross_slry=slary+house_rt+med-tax;
		cout<<"Gross slary"<<gross_slry;
	}
	else if(slry_scle==16)
	{
		slary=30000;
		house_rt=slary*0.15; 
		med=slary*0.05;
		tax=slary*0.04;
		gross_slry=slary+house_rt+med-tax;
		cout<<"Gross slary"<<gross_slry;
	}
		else if(slry_scle==17)
	{
		slary=34000;
		house_rt=slary*0.15; 
		med=slary*0.05;
		tax=slary*0.04;
		gross_slry=slary+house_rt+med-tax;
		cout<<"Gross slary"<<gross_slry;
	}
		else if(slry_scle==18)
	{
		slary=38000;
		house_rt=slary*0.15; 
		med=slary*0.05;
		tax=slary*0.04;
		gross_slry=slary+house_rt+med-tax;
		cout<<"Gross slary"<<gross_slry;
	}
		else if(slry_scle==19)
	{
		slary=42000;
		house_rt=slary*0.15; 
		med=slary*0.05;
		tax=slary*0.04;
		gross_slry=slary+house_rt+med-tax;
		cout<<"Gross slary"<<gross_slry;
	}
	else 
	cout<<"invalid input";
	}
