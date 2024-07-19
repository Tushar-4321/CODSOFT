#include<iostream>
using namespace std;
//MAKING A SIMPLE CALCULATOR

int main(){
    float a, b; int choose;
    cout<<"Please choose the numbers = "<<endl;
    cout<<"a = ";
    cin>>a;  
    cout<<"b = ";
    cin>>b;
    cout<<"Input your choice as 1 = sum, 2 = subtraction, 3 = multiplication and 4 = division"<<endl;
    cout<<"choose : "; cin>>choose;
    switch (choose)
    {
    case 1: 
    cout<<"sum of two numbers = (a + b) = "<<a<<" + " <<b <<" = "<<a + b << endl;
        break;
    case 2: 
    cout<<"Subtraction of two numbers = (a - b) = "<<a<<" - "<<b<<" = "<<a - b<<endl;
        break;   
    case 3: 
    cout<<"Multiplication of two numbers = (a * b) = "<<a<<" * "<<b<<" = "<<a * b<<endl;
        break;
    case 4: 
    cout<<"Division of two numbers = (a / b) = "<<a<<" / "<<b<<" = "<<a / b<<endl;
        break;    
    default:
        break;
    }
     
}