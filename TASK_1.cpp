#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

// NUMBER GUESSING GAME

int main(){
    int number, guess, nguesses = 1;
    srand(time(0));
    number = rand()%100 + 1;// GENERATES A RANDOM NUMBER BETWEEN 1 AND 100

    //NOW MAKE A LOOP AND KEEP RUNNING THE LOOP UNTIL THE NUMBER IS GUESSED

    do
    {
       cout<<"Please guess the number between 1 to 100 = "<<endl;
       cin>>guess;
       if( guess > number)
       {
        cout<<"It's a Higher Number"<<endl;
       }
       else if(guess < number)
       {
        cout<<"It's a Lower Number"<<endl;
       }
       else{
        cout<<"Damm You guessed it correctly and in "<<nguesses<<" attempts"<<endl;
       }
       nguesses++;
    } while (guess != number);

    return 0;
}