// Project:- Make a program of ATM
#include <iostream>
using namespace std;
int main()
{
     int option, pin;
     long double account;
     double balance, deposite, withdraw;
     balance = 1000;
     cout << "\n\tEnter your mobile number who link in your Bank Account: ";
     cin >> account;
     if (account == 1234567890)
     {
          do
          {
               cout << "\n\t ____________________________";
               cout << "\n\t|___________ MENU ___________|";
               cout << "\n\t|      1.) Check Balance     |";
               cout << "\n\t|      2.) Deposite          |";
               cout << "\n\t|      3.) Withdraw          |";
               cout << "\n\t|      4.) Transfer          |";
               cout << "\n\t|      5.) Exit              |";
               cout << "\n\t|____________________________|";
               cout << "\n\tPlease Choose an Option: ";
               cin >> option;
               switch (option)
               {
               case 1:
                    cout << "\tEnter your PIN: ";
                    cin >> pin;
                    if (pin == 1234)
                    {
                         cout << "\tYour Balance is: $" << balance << endl;
                         break;
                    }
                    else
                    {
                         cout << "\tInvalid PIN Please try again!" << endl;
                         break;
                    }
               case 2:
                    cout << "\tEnter your PIN: ";
                    cin >> pin;
                    if (pin == 1234)
                    {
                         cout << "\tAmount you want to deposit: $";
                         cin >> deposite;
                         balance += deposite; // balance = balancd+deposite;
                         cout << "\tYour current Balance: $" << balance << endl;
                         break;
                    }
                    else
                    {
                         cout << "\tInvalid PIN Please try again!" << endl;
                         break;
                    }
               case 3:
                    cout << "\tEnter your PIN: ";
                    cin >> pin;
                    if (pin == 1234)
                    {
                         cout << "\tHow much do you want to withdrow?: $";
                         cin >> withdraw;
                         if (balance < withdraw)
                         {
                              cout << "\tYou do not have Enough money in your account to withdraw" << endl;
                              break;
                         }
                         else
                         {
                              balance -= withdraw; // balance = balance-withdraw;
                              cout << "\tYour current balance: $" << balance << endl;
                              break;
                         }
                    }
                    else
                    {
                         cout << "\tInvalid PIN Please try again!\n";
                         break;
                    }
               case 4:
                    cout << "\tEnter your PIN: ";
                    cin >> pin;
                    if (pin == 1234)
                    {
                         cout << "\tThis Service is currently unavailable!!!" << endl;
                         break;
                    }
                    else
                    {
                         cout << "\tInvalid PIN Please try again!" << endl;
                         break;
                    }
               case 5:
                    exit(0);
                    break;
               default:
                    if (option != 5)
                    {
                         cout << "\tInvalid option please try again" << endl;
                         break;
                    }
               }
          } while (option != 5);
          system("pause");
     }
     else
     {
          cout << "\tInvalid Account Number!!";
     }
     return 0;
}