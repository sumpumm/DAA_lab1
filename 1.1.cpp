#include <iostream> 
using namespace std; 

int steps=0;

int gcd(int a, int b) 
{ 
	steps+=1;	
	if (a == 0) 
		return b; 
	else if (b == 0) 
		return a; 

	
	else if (a == b) 
		return a; 

	else 
	    gcd(b,a%b);
} 

 
int main() 
{ 
	int a = 48, b = 18; 
	cout << "GCD of " << a << " and " << b << " is "<< gcd(a, b)<<endl; 
	cout<<"no of steps required to complete : "<<steps;
	return 0; 
}
