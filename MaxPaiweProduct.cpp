#include <iostream>

#include <vector>

using namespace std;


int main() 
{
	
	long long gr;

	int n;
	
	cin>>n;
	
	vector<int> num(n);

	for(int i=0;i<n;i++)
	
	{   
	    
		cin>>num[i];
	
	}
	
	int max1=-1,max2=-1;
    
	for (int i = 0; i < n; i++)
    
	{
        
		if ((max1 == -1) || (num[i] > num[max1]))
 
			             
			max1 = i;
 
	}      
	
for (int j = 0; j < n; j++)
       
	{
            
			if ((max1!=j) && ((max2 == -1) || (num[j] > num[max2])))

		
         {
                
				max2 = j;
		
                         
			 }
       
	} 

	gr=(long long) num[max1]*num[max2];
    
	
	cout<<gr;
	
	return 0;

}
