#include<conio.h>
#include<iostream>
using namespace std;
//find maximum number
int find_max(int arr[]);
int main()
{
   int max,arr[6],i;
   
   for(int i=0; i<6; i++)
   {
   	cout<<"Enter vlue"<<i<<" :";
   	cin>>arr[i];
   }
   max=find_max( arr);
   cout<<"maximum "<<max<<endl;
   return 0;
}

int find_max(int arr[])

{
	int temp=arr[6];
	for( int i=0; i<6; i++)
	{
		if(temp < arr[i])  
		{
			temp=arr[i];   
			
		}
	}
	return temp;
}
