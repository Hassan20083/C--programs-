#include<conio.h>
#include<iostream>
using namespace std;
//find minimum number
int find_mini(int arr[],int n);


int main()
{
   int mini, n;
   cout<<"Enter size of array: ";
   cin>>n; int arr[n-1];
   for(int i=0; i<n; i++)
   {
   	cout<<"Enter vlue"<<i<<" :";
   		cin>>arr[i];
   }
   mini=find_mini( arr, n);
   cout<<"minimum "<<mini<<endl;
   
}
int find_mini(int arr[])


{ int n;
	int temp=arr[0];
	for( int i=0; i<n; i++)
	{
		if(temp > arr[i])
		{
			temp=arr[i];
		}
	}
	return temp;
}


