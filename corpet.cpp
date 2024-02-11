#include<iostream>
using namespace std;
main()
{
	float room_cost,yard_squre=8.95,length,width,area,a;
	for(int i=0;i<3;i++)
	{
	cout<<"enter length of room in feet:";
	cin>>length;
	cout<<"Enter width of room in feet: ";
	cin>>width;
	area=length*width;
	cout<<"area of room in feet "<<area<<endl;
	a=area/3;
	cout<<"area of room in feet into yards "<<a<<endl;
	cout<<"cost of carpet per squre yard is "<<yard_squre<<endl;
	room_cost=area*yard_squre;
	cout<<"cost of room = "<<room_cost<<endl;
	
	}
}
