//Program computes gcd, expresses it as gcd = x*S + y*L//and gives inverse of S MOD L

#include <iostream.h>
#include <conio.h>

int gcd( int a, int b)
{
  int c = 0;
  while ( b != 0)
  { c = a % b;
    a = b;
    b = c;
    }
  return a;
}

int inverse( int a, int b)
{
   int pa[100],q[100],x[100];
   int n,i,j;
   
   pa[0]=b; 
   pa[1]=a; 
   
   i=0;
   
   while(pa[i]%pa[i+1]!=0)   //compute the pa and the q column
     {
       pa[i+2]=pa[i]%pa[i+1];
       q[i+1]=pa[i]/pa[i+1];
       i++;
     }
   
   n=i+1; 
   x[n]=0; 
   x[n-1]=1;
   for(j=n-2;j>=0;j--)  
	   x[j]=x[j+1]*q[j+1] + x[j+2];//compute x column
   

   /*----------------------------------------------------------*/
   //display the three columns
			
   cout << "\t a \t q \t x "<<endl;    
   cout << "\t==================="<<endl;    
   cout << "\t" << pa[0] <<"\t\t"<<x[0]<<endl;    
   for(i=1;i<n;i++)        
   { 
	   cout << "\t" <<pa[i]<<"\t"<<q[i]<<"\t"<<x[i]<<endl;
   }
   cout << "\t" << pa[n] <<"\t\t"<<x[n]<<endl<<endl;
   /*---------------------------------------------------------*/
   
   if((x[1]*pa[0])>(x[0]*pa[1])) 	
	{
		x[0]=b-x[0];
	}

   return x[0];

}


void main()
{
   int S,L;

    
   cout << "Enter the  integer: S = ";
   cin >> S;
   cout << "Enter the  integer: L = " ;    
   cin >> L;  
   
   if (gcd(S,L)==1)
   {
		cout << inverse(S,L)<<" is inverse to "<<S<<" MOD " <<L<<endl;
   }
   else
   {
	   cout<<"gcd("<<S<<","<<L<<") is not equal to 1"<<endl;
   }

    
   
   getch();
}
