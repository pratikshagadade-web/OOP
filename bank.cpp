#include<iostream>
using namespace std;

class BankAccount{
	private:
		int accountNumber;
		string accountholderName;
		string accountType;
		double accountBalance;
	
	
	public:
		BankAccount(int accountNumber,string accountholderName,string accountType,double accountBalance){
		
		this->accountNumber=accountNumber;
		this->accountholderName=accountholderName;
		this->accountType=accountType;
		this->accountBalance= accountBalance;
	 	}
	 	
	 	int accountNumber(){
	 		return accountNumber;
		 }
		 
		string accountholderName(){
			return accountholderName;
		}
		string acccountType(){
			return accountType;
		}
		
		double accountBalance(){
			return accountBalance;
		}
		
		void deposite(int ammount){
			
			accountBalance+=ammount;
			cout<<" deposite succesful.your current account balance is "<<accountBalance<<endl;
		}
		
		void withdraw(int ammount){
			if(accountBalance>=ammount){
				accountBalance-=ammount;
				cout<<"withdrawing successful. your current account balance is"<<accountBalance<<endl;
			}
			else {
				cout<<"balance is insufficient. withdraw unsuccessful"<<endl;
			}
		}
		void displaydetails(){
			cout<<"accountnumber:"<<accountNumber<<endl;
			cout<<"account holder name:"<<accountholderName<<endl;
			cout<<"balance:"<<accountBalance<<endl;
		}
		 
		 
};
int main()
{
	int accountNumber,
    double accountBalance;
	string acccountholderName,accountType;
	
	cout<<"enter the account number"<<endl;
	cin>>accountNumber;
	
	cout<<"enter the account holder name"<<endl;
	cin>>accountholderName;
	
	cin<<"enter the account type"<<endl;
	cin>>accountType;
	
	cout<<"enter the balance in the account"<<endl;
	cin>>accountBalance;
	
	Bankaccount account(accountNumber,accountholderName,accountType,accountBalance);
	
	while(true){
		cout<<"1.deposite money"<<endl;
		cout<<"2.withdraw money"<<endl;
		cout<<"3.display acount details"<<endl;
		cout<<"4.exit"<<endl;
		
		int choice;
		cin>>choice;
		
		switch(choice){
			case 1:double depositeAmount;
			cout<<"enter the ammount to deposite:"<<endl;
			cin>>depositeAmount;
			account.deposit(depositAmount);
			break;
			
			case 2:double withdrawAmount;
			cout<<"enter the ammount to withdraw:"<<endl;
			cin>> withdrawAmount;
			account.withdraw(withdrawAmount);
			break;
			
			case 3:
				account.displaydetails();
				break;
				
		    case 4:
		    	return 0;
		    
		    default:
		    	cout<<"invalid choice";
		}
	}
		
}
