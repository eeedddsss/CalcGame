#include<iostream>
#include<cmath> 
#include <cstdlib> 
#include <ctime> 
#include <iostream>
#include <windows.h>

using namespace std;

	int main()
	{
		//Game - program to show sets of randomly chosen math problems where as you keep answering them correctly
		//more problems will keep appearing at a higher dificulty rate. You only can miss 3 problems before game is over.
		//Program keeps track of correct answers and also keeps time as the goal is to answer the questions given within the aloted time (TBD)

		//initialize random - time - numbers:
		srand(time(NULL));

		int level = 0;
		int ans;
		int counterPositive = 5;
		int counterNegative = 3;

		cout << "Welcome to the math chalenge 5000 - where life is not only hell, but math is too!" << endl;
		cout << "Please select difficulty level. Number one being easy and five being hard " << endl;
		cout << "level 1 - Add" << endl;
		cout << "level 2 - Subtract" << endl;
		cout << "level 3 - Multiply" << endl;
		cout << "level 4 - Devide" << endl;
		cout << "level 5 - Surprise" << endl;
		cin >> level; // Level chosen by user

		if (level >= 6 || level < 0)
		{
			cout << "incorrect entry, please try again and select a number from 1 to 5 ONLY!!!!!!" << endl;
			cout << "Please select difficulty level. Number one being easy and five being hard ";	
		} 
		
		cout << "level entered: " << level << endl;

		while (level == 1)

		{
			int random1 = rand() % 100; // random number 1
			int random2 = rand() % 100 + 45; // random number 2	

			cout << "What is " << random1 << " + " << random2 << "? ";
			cin >> ans;
			cout << "Correct answer is: " << random1 + random2 << endl;

			if ((ans == random1 + random2))
			{
				cout << "C O N G R A T S!" << endl;
				counterPositive--;
				cout << "You have " << counterPositive << " tries left" << endl;
			}
			else
			{
				cout << "Wrong answer, please try again" << endl;
				counterNegative--;
				cout << "You have " << counterNegative << " tries left" << endl;
			}
			if (counterNegative == 0)
				cout << "G A M E ----- O V E R " << endl;
		}

		while (level == 2)

		{
			int random1 = rand() % 100; // random number 1
			int random2 = rand() % 100 + 45; // random number 2	

			cout << "What is " << random1 << " - " << random2 << "? ";
			cin >> ans;
			cout << "Correct answer is: " << random1 - random2 << endl;

			if ((ans == random1 - random2))

			{
				cout << "C O N G R A T S!" << endl;
				counterPositive--;
				cout << "You have " << counterPositive << " tries left" << endl;

			}
			else
			{
				cout << "Wrong answer, please try again" << endl;
				counterNegative--;
				cout << "You have " << counterNegative << " tries left" << endl;
			}
			if (counterNegative == 0)
				cout << "G A M E ----- O V E R " << endl;

		}

		while (level == 3)

		{
			int random1 = rand() % 100 / 10; // random number 1
			int random2 = rand() % 100 + 56 / 10; // random number 2	

			cout << "What is " << random1 << " * " << random2 << "? ";
			cin >> ans;
			cout << "Correct answer is: " << random1 * random2 << endl;

			if ((ans == random1 * random2))

			{
				cout << "C O N G R A T S!" << endl;
				counterPositive--;
				cout << "You have " << counterPositive << " tries left" << endl;

			}
			else
			{
				cout << "Wrong answer, please try again" << endl;
				counterNegative--;
				cout << "You have " << counterNegative << " tries left" << endl;
			}
			if (counterNegative == 0)
				cout << "G A M E ----- O V E R " << endl;
		}

		while (level == 4)
		{
			int random1 = rand() % 100 / 10 + 1; // random number 1
			int random2 = rand() % 100 / 10 + 1; // random number 2	

			cout << "What is " << random1 << " / " << random2 << "? ";
			cin >> ans;
			cout << "Correct answer is: " << random1 / random2 << endl;

			if ((ans == random1 / random2))

			{
				cout << "C O N G R A T S!" << endl;
				counterPositive--;
				cout << "You have " << counterPositive << " tries left" << endl;

			}
			else
			{
				cout << "Wrong answer, please try again" << endl;
				counterNegative--;
				cout << "You have " << counterNegative << " tries left" << endl;
			}
			if (counterNegative == 0)
				cout << "G A M E ----- O V E R " << endl;
		}
		while (level == 5)
		{
			int random1 = rand() % 100 + 76 / 10; // random number 1
			int random2 = rand() % 100; // random number 2	

			cout << "What is " << random1 << " % " << random2 << "? ";
			cin >> ans;
			cout << "Correct answer is: " << random1 % random2 << endl;

			if ((ans == random1 % random2))

			{
				cout << "C O N G R A T S!" << endl;
				counterPositive--;
				cout << "You have " << counterPositive << " tries left" << endl;

			}
			else
			{
				cout << "Wrong answer, please try again" << endl;
				counterNegative--;
				cout << "You have " << counterNegative << " tries left" << endl;
			}
			if (counterNegative == 0)
				cout << "G A M E ----- O V E R " << endl;
		}

		system("pause");

		return 0;

	}

