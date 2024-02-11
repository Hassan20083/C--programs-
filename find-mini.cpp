#include<conio.h>
#include<iostream>
using namespace std;
//find maximum number
int find_mini(int arr[]);
int main()
{
   int mini,arr[6],i;
   
   for(int i=0; i<6; i++)
   {
   	cout<<"Enter vlue"<<i<<" :";
   	cin>>arr[i];
   }
   mini=find_mini( arr);
   cout<<"minimum "<<mini<<endl;
   return 0;
}

int find_mini(int arr[])

{
	int temp=arr[6];
	for( int i=0; i<6; i++)
	{
		if(temp > arr[i])  
		{
			temp=arr[i];   
			
		}
	}
	return temp;
}
