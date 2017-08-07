// Extended Euclid Algorithm -- recursive version


#include <iostream.h>
#include <math.h>
#include <stdio.h>


int xgcd( int a, int b, int *x, int *y)   
  {
    int gcd, temp;

    if(b==0)
    { 
	  *x=1;
      *y=0;
      return a;
    }

    gcd = xgcd(b,a%b,x,y);

    temp = *y;          
    *y = *x - (*y) * (a/b);
    *x = temp;

    return gcd;
  }



int main(void)
{ 
  int a, b, c, d, gcd;

  
  cout<<"Doste ton a :";
  cin>>a;
  cout<<"Doste ton b :";
  cin>>b;	
  
  gcd = xgcd(a,b,&c,&d);
  
  cout<<gcd<<"="<<c<<"*"<<a<<"+"<<d<<"*"<<b<<endl;
  return 0;
}

  

