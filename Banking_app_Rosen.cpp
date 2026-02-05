#include <iostream>
using namespace std;

int main() {
	string username;
	int password;
	string user1 = "user1"; //pasword 1234
	string user2 = "user2"; //pasword 5678
	int user1_password = 1234 ;
	int user2_password = 5678 ;
	cout << " Enter username: ";
	cin >> username;
	cout << endl;
	if (username == user1)
	{
		cout << " Enter password: ";
		cin >> password; 
		cout << "\033[A\033[2K";
		cout << "****";
		cout << endl;
		
		if (password == user1_password)
		{
			
			cout << " Welcome User1! " << endl;
			cout << endl;
			int balance = 1000 ;
			cout << " Balance:  " ;
			cout << balance << " Euro" << endl;
			cout << " Transaction history: None " << endl;
			int withdraw;
			cout << "Withdraw: " ;
			cin >> withdraw;
			cout << endl;
			if (withdraw > 0 && withdraw < balance )
			{
				cout << " Pls enter your pasword again: ";
				cin >> password;
				cout << "\033[A\033[2K";
				cout << "****";
				cout << endl;
				
				cout << endl;
				if (password == user1_password)
				{
					cout << endl;
					cout << " User1" << endl;
					cout << " Withdrawn successfully! " << endl;
					cout << "Transaction history: ";
					cout << "-" << withdraw << endl;
					cout << " New balance is: ";
					cout << balance - withdraw << " Euro" << endl;
					cout << endl;
					cout << "Thank you for using our banking app!" << endl;
					cout << endl;
				}

				else
				{
					cout << " Incorrect password! " << endl;
					return 0;
				}
			}
			else
			{
				cout << " Insufficient balance! " << endl;
				return 0;
			}

		}
		else
		{	cout << " Incorrect password! " << endl;
		return 0;
		}
	}
	else if ( username ==user2) // user 2 ne raboti!
	{
		cout << " Enter password: ";
		cin >> password;
		cout << "\033[A\033[2K";
		cout << "****";
		cout << endl;

		if (password ==user2_password)
		{
			cout << " Welcome User2 ! " << endl;
			cout << endl;
			int balance = 1200;
			cout << "Balance:  ";
			cout << balance << " Euro" << endl;
			cout << " Transaction history: None" << endl;
			int withdraw;
			cout << "Withdraw: " ;
			cin >> withdraw;
			cout << endl;
			if (withdraw > 0 && withdraw < balance)
			{
				cout << " Pls enter your pasword again: ";
				cin >> password;
				if (password == user2_password)
				{
					cout << " User2";
					cout << endl;
					cout << " Withdrawn successfully! " << endl;
					cout << "Transaction history: ";
					cout << "-" << withdraw << endl;
					cout << " New balance is: ";
					cout << balance - withdraw << " Euro" << endl;
					cout << endl;
					cout << "Thank you for using our banking app !" << endl;
					cout << endl;
				}
				else
				{
					cout << " Incorrect password! " << endl;
					return 0;
				}
			}
			else
			{	cout << " Insufficient balance! " << endl;
			return 0;
			}
		       
		}
	    else
	    {
		cout << " Incorrect password! " << endl;
		return 0;
	    }
	}
	else
	{
		cout << " Incorrect username! " << endl;
		
	}

}