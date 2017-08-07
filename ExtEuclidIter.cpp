#include <iostream.h>
#include <cmath>



int main()
{
    int num1, num2, a, b, q, x1 = 1, x2 = 0, y1 = 0, y2 = 1, tmp1, tmp2, tmp3;
    
    cout<<" Extended Euclidean Algorithm"<< endl;
    cout<< "Input the first number : ";
    cin >> a;
    cout << "Input the second number : ";
    cin >> b;
    
    num1 = a;
    num2 = b;
    
    cout << "\tx\ty\tq"<< endl;
    cout<< a << "\t" << x1 << "\t" << y1 << endl;
    
	while(b != 0)
        {
              q = a / b;
			  cout << b << "\t" << x2 << "\t" << y2 <<"\t" << q <<endl;
              tmp1 = b;
              b = a % b;
              a = tmp1;
              tmp2 = x2;
              x2 = x1 - q * x2;
              x1 = tmp2;
              tmp3 = y2;
              y2 = y1 - q * y2;
              y1 = tmp3;
        
    }
    cout<<b<<endl;
    
	cout<<endl;
	cout << "gcd(" << num1 << ", " << num2 << ") = " << a << " = "<<x1<<"*"<<num1<<"+"<<y1<<"*"<<num2<<endl;

    

	
	return 0;
}
