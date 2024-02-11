

#include<conio.h>
#include<iostream>
//   Header that defines the standard input/output stream objects:
//   e.g., cin, cout etc


using namespace std;

//   using: You are going to use it
//   namespace: To use what? A namespace
//   std: The std namespace (where features of the C++ Standard Library, such as string or vector, are declared).


//Function Prototype
double find_sum(int, float, double);

main()
{

	int i;
	float f;
	double d,sum;
	
	
	
	// cout is used to print something on the standard console
	// cin is used to take an input from the standard console	
	cout<<"Enter an integer Value ";
	cin>> i;
	
	cout<<"Enter a float Value ";
	cin>> f;
	
	cout<<"Enter a double Value ";
	cin>> d;
	
	
	
	//Function call
	sum = find_sum(i, f, d);
	
	cout<<"\n The Sum of Integer, Float and Double values is: "<<sum;
	
	
	getch();
}


//Function definition
double find_sum(int i, int f, int d)
{
	
	return i + f + d;
}
