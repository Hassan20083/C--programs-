#include<iostream>
using namespace std;
main()
{
	int dist,per_km,days,result;
	cout<<"Enter distance in Km :";
	cin>>dist;
	cout<<"Enter per km rate:";
	cin>>per_km; 
	cout<<"Enter your days:";
	cin>>days; 
	
	result=dist*per_km*days;
	if(result>1500)
		{
			int discnt,anser;
			discnt=result*0.1;
			anser=result-discnt;
	       cout<<"Total bill with 10% discount :"<<anser;
			
		}
	else
	cout<<"Bill:"<<result;
	
	}
