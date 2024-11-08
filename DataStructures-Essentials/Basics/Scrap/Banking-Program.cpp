#include <iostream>
#include <string>
using namespace std;

class BankAccount {
    string accountType;
    double balance;
    int duration;

public:
    BankAccount(string type, double bal, int dur) : accountType(type), balance(bal), duration(dur) {}
    void calculateInterest() {
        double interestRate = 0.0;
        if (accountType == "current") {
            interestRate = 0.04;
        } else if (accountType == "savings") {
            interestRate = 0.06;
            if (duration >= 5) {
                interestRate += 0.03;
            }
        } else {
            cout << "Invalid account type!" << endl;
            return;
        }
        double interest = balance * interestRate;
        cout << "Account Type: " << accountType << endl;
        cout << "Balance: $" << balance << endl;
        cout << "Duration: " << duration << " years" << endl;
        cout << "Interest Rate: " << interestRate * 100 << "%" << endl;
        cout << "Interest Earned: $" << interest << endl;
    }
};

int main() {
    BankAccount currentAccount("current", 10000, 3);
    BankAccount savingsAccount("savings", 15000, 6);
    cout << "Current Account:" << endl;
    currentAccount.calculateInterest();
    cout << endl;
    cout << "Savings Account:" << endl;
    savingsAccount.calculateInterest();
    return 0;
}
