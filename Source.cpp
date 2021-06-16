#include <iostream>
#include <string>
using namespace std;
struct date {
	int day;
	int month;
	int year;
};
struct line_info {
	string mob_num;
	date start_date;
	date renewal_date;
};
struct user_data {
	int id;
	string email;
	string name;
	string password;
	string address;
};
user_data user[2];
line_info info[3];
int lines_num; // the number of lines that the user have 
int number; // the number of the package that the user choose 
int choice; // the choice of the package type that the user choose 
int option1;
int option2;
float b; // put the new balance in this variable 
float balance1; // refer to balance variable 
float balance2; // refer to b variable 
float balance3; // refer to user1_balance 
float Get_Data(user_data arr[], int size, float &user1_balance);
void Line_Data(line_info info[], int s, float &b);
float Recharge(float &balance);
float Package_Type(float &balance, float &b);
void Call(float &balance, float &b);
void Transfer(float &user1_balance, float b);
int main()
{
	cout << "1- Create an account" << endl;
	cout << "2- No,thanks " << endl;
	cin >> option1;
	if (option1 == 1) {
		cout << "*************************************" << endl;
		cout << "  Welcome to telecom company system" << endl;
		cout << "*************************************" << endl;
		Get_Data(user, 2, balance3);
	}
	else if (option1 == 2) {
		cout << "Cancel..." << endl;
	}
	else {
		cout << "Sorry, you can't reach our system " << endl;
		system("pause");
	}
}
void Call(float &balance, float &b)
{
	Recharge(balance1);
	Package_Type(balance1, balance2);
	int option3;
	cout << "****************************************" << endl;
	cout << "Do you want to make a call or message ? " << endl;
	cout << "1- Call " << endl;
	cout << "2- Message " << endl;
	cout << "3- Cancel " << endl;
	cin >> option3;
	if (option3 == 1) {
		if (b == 0) {
			cout << "*************************************************************" << endl;
			cout << "Sorry, you can't make a call " << endl;
			cout << "Your balance is : " << b << " L.E" << endl;
		}
		else {
			cout << "*************************************************************" << endl;
			cout << "Calling...." << endl;
			b -= 0.25;
			cout << "Your balance now is : " << b << " L.E" << endl;
		}
	}
	else if (option3 == 2) {
		if (b == 0) {
			cout << "*************************************************************" << endl;
			cout << "Sorry, you can't make a message " << endl;
			cout << "Your balance is : " << b << " L.E" << endl;
		}
		else {
			cout << "*************************************************************" << endl;
			cout << "Messaging...." << endl;
			b -= 0.25;
			cout << "Your balance now is : " << b << " L.E" << endl;
		}
	}
	else if (option3 == 3) {
		cout << "*************************************************************" << endl;
		cout << "Canceling..." << endl;
		cout << "Your balance now is : " << b << " L.E" << endl;
	}
	else {
		cout << "*************************************************************" << endl;
		cout << "Okay.." << endl;
	}
	Transfer(balance3, balance2);
}
float Package_Type(float &balance, float &b)
{
	int code;
	bool checker2 = false;
	cout << "****************************************" << endl;
	cout << "Enter 888 to choose your package  " << endl;
	do {
		cin >> code;
		if (code == 888) {
			cout << "****************************************" << endl;
			cout << "Choose your package type : " << endl;
			cout << "1- Flexat " << endl;
			cout << "2- Bakat Net " << endl;
			cin >> choice;
			if (choice == 1) {
				cout << "****************************************" << endl;
				cout << "1- Flex 20 it gives you 550 Flex " << endl;
				cout << "2- Flex 30 it gives you 1100 Flex " << endl;
				cout << "3- Flex 50 it gives you 2200 Flex " << endl;
				cout << "4- Flex 70 it gives you 3300 Flex " << endl;
				cout << "5- Flex 90 it gives you 4400 Flex " << endl;
				cout << "****************************************" << endl;
				cout << "Enter the number of package that you choose : ";
				cin >> number;
				if (number == 1) {
					if (balance >= 20) {
						cout << "*************************************************************" << endl;
						cout << "You are now on Flex 20 package and have 550 Flex" << endl;
						b = balance - 20;
						cout << "Your balance now is " << b << " L.E" << endl;
					}
					else {
						cout << "*************************************************************" << endl;
						cout << "Sorry, your balance isn't enough to be on this package " << endl;
						b = balance;
						cout << "Your balance is : " << b << " L.E" << endl;
						cout << "*************************************************************" << endl;
					}
					checker2 = true;
				}
				else if (number == 2) {
					if (balance >= 30) {
						cout << "*************************************************************" << endl;
						cout << "You are now on Flex 30 package and have 1100 Flex" << endl;
						b = balance - 30;
						cout << "Your balance now is " << b << " L.E" << endl;
					}
					else {
						cout << "*************************************************************" << endl;
						cout << "Sorry, your balance isn't enough to be on this package " << endl;
						b = balance;
						cout << "Your balance is : " << b << " L.E" << endl;
						cout << "*************************************************************" << endl;
					}
					checker2 = true;
				}
				else if (number == 3) {
					if (balance >= 50) {
						cout << "*************************************************************" << endl;
						cout << "You are now on Flex 50 package and have 2200 Flex" << endl;
						b = balance - 50;
						cout << "Your balance now is " << b << " L.E" << endl;
						cout << "*************************************************************" << endl;
					}
					else {
						cout << "*************************************************************" << endl;
						cout << "Sorry, your balance isn't enough to be on this package " << endl;
						b = balance;
						cout << "Your balance is : " << b << " L.E" << endl;
						cout << "*************************************************************" << endl;
					}
					checker2 = true;
				}
				else if (number == 4) {
					if (balance >= 70) {
						cout << "*************************************************************" << endl;
						cout << "You are now on Flex 70 package and have 3300 Flex" << endl;
						b = balance - 70;
						cout << "Your balance now is " << b << " L.E" << endl;
						cout << "*************************************************************" << endl;
					}
					else {
						cout << "*************************************************************" << endl;
						cout << "Sorry, your balance isn't enough to be on this package " << endl;
						b = balance;
						cout << "Your balance is : " << b << " L.E" << endl;
						cout << "*************************************************************" << endl;
					}
					checker2 = true;
				}
				else if (number == 5) {
					if (balance >= 90) {
						cout << "*************************************************************" << endl;
						cout << "You are now on Flex 90 package and have 4400 Flex" << endl;
						b = balance - 90;
						cout << "Your balance now is " << b << " L.E" << endl;
					}
					else {
						cout << "*************************************************************" << endl;
						cout << "Sorry, your balance isn't enough to be on this package " << endl;
						b = balance;
						cout << "Your balance is : " << b << " L.E" << endl;
						cout << "*************************************************************" << endl;
					}
					checker2 = true;
				}
				else {
					cout << "*************************************************************" << endl;
					cout << "You didn't choose any package type " << endl;
					b = balance;
					cout << "Your balance is : " << b << endl;
					cout << "*************************************************************" << endl;
					checker2 = true;
				}
			}
			else if (choice == 2) {
				cout << "*************************************************************" << endl;
				cout << "1- Package 10 L.E it gives 500 Mega" << endl;
				cout << "2- Package 20 L.E it gives you 1100 Mega" << endl;
				cout << "3- Package 30 L.E it gives you 1800 Mega" << endl;;
				cout << "4- Package 40 L.E it gives you 2500 Mega" << endl;
				cout << "5- Package 60 L.E it gives you 4000 Mega" << endl;
				cout << "6- Package 80 L.E it gives you 6000 Mega" << endl;
				cout << "7- Package 100 L.E it gives you 8000 Mega" << endl;
				cout << "****************************************" << endl;
				cout << "Enter the number of package that you choose : ";
				cin >> number;
				if (number == 1) {
					if (balance >= 10) {
						cout << "*************************************************************" << endl;
						cout << "You are now on 10 L.E package and have 500 Mega" << endl;
						b = balance - 10;
						cout << "Your balance now is " << b << " L.E" << endl;
					}
					else {
						cout << "*************************************************************" << endl;
						cout << "Sorry, your balance isn't enough to be on this package " << endl;
						b = balance;
						cout << "Your balance is : " << b << " L.E" << endl;
						cout << "*************************************************************" << endl;
					}
					checker2 = true;
				}
				else if (number == 2) {
					if (balance >= 20) {
						cout << "*************************************************************" << endl;
						cout << "You are now on 20 L.E package and have 1100 Mega" << endl;
						b = balance - 20;
						cout << "Your balance now is " << b << " L.E" << endl;
					}
					else {
						cout << "*************************************************************" << endl;
						cout << "Sorry, your balance isn't enough to be on this package " << endl;
						b = balance;
						cout << "Your balance is : " << b << " L.E" << endl;
						cout << "*************************************************************" << endl;
					}
					checker2 = true;
				}
				else if (number == 3) {
					if (balance >= 30) {
						cout << "*************************************************************" << endl;
						cout << "You are now on 30 L.E package and have 1800 Flex" << endl;
						b = balance - 30;
						cout << "Your balance now is " << b << " L.E" << endl;
						cout << "*************************************************************" << endl;
					}
					else {
						cout << "*************************************************************" << endl;
						cout << "Sorry, your balance isn't enough to be on this package " << endl;
						b = balance;
						cout << "Your balance is : " << b << " L.E" << endl;
						cout << "*************************************************************" << endl;
					}
					checker2 = true;
				}
				else if (number == 4) {
					if (balance >= 40) {
						cout << "*************************************************************" << endl;
						cout << "You are now on 40 L.E package and have 2500 Flex" << endl;
						b = balance - 40;
						cout << "Your balance now is " << b << " L.E" << endl;
						cout << "*************************************************************" << endl;
					}
					else {
						cout << "*************************************************************" << endl;
						cout << "Sorry, your balance isn't enough to be on this package " << endl;
						b = balance;
						cout << "Your balance is : " << b << " L.E" << endl;
						cout << "*************************************************************" << endl;
					}
					checker2 = true;
				}
				else if (number == 5) {
					if (balance >= 60) {
						cout << "*************************************************************" << endl;
						cout << "You are now on 60 L.E package and have 4000 Flex" << endl;
						b = balance - 60;
						cout << "Your balance now is " << b << " L.E" << endl;
					}
					else {
						cout << "*************************************************************" << endl;
						cout << "Sorry, your balance isn't enough to be on this package " << endl;
						b = balance;
						cout << "Your balance is : " << b << " L.E" << endl;
						cout << "*************************************************************" << endl;
					}
					checker2 = true;
				}
				else if (number == 6) {
					if (balance >= 80) {
						cout << "*************************************************************" << endl;
						cout << "You are now on 80 L.E package and have 6000 Flex" << endl;
						b = balance - 80;
						cout << "Your balance now is " << b << " L.E" << endl;
					}
					else {
						cout << "*************************************************************" << endl;
						cout << "Sorry, your balance isn't enough to be on this package " << endl;
						b = balance;
						cout << "Your balance is : " << b << " L.E" << endl;
						cout << "*************************************************************" << endl;
					}
					checker2 = true;
				}
				else if (number == 7) {
					if (balance >= 100) {
						cout << "*************************************************************" << endl;
						cout << "You are now on 100 L.E package and have 8000 Flex" << endl;
						b = balance - 100;
						cout << "Your balance now is " << b << " L.E" << endl;
					}
					else {
						cout << "*************************************************************" << endl;
						cout << "Sorry, your balance isn't enough to be on this package " << endl;
						b = balance;
						cout << "Your balance is : " << b << " L.E" << endl;
						cout << "*************************************************************" << endl;
					}
					checker2 = true;
				}
				else {
					cout << "*************************************************************" << endl;
					cout << "You didn't choose any package type " << endl;
					b = balance;
					cout << "Your balance is : " << b << endl;
					cout << "*************************************************************" << endl;
					checker2 = true;
				}
			}

		}
		else {
			cout << "*************************************************************" << endl;
			cout << "Please enter 888 to choose  your package type" << endl;
		}
	} while (!checker2);
	return b;
	return balance;
}
float Recharge(float &balance)
{
	balance = 50;
	int ser_num;
	bool checker = false;
	cout << "Recharge your balance : " << endl;
	cout << "1- To recharge 10 L.E enter 11110 " << endl;
	cout << "2- To recharge 20 L.E enter 22220 " << endl;
	cout << "3- To recharge 30 L.E enter 33330 " << endl;
	cout << "4- To recharge 40 L.E enter 44440 " << endl;
	cout << "5- To recharge 50 L.E enter 55550 " << endl;
	cout << "6- To recharge 100 L.E enter 10000 " << endl;
	do {
		cout << "Enter card serial number : ";
		cin >> ser_num;
		if (ser_num == 11110) {
			balance += 10;
			cout << "*************************************************************" << endl;
			cout << "Your balance is : " << balance << " L.E" << endl;
			checker = true;
		}
		else if (ser_num == 22220) {
			balance += 20;
			cout << "*************************************************************" << endl;
			cout << "Your balance is : " << balance << " L.E" << endl;
			checker = true;
		}
		else if (ser_num == 33330) {
			cout << "*************************************************************" << endl;
			balance += 30;
			cout << "Your balance is : " << balance << " L.E" << endl;
			checker = true;
		}
		else if (ser_num == 44440) {
			balance += 40;
			cout << "*************************************************************" << endl;
			cout << "Your balance is : " << balance << " L.E" << endl;
			checker = true;
		}
		else if (ser_num == 55550) {
			balance += 50;
			cout << "*************************************************************" << endl;
			cout << "Your balance is : " << balance << " L.E" << endl;
			checker = true;
		}
		else if (ser_num == 10000) {
			balance += 100;
			cout << "*************************************************************" << endl;
			cout << "Your balance is : " << balance << " L.E" << endl;
			checker = true;
		}
		else {
			cout << "*************************************************************" << endl;
			cout << "Invalid card number " << endl;
			cout << "Please re-enter a valid card number " << endl;
			cout << "*************************************************************" << endl;
		}
	} while (!checker);
	return balance;
}
float Get_Data(user_data arr[], int size, float &user1_balance)
{
	arr[0].id = 1;
	arr[0].email = "Mark @ gmail.com";
	arr[0].name = "Mark";
	arr[0].password = "1234";
	arr[0].address = "4 nozha cairo";
	user1_balance = 100;
	cout << "User 1 data is  " << endl;
	cout << "Id : " << arr[0].id << endl;
	cout << "E-mail : " << arr[0].email << endl;
	cout << "Name : " << arr[0].name << endl;
	cout << "Password : " << arr[0].password << endl;
	cout << "Address : " << arr[0].address << endl;
	cout << "Balance is : " << user1_balance << endl;
	cout << "*************************************" << endl;
	cout << "Enter user 2 data ,please " << endl;
	cout << "Id : ";
	cin >> arr[1].id;
	cout << "E-mail : ";
	cin >> arr[1].email;
	cout << "Name : ";
	cin >> arr[1].name;
	cout << "Password : ";
	cin >> arr[1].password;
	cout << "Address : ";
	cin >> arr[1].address;
	cout << "*************************************" << endl;
	cout << "Do you log in ? " << endl;
	cout << "1- Yes " << endl;
	cout << "2- No" << endl;
	cin >> option2;
	if (option2 == 1) {
		cout << "Welcome to your account " << endl;
		cout << "We give you 50 L.E as a present " << endl;
		Line_Data(info, 3, balance2);
	}
	else if (option2 == 2) {
		string username;
		string password;
		bool login_success = false;
		do {
			cout << "Please enter your username and password" << endl;
			cout << "username : ";
			cin >> username;
			cout << "password : ";
			cin >> password;
			if (username == arr[1].name && password == arr[1].password) {
				cout << "*************************************" << endl;
				cout << "Succsseful login " << endl;
				cout << "Welcome to your account " << endl;
				cout << "We give you 50 L.E as a present " << endl;
				cout << "*************************************" << endl;
				login_success = true;
			}
			else {
				cout << "Incorrect username or password " << endl;
				cout << "Please try again " << endl;
			}
		} while (!login_success);
		Line_Data(info, 3, balance2);

	}
	return user1_balance;
}
void Line_Data(line_info info[], int s, float &b)
{
	cout << "*************************************" << endl;
	cout << "How much lines do you have ? (1,2,3)" << endl;
	cin >> lines_num;
	if (lines_num > 0 && lines_num < 4) {
		for (int y = 0; y < lines_num; y++) {
			cout << "*************************************" << endl;
			cout << "Enter your mobile number : ";
			cin >> info[y].mob_num;
			cout << "*************************************" << endl;
			info[y].start_date.day = 7;
			info[y].start_date.month = 6;
			info[y].start_date.year = 2020;
			cout << "Your line start date is : ";
			cout << info[y].start_date.day << " / " << info[y].start_date.month << " / " << info[y].start_date.year << endl;
			info[y].renewal_date.day = 7;
			info[y].renewal_date.month = 6;
			info[y].renewal_date.year = 2021;
			cout << "Your line renewal date is : ";
			cout << info[y].renewal_date.day << " / " << info[y].renewal_date.month << " / " << info[y].renewal_date.year << endl;
			cout << "*************************************" << endl;
			Call(balance1, balance2);
			int option4;
			int number2;
			int choice2;
			bool checker3 = false;
			string mobile_num;
			do {
				cout << "Please enter your mobile number to change or renew your package type : ";
				cin >> mobile_num;
				if (mobile_num == info[y].mob_num) {
					cout << "****************************************" << endl;
					cout << "Do you want to renew or change your package type ? " << endl;
					cout << "1- Change package type " << endl;
					cout << "2- Renew my package type " << endl;
					cout << "3- Cancel " << endl;
					cin >> option4;
					if (option4 == 1) {
						cout << "****************************************" << endl;
						cout << "Please choose the package type that you want  " << endl;
						Package_Type(balance1, balance2);
						checker3 = true;
					}
					else if (option4 == 2) {
						cout << "Please enter number of your package type " << endl;
						bool checker4 = false;
						do {
							cin >> choice2;
							cin >> number2;
							if (choice2 == choice && number2 == number) {
								if (b >= 50) // the balance must be bigger than or equal 50 to renew the package 
								{
									cout << " Your package successfully renewed " << endl;
									checker4 = true;
								}
								else {
									cout << "Sorry, you can't renew your package" << endl;
									cout << "Your balance is : " << b << endl;
								}
							}
							else {
								cout << "Sorry, you can't renew your package" << endl;
								cout << "Your balance is : " << b << endl;
								cout << "Please enter number of your package type " << endl;
							}
							checker3 = true;
						} while (!checker4);
					}

					else {
						cout << "Cancel..." << endl;
						checker3 = true;
					}
				}
				else {
					cout << "Sorry you can't change or renew without entering your mobile number" << endl;
				}
			} while (!checker3);
		}
	}
	else {
		cout << "*************************************" << endl;
		cout << "Sorry, you can't have more than 3 lines " << endl;
		cout << "*************************************" << endl;
	}
}
void Transfer(float &user1_balance, float b)
{
	cout << "*************************************" << endl;
	cout << "Do you want to transfer balance from user 1 to user 2 " << endl;
	cout << "1- Yes " << endl;
	cout << "2- No " << endl;
	float transfer_balance;
	int c;
	cin >> c;
	if (c == 1) {
		cout << "Enter the amount of money that you want to transfer :  ";
		cin >> transfer_balance;
		if (user1_balance > 0 && transfer_balance <= user1_balance)
		{
			user1_balance -= transfer_balance;
			b += transfer_balance;
			cout << "User1 balance now is : " << user1_balance << endl;
			cout << "User 2 balance now is : " << b << endl;
		}
		else {
			cout << "Sorry user 1 doesn't have enough money to transfer balance for you " << endl;
			cout << "***************************************************************" << endl;
		}
	}
	else {
		cout << " Thanks for using our system " << endl;
		cout << "*************************************" << endl;
	}
}


