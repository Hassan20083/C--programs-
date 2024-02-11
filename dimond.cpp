#include <iostream>
using namespace std;
int main()
{
  int  c, k, space = 1;
  
  space = 6 - 1;
 
  for (k = 1; k<=6; k++)
  {
    for (c = 1; c<=space; c++)
      cout<<" ";
 
    space--;
 
    for (c = 1; c<= 2*k-1; c++)
      cout<<"*";
 
    cout<<"\n";
  }
 
  space = 1;
 
  for (k = 1; k<= 6 - 1; k++)
  {
    for (c = 1; c<= space; c++)
      cout<<" ";
 
    space++;
 
    for (c = 1 ; c<= 2*(6-k)-1; c++)
      cout<<"*";
 
    cout<<"\n";
  }
  return 0;
  
  }

