#include<iostream>
using namespace std;
int main()
{
    const int pin=1234;
    int enter;
    int attempts=0;
    double balance=500.00;
    int amount=0;
    int choice=0;
    cout<<"-- C++ Bank --\n";
    while(attempts<3)
    {
        cout<<"Enter your 4-digit PIN"<<"'1234'\n";
        cin>>enter;
        if(pin==enter)
        {
            cout<<"\nlogin successful.\n";
            break;
        }
        else
        {
            attempts++;
            cout<<"Incorrect PIN\n";
            cout<<(3-attempts)<<" -Attempts Left.\n";
        }
    }
    if(attempts==3)
    {
        cout<<"TOO MANY ATTEMPTS>\n";
        cout<<"Account Locked Temporarily ...\n";
        return 0;
    }
    do
    {
    cout<<"1. Check Balance\n";
    cout<<"2. Deposite Money\n";
    cout<<"3. Withdraw Money\n";
    cout<<"4. EXIT\n";
    cout<<"Enter your choice :";
    cin>>choice;
    switch(choice)
    {
        case 1:
        cout<<"Current Balance : $"<<balance<<"\n";
        break;
        case 2:
        cout<<"Enter the amount to deposite : $";
        cin>>amount;
        if(amount>0)
        {
        balance+=amount;
        cout<<"\nAmount Deposited Successfully.\n";
        }
        else
        cout<<"Invalid Amount.\nTransaction Failed.\n";
        break;
        case 3:
        cout<<"Enter the amount to Withdraw : $";
        cin>>amount;
        if(amount>0&&balance>=amount)
        {
        balance-=amount;
        cout<<"\nAmount Withdrawn Successfully.\n";
        cout<<"Remaining Balance : $"<<balance<<"\n";
        }
        else
        {
        if(amount<=0)
        cout<<"Invalid Amount.\nTransaction Failed.\n";
        else
        cout<<"Insufficient funds.\n";
        }
        break;
        case 4:
        cout<<"THANKYOU FOR USING C++ BANK.\n";
        break;
        default :
        cout<<"Invalid choice.\n TRY AGAIN. \n";

    }


    } while (choice!=4);
    return 0;
    
}