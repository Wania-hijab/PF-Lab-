#include<iostream>
using namespace std;
int main() { 
double balance;
double withdrawl;
    cout << "Enter initial balance: ";
    cin >> balance;

    while (true) {
        cout << "Enter amount to withdraw: ";
        cin >> withdrawl;
        
        if (withdrawl == 0) {
            break;
        }

        if (withdrawl > balance) {
            cout << "Insufficient balance. Transaction declined."<<endl;
        } else {
            balance -= withdrawl;
            cout << "Transaction successful. Current balance: " << balance<<endl;
        }
    }

    return 0;
}