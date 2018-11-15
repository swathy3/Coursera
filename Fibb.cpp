#include <iostream>

#include<vector>

using namespace std;


int main() 
{
    
int num,i;

cin>>num;
 
vector<int> f(num+2);

f[0]=0;
        
f[1]=1;
        
for(i=2;i<=num;i++)

{

            f[i]=f[i-1]+f[i-2];
 
}
        
cout<<f[num];


return 0;

}
