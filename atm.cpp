#include <iostream>
using namespace std;
int main()
{
    int password = 123;
    int pin;
    int count = 0;
    int isTrue = 0;
    int check = 1;
    int operation;
    double deposit = 0.0;
    double withdraw = 0.0;
    double balance = 0.0;

    cout << "***WELCOME TO BANK OF CPP***" << endl;
    do
    {

        cout << "enter your pin" << endl;
        cin >> pin;
        if (pin == password)
        {
            do
            {
                cout << "successfully connected with the server..." << endl;
                cout << "choose your operation" << endl;
                cout << "1.deposit" << endl;
                cout << "2.withdraw" << endl;
                cout << "3.check balanced" << endl;
                cout << "4.exit" << endl;
                cin >> operation;
                switch (operation)
                {
                case 1:
                    cout << "welcome to the deposit section" << endl;
                    cout << "enter the amount you want to deposit" << endl;
                    cin >> deposit;
                    balance = balance + deposit;
                    cout << "congrats your amount has been deposited" << endl;
                    break;
                case 2:
                    cout << "welcome to the withdraw section" << endl;
                    cout << "enter the amount you want to withdraw" << endl;
                    cin >> withdraw;
                    if (withdraw >= 0.0 && balance >= withdraw)
                    {
                        balance = balance - withdraw;
                        cout << "your amount has been withdrawed successfully !" << endl;
                    }
                    else
                    {
                        cout << " invalid entry " << endl;
                    }
                    break;
                case 3:
                    cout << "your current bank balance : $" << balance << endl;
                    break;
                case 4:
                    cout << "HAVE A NICE DAY !!!" << endl;
                    isTrue = check;
                    break;
                }
            } while (isTrue != check);
        }
        else
        {
            count++;
            cout << "entered pin is incorrect!!" << endl;
            if (count == 3)
            {
                isTrue = check;
                cout << "sorry cannot connect with the server" << endl;
            }
        }
    } while (isTrue != check);

    return 0;
}