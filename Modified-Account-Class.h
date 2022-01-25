#include <string>

class account {
    public :
    account (std::string accountName , double accountBalance):
    name (accountName){
        if(accountBalance > 0){
            balance = balance + accountBalance ;
        }
    }
    void setName( std::string accountName){
        name = accountName ;
    }
    std::string getName() const {
        return name ;
    }
    void deposite(double depositAmount) {
        if(depositAmount>0){
            balance = balance + depositAmount ;
        }
    }
    void withdraw ( double withdrawAmount ){ 
        if (withdrawAmount <=balance){           //to make sure the withdraw amount does not exceed the balance
            balance = balance - withdrawAmount ;
        }
    }

    double getBalance () const {
        return balance ;
    }

    private :
    std::string name ;
    double balance{0} ;
};