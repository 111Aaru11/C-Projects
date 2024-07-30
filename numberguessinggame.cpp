#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
    srand(time(0));//sets this time value as the seed for the random number i.e. with time random numbers by the compiler will change
    int randomnumber=rand()%100+1;//random pseudo number will be generated 
    // between 1 to 100(including both the numbers)
    int guessnumber;//guessing number
    while("True"){
        cout<<"Guess the number: "<<endl;
        cin>>guessnumber;
            if(guessnumber>randomnumber){
                cout<<"Your guess is too high "<<endl;
            }
            else if(guessnumber<randomnumber){
                cout<<"Your guess is too low "<<endl;
            }
            else{
                cout<<"Congratulations!!! Your guess is correct... "<<endl;
                break;//when randomnumber=guessnumber
            }
        }
        cout<<"Let's play again"<<endl;
    return 0;
}