#include <iostream>

using namespace std;

int GCD(long long x,long long y)

{

    int a1;
    
    if(y==0)
        
	return x;
    
     else
    
     {
        
	a1=x%y;
        
	return GCD(y,a1);
    
      }

}

int main() 

{

 	   
	long long a,b,temp,g,l;

	cin>>a>>b;
    
	if(b>a)
    
	{
        
		temp=a;
	
        a=b;
        
		b=temp;
    
	}
    
	g=GCD(a,b);

    	l=(a*b)/g;
	cout<<l;
	return 0;

}
