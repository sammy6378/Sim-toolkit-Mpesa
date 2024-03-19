#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int main() {
    double total;
    double tax = 0.002;
    int phonenumber;
    int choice, choice2, Amount, balance;
    string pin, paybill, name = "", store;
    
    cout << "Enter initial amount to deposit: ";
    cin >> total;

    // Get current date
    time_t now = time(0);
    tm *ltm = localtime(&now);
    int day = ltm->tm_mday;
    int month = 1 + ltm->tm_mon;
    int year = 1900 + ltm->tm_year;
    do{
    cout << ">> Sim Toolkit <<" << endl;
    cout << "1. Send Money" << endl;
    cout << "2. Paybill" << endl;
    cout << "3. Till Number" << endl;
    cout << "4. Withdraw Cash" << endl;
    cout << "5. Loans and Savings" << endl;
    cout << "6. Deposit" << endl;
    cout << "7. My Account" << endl;
    cin >> choice;

    switch (choice) {
        case 1: {
            cout << "Send Money" << endl;
            cout << "Enter phone Number: ";
            cin >> phonenumber;
            cout << "Enter Amount: ";
            cin >> Amount;
            cout << "Enter Mpesa pin: ";
            cin >> pin;
            balance = total - Amount;
            total = balance; // Update total after transaction
            cout << "Transaction confirmed on " << day << "/" << month << "/" << year << " at " << ltm->tm_hour << ":" << ltm->tm_min << endl;
            cout << "Send Ksh" << Amount << ".00 to " << name << endl;
            cout << "Transaction fee: " << tax * Amount << endl;
            cout << "New Mpesa balance is " << balance << endl;
            cout << "Amount you can transact in a day 499000.00" << endl;
            break;
        }
        case 2: {
            cout << "Paybill" << endl;
            cout << "Please enter the paybill number: ";
            cin >> paybill;
            cout << "Withdrawal Amount: ";
            cin >> Amount;
            cout << "Enter your Access pin: ";
            cin >> pin;
            balance = total - Amount;
            total = balance; // Update total after transaction
            cout << "Transaction confirmed on " << day << "/" << month << "/" << year << " at " << ltm->tm_hour << ":" << ltm->tm_min << endl;
            cout << "Withdrawal Ksh" << Amount << ".00 from " << store << endl;
            cout << "New Mpesa balance is " << balance << endl;
            cout << "Amount you can transact in a day 499000.00" << endl;
            break;
        }
        case 3: {
            cout << "Till Number" << endl;
            cout << "Please enter the store name: ";
            cin >> store;
            cout << "Please enter the till number: ";
            cin >> paybill;
            cout << "Withdrawal Amount: ";
            cin >> Amount;
            cout << "Enter your Access pin: ";
            cin >> pin;
            balance = total - Amount;
            total = balance; // Update total after transaction
            cout << "Transaction confirmed on " << day << "/" << month << "/" << year << " at " << ltm->tm_hour << ":" << ltm->tm_min << endl;
            cout << "Withdrawal Ksh" << Amount << ".00 from " << store << endl;
            cout << "New Mpesa balance is " << balance << endl;
            cout << "Amount you can transact in a day 499000.00" << endl;
            break;
        }
        case 4: {
            cout << "Withdraw Cash" << endl;
            cout << "Enter Amount: ";
            cin >> Amount;
            cout << "Enter Mpesa pin: ";
            cin >> pin;
            if (Amount > total) {
                cout << "Insufficient balance to withdraw" << endl;
                break;
            }
            balance = total - Amount;
            total = balance; // Update total after transaction
            cout << "Transaction confirmed on " << day << "/" << month << "/" << year << " at " << ltm->tm_hour << ":" << ltm->tm_min << endl;
            cout << "Withdrawal Ksh" << Amount << ".00" << endl;
            cout << "New Mpesa balance is " << balance << endl;
            cout << "Amount you can transact in a day 499000.00" << endl;
            break;
        }
        case 5: {
            cout << "Loans and Savings" << endl;
            break;
        }
        case 6: {
            cout << "Deposit" << endl;
            cout << "Enter Amount to deposit: ";
            cin >> Amount;
            total += Amount; // Update total after deposit
            cout << "Transaction confirmed on " << day << "/" << month << "/" << year << " at " << ltm->tm_hour << ":" << ltm->tm_min << endl;
            cout << "Deposited Ksh" << Amount << ".00" << endl;
            cout << "New Mpesa balance is " << total << endl;
            cout << "Amount you can transact in a day 499000.00" << endl;
            break;
        }
        case 7: {
            cout << "My Account" << endl;
            cout << "Current Mpesa balance: " << total << ".00" << endl;
            break;
        }
         case 8: {
                
                return 0;
            }
            default:
                cout << "Invalid choice, please select from 1 to 7" << endl;
        }

        cout << "Press any key to go back to the menu...";
        cin.ignore(); // Ignore any previous input
        cin.get(); 
    } while(true);
return 0;
}

