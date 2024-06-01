#include<iostream>    
using namespace std; 
int steps=0;     
int main()    
{    
int factorial(int);    
int fact,value;    
cout<<"Enter any number: ";    
cin>>value;    
fact=factorial(value);    
cout<<"Factorial of a number is: "<<fact<<endl;    
cout<<endl<<"no of steps required to complete : "<<steps;
return 0;    
}    
int factorial(int n)    
{    
steps+=1;
if(n<0)    
return(-1);       
if(n==0)    
return(1);     
else    
{    
return(n*factorial(n-1));        
}    
}  
