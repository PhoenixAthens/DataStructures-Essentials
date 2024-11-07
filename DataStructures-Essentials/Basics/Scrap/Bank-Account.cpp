#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <stdlib.h>
#include <time.h>
using std::string;
using std::cout;
using std::cin;
using std::unordered_map;
using std::unordered_set;
using std::to_string;
enum AccountType{
    Savings_Account, Checking_Account, Money_Market_Account, Certificate_of_Deposit,
    Individual_Retirement_Account, Joint_Account, Business_Corporate_Account,
    Student_Account, Trust_Account, Custodial_Account
};
class Account{
private:
    const string nameOfDepositor;
    const string accountNumber;
    AccountType accountType;
    double balance;
public:
    Account(string nameOfDep, string accountNum, AccountType accType, double bal)
    :nameOfDepositor(nameOfDep),accountNumber(accountNum),accountType(accType),balance(bal){
        cout << "Account with details: \n"
        "\t Name of Depository: " << nameOfDep << "\n" <<
        "\t Account Number: " << accountNum << "\n" <<
        "\t Account Type: " << accType << "\n" <<
        "\t Balance: " << balance << "\n" <<
        "Has Been Created!\n";
    }
    void depositAmount(double deposit){
        balance+=deposit;
        cout << "New Balance: " << balance << "\n";
    }
    void withdrawAmount(double amount){
        if(balance < amount){
            cout << "Insufficient Funds!\n";
        }else{
            balance-=amount;
            cout << "New Balance: " << balance << "\n";
        }
    }
    void printDetails(){
        cout << "Name of Depositor: " << nameOfDepositor << "\n"
        << "Balance: " << balance <<"\n";
    }
};
class BankAdministration{
private:
    unordered_set<int> accountNumbers_used;
    unordered_map<string,string> userLogin;
    unordered_map<string,Account*> userDetails;
    Account* login_util(string id, string password){
        if(userLogin.find(id)!=userLogin.end()){
            if(userLogin[id]==password){
                return userDetails[id];
            }else{
                cout << "Invalid Password\n";
                return nullptr;
            }
        }else{
            return nullptr;
        }
    }
public:
    BankAdministration(){
        cout << "Launching Administration Portal!\n";
    }
    AccountType setAccountType(){
        int choice;
        cout 
        << "Enter digits 1 to 10, to select the account type\n"
        << "[1]  -> Savings Account\n"
        << "[2]  -> Checking Account\n"
        << "[3]  -> Money Market Account\n"
        << "[4]  -> Certificate of Deposit\n"
        << "[5]  -> Individual Retirement Account\n"
        << "[6]  -> Joint Account\n"
        << "[7]  -> Business/Corporate Account\n"
        << "[8]  -> Student Account\n"
        << "[9]  -> Trust Account\n"
        << "[10] -> Custodial Account\n";
        cout << "Choice: ";
        cin >> choice;
        switch(choice){
            case 1: return Savings_Account;
            case 2: return Checking_Account;
            case 3: return Money_Market_Account;
            case 4: return Certificate_of_Deposit;
            case 5: return Individual_Retirement_Account;
            case 6: return Joint_Account;
            case 7: return Business_Corporate_Account;
            case 8: return Student_Account;
            case 9: return Trust_Account;
            case 10: return Custodial_Account;
        }
        return Savings_Account;
    }
    void createUser(string id,string password){
        time_t t;
        srand((unsigned)time(&t));
        userLogin[id]=password;
        string userName;
        AccountType accType;
        double bal;
        cout << "Enter the name of user: ";
        cin >> userName;
        int accountNum= rand()%1000000000;
        while(accountNumbers_used.find(accountNum)!=accountNumbers_used.end()){
            accountNum = rand()%1000000000;
        }
        accountNumbers_used.insert(accountNum);
        accType = setAccountType();
        cout << "Enter user balance: ";
        cin >> bal;

        Account* newUser = new Account(userName,to_string(accountNum),accType,bal);
        
        userDetails[id]=newUser;
    }
    Account* login(string id, string password){
        if(userLogin.find(id)!=userLogin.end()){
            if(userLogin[id]==password){
                return userDetails[id];
            }else{
                cout << "Invalid Password\n";
                return nullptr;
            }
        }else{
            return nullptr;
        }
    }
};
void IntroMenu(){
    cout << "Enter the corresponding value to access the specified function\n"
    << "[1] -> Create User\n"
    << "[2] -> Access user account\n"
    << "[3] -> Quit Applicateion!\n";
    cout << "Enter your choice: ";
}
void AccessUserDetails(){
    cout << "Enter the corresponding value to access the specified function\n"
    << "[1] -> Deposit Money\n"
    << "[2] -> Print Details\n"
    << "[3] -> Withdraw money\n"
    << "[4] -> Quit Application!\n";
    cout << "Enter your choice: ";
}
string* requestID_Pass(){
    string id;
    string password;
    cout << "Enter User ID: ";
    cin >> id;
    cout << "Enter the user password: ";
    cin >> password;
    return new string[]{id,password};
}
void bankApp(BankAdministration& bank_admin){
    
    while(true){
        int choice;
        IntroMenu();
        cin >> choice;
        string* id_pass;
        bool mainFlag = true;
        switch(choice){
            case 1:
                id_pass = requestID_Pass();
                bank_admin.createUser(id_pass[0], id_pass[1]);
                break;
            case 2:
                Account* acc;
                id_pass = requestID_Pass();
                acc = bank_admin.login(id_pass[0],id_pass[1]);
                if(acc!=nullptr){
                    while(true){
                        int choice;
                        AccessUserDetails();
                        cin >> choice;
                        bool flag = true;
                        double amount;
                        switch(choice){
                            case 1:
                                cout << "Enter the amount to deposit: ";
                                cin >> amount;
                                acc->depositAmount(amount);
                                break;
                            case 2:
                                acc->printDetails();
                                break;
                            case 3:
                                cout << "Enter the amount to withdraw: ";
                                cin >> amount;
                                acc->withdrawAmount(amount);
                                break;
                            case 4:
                                flag = false;
                                cout << "Quitting Sub-Program\n";
                                break;
                            default:
                                cout << "Invalid option!\n";
                                break;
                        }
                        if(flag==false){
                            break;
                        }
                    }
                }
                break;
            case 3:
                cout << "thank you for visiting!\n";
                mainFlag=false;
                break;
            default:
                cout << "Invalid option!\n";
                break;
        }
        if(mainFlag==false){
            break;
        }
    }
}
int main(){
    BankAdministration bank_admin;
    bankApp(bank_admin);
}
