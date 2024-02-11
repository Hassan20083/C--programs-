 #include<iostream>
using namespace std;
int main()
{ 
 int r,f=0,s=1,fib;
 cout<<"Enter range:";
 cin>>r;
 for(int i=0;i<r;i++)
 {
 fib=i;
 fib=f+s;
 f=s;
 s=fib;
 cout<<"series: "<<fib<<endl;
 
 }
return 0;
}

