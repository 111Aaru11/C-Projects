
//*********SIMPLE CALCULATOR********** */

#include<iostream>
#include<cmath>
using namespace std;

int main(){

    char op; //operation to be performed by the user
    //define variables
    double num1, num2;
    cout<<"Enter the two numbers num1 and num2 : ";
    cin>>num1;
    cin>>num2; // enter numbers
    cout<<"Enter the Operator ( + , - , * or  / ) : ";
    cin >> op; //enter operator

    switch(op){
        case '+':
            cout<<num1 << " "<<op<<" " << num2<<" = "<<num1+num2<<endl; //addition
            break;
        case '-':
            cout<<num1<<" "<<op<<" "<<num2<<" = "<<num1-num2<<endl; //subtraction
            break;
        case '*':
            cout<<num1<<" "<<op<<" "<<num2<<" = "<<num1*num2<<endl; //multiplication
            break;
        case '/':
            if(num2==0.0){
                cout<<"Error Ocurred"<<endl; //ZeroDivisionError
            }
            else{
                cout<<num1<<" "<<op<<" "<<num2<<" = "<<num1 / num2<<endl; //division
            }
            break;
        default:
            cout<<"Invalid operator"<<endl; //operator not found
            break;
    }
    return 0;
}