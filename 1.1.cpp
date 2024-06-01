#include <iostream> 
using namespace std; 

int steps=0;

int gcd(int a, int b) 
{ 
	steps+=1;	
	if (a == 0) 
		return b; 
	if (b == 0) 
		return a; 

	
	if (a == b) 
		return a; 

	
	if (a > b) 
		return gcd(a - b, b); 
	return gcd(a, b - a); 
} 

 
int main() 
{ 
	int a = 98, b = 56; 
	cout << "GCD of " << a << " and " << b << " is "<< gcd(a, b)<<endl; 
	cout<<"no of steps required to complete : "<<steps;
	return 0; 
}

