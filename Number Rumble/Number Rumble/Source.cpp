#include<iostream>
#include<ctime>
using namespace std;
int main()
{
	int number;
	
	
	while(true)
	{
		try
		{
			cout << "\t\t\t\t\t Welcome to Number Rumble" << endl<<endl;
			cout << "\t\t\t\t\t\t Instructions\n" << endl;
			cout << "In this game, you have to guess the number between 0 and 15 and check if it is correct or not\n\n";
			cout << "Enter a number: ";
			cin >> number;
			if (cin.fail())
			{
				throw "Invalid input. Please enter a valid number.";
			}
			if (number < 0 || number>15)
			{
				cout<< "Please enter a valid number.You can enter a number between 0 and 15\n";
				system("pause");
				system("cls");
				continue;
			}

			srand(time(0));
			int random = rand() % 16;
			if (number == random)
			{
				cout << "Hurrah! you have guessed a number\n";
				cout << "Number : " << number << endl;
				system("pause");
				return false;
				exit(0);
			}
			else
			{
				cout << "Try again :(\n";
				cout << "The number was : " << random << endl;
				system("pause");
				system("cls");
				
			}

		}
		catch (const char* e)
		{
			cout << "Error: " << e << endl;
			cin.clear();
			cin.ignore();
			system("pause");
			system("cls");
			
		}
	}
	return 0;
}