#include<iostream>
#include<cstdlib>
using namespace std;
main()
{
	int std1[5],std2[5],std3[5],std4[5],std5[5];
 
    float  pr1=0.0,pr2,pr3,pr4,pr5;

	int sum1=0,sum2=0,sum3=0,sum4=0,sum5=0;     
     
	for(int z=0;z<5;z++)
	 {
	 	
	 	cout<<"Enter subjects marks: ";
		cin>>std1[z];
		sum1=sum1+std1[z];
		cout<<endl;
		 pr1=sum1/250;
    pr1=pr1*100;
    	}
   
    cout<<"your total marks : "<<sum1<<endl;
    cout<<" percent: "<<pr1<<endl;
     
    	
	
	}
