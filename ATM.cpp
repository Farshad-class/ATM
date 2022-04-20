#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <math.h>
#pragma warning(disable : 4996)
using namespace std;
string name, family, Cardnumber, ca;
int balance, cardpass, pass, pass1, pass2;
int a, b, k, en, ex;
void mojodi1();
void menu1();
void checkpass();
void fill1();
void enteghalVajh1();
void taghirramz1();
void exit();
int main()
{
	fill1();
	return 0;
	getch();
}

void menu1()
{
	cout << "Welcome " << name << " " << family << "\n";
	cout << "1. mojodi            2. enteghal Vajh \n";
	cout << "3. taghir ramz       4.exit \n";
	cout << "Shomare mored nazar ra entekhab konid  :";
	cin >> a;
	if (a == 1)
	{
		mojodi1();
	}
	else if (a == 2)
	{
		enteghalVajh1();
	}
	else if (a == 3)
	{
		taghirramz1();
	}
	else if (a == 4)
	{
		exit();
	}


}

void mojodi1()
{
	cout << "Mojodi shoma :" << balance << "IRR" << "\n";
	cout << "baraya bazgasht kelid 5 ra vared konid:";
	cin >> k;
	if (k == 5)
	{
		menu1();
	}
	else
		do {
			cout << "baraya bazgasht kelid 5 ra vared konid:";
			cin >> k;
			if (k == 5)
			{
				menu1();
				break;
			}
		} while (k != 5);
}





void checkpass()
{
	int j = 0;
	{
		cout << "Please enter your card pass : ";
		cin >> pass;
		if (pass != cardpass)
		{
			cout << "You enter mistake more than 1 times. " << endl;
			for (int j = 2;j <= 3;j++)
			{
				cout << "Please enter your card pass : ";
				cin >> pass;
				if (pass != cardpass)
				{
					cout << "You enter mistake " << j << " times." << endl;
				}
				else
				{
					menu1();
					break;
				}
				if (j == 3)
				{
					cout << "You enter mistake more than" << j << " times. Your Card is blocked" << endl;
				}
			}
		}
		else
		{
			menu1();
		}

	}
}
void enteghalVajh1()
{
	cout << "Please enter amount for transfer : ";
	cin >> en;
	if (en > balance)
	{
		cout << "Your request amount more than your balance " << endl;
	}
	else
	{
		cout << "Please enter new card :" << endl;
		cin >> ca;
		if (ca.length() != 16)
		{
			cout << "your card number is not correct";
			cout << "Please enter new card :" << endl;
			cin >> ca;
		}
		else
		{
			balance -= en;
			cout << en << " IRR successfully transfer" << endl;
			cout << " Source card :" << Cardnumber << endl;
			cout << " Destination card :" << ca << endl;
			cout << " Your balance :" << balance << endl;
			cout << "baraya bazgasht kelid 5 ra vared konid:";
			cin >> k;
		}
		if (k == 5)
		{
			menu1();
		}
		else
			do {
				cout << "baraya bazgasht kelid 5 ra vared konid:";
				cin >> k;
				if (k == 5)
				{
					menu1();
					break;
				}
			} while (k != 5);



	}
}
void taghirramz1()
{
	cout << "Please enter your current password";
	cin >> pass;
	if (pass != cardpass)
	{
		cout << "You enter pass is incorrect  " << endl;
		do {
			cout << "baraya bazgasht kelid 5 ra vared konid:";
			cin >> k;
			if (k == 5)
			{
				menu1();
				break;
			}
		} while (k != 5);
	}
	else
	{
		cout << "Please enter your new password";
		cin >> pass1;
		cout << "Please enter your new password again";
		cin >> pass2;
		if (pass1 != pass2)
		{
			cout << "your eneterd pass not match" << endl;
			do {
				cout << "baraya bazgasht kelid 5 ra vared konid:";
				cin >> k;
				if (k == 5)
				{
					menu1();
					break;
				}
			} while (k != 5);
		}
		else
		{
			cardpass = pass1;
			cout << "Your password change successfully" << endl;
			checkpass();


		}
	}

}
void exit()
{
	if (a == 4)
	{
		cout << "Thanks you and good bye";
	}
}

void fill1()
{
	name = "farshad";
	family = "kazempour";
	Cardnumber = "6219861525252525";
	balance = 1000000000;
	cardpass = 1489;
	checkpass();
}

