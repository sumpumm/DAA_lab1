#include <iostream> 
using namespace std; 
int steps=0;

int fib(int n) 
{
	steps+=1; 
    if (n <= 1) 
        return n; 
    return fib(n - 1) + fib(n - 2); 
} 
  
int main() 
{ 
    int n = 9; 
    for(int i=0;i<=n;i++){
    	cout << fib(i)<<" ";
	} 
    cout<<endl<<"no of steps required to complete : "<<steps;
    
    return 0; 
} 
