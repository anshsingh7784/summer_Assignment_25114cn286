#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    cout<<"^_~ Welcome to Number Guessing Game ! ~_^\n";
    cout<<"^_~ 1-----------to--------------100 ! ~_^\n";
    srand(time(0));
    int num=(rand()%100)+1;
    int guess=0;
    string input="";
    int attempts=0;
    do
    {
        cout<<"Enter your guess : ";
        cin>>input;
        attempts++;
        
        try
        {
            guess=stoi(input);
        }
          catch(...)
        {
           cout<<"~_^ invalid input ! ~_^\n";
           continue;
        }
            if(guess<num)
            cout<<"^_~ TOO  LOW ! ~_^\n";
            else if(guess>num)
            cout<<"^_~ TOO HIGH ! ~_^\n";
            else
            {
            cout<<"^_~ YOU  WON ! ~_^\n";
            cout<<"^_~ "<<attempts<<" ATTEMPTS ! ~_^\n";
            break;
            }
    }while(guess!=num);
    return 0;
}