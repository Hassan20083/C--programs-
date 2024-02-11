
#include<conio.h>
#include<iostream>
//   Header that defines the standard input/output stream objects:
//   e.g., cin, cout etc


using namespace std;

//   using: You are going to use it
//   namespace: To use what? A namespace
//   std: The std namespace (where features of the C++ Standard Library, such as string or vector, are declared).


//Function Prototype
bool find_num(int [], int);

int main()
{

	int arr[5], i, num;
	bool flag;
	// cout is used to print something on the standard console
	cout<<"Enter Values in the Array \n";
	
	
	// Taking array input at runtime
	for(i=0; i<5; i++)
	{
		cout<<"Value for index "<<i <<": ";
		cin>>arr[i];
	}
	
	cout<<"Enter a number you want to find out in the Array: ";
	cin>>num;
	
	//Function call
	flag = find_num(arr, num);
	
	if(flag == true)
	{
		cout<<"\n The number "<<num <<" exists in the array";
	}
	else if(flag == false)
	{
		cout<<"\n The number "<<num <<" DOES NOT exists in the array";
	}
	
	getch();
}


//Function definition
bool find_num(int arr[], int num){
	int i;
	bool result = false;
	
		
	for(i=0; i<5; i++)
	{
		if(arr[i] == num)
		{
			result = true;
		}
	}
	return result;
}
