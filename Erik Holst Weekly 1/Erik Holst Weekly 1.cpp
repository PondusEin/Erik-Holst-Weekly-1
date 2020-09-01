//This code was done in cooperation of Sten Rune Lyngmo and Adrian Drevland.

#include <iostream>
#include <string>
#include <conio.h>
#include <limits>

int getintfromuser() {
	int integer;
	std::cin >> integer;
	while (std::cin.fail()) {
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max()), '\n';
		system("cls");
		std::cout << "That, my friend, is not a number...\n";
		std::cin >> integer;
	}
	return integer;
}

void task1()
{
	int age;
	char initial;
	std::string Fullname;
	long tlf;
	int BirthDay;
	int BirthMonth;
	int BirthYear;

	//input
	system("cls");
	std::cout << "Hello there! May I inquire your full name?\n";
	std::cout << "Full name: ";
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::getline(std::cin, Fullname);
	initial = Fullname[0];

	std::cout << "Nice meeting you, " << Fullname << "! \n\nHow old are you?\n";
	std::cout << "Age: ";
	std::cin >> age;

	while (std::cin.fail()) {
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		std::cout << "That, " << Fullname << ", is NOT a number..\n\n";
		std::cout << "How old are you? ";
		std::cin >> age;
		
	}
	std::cout << "Wow! You're " << age << " years old?\n";
		
		if (age >= 60) {
			std::cout << "You ARE really old!";
		}
		else if (age >= 40) {
			std::cout << "You are old!";
		}
		else if (age >= 20) {
			std::cout << "You're a grown up!";
		}
		else if (age < 20) {
			std::cout << "You're really young!";
		}
		else {
			std::cout << "You probably shouldn't be here. \nFuck off.";
		}

	std::cout << "\n\nWhat's your phone number " << Fullname <<"? Don't worry, I won't share it!\n";
	std::cout << "Phone number: ";
	std::cin >> tlf;

	std::cout << "\nCool. Cool cool cool. \n\nI definitely won't share your phone number " << tlf << " with the chinese government...\n\n";
	
	
		
	std::cout << "Say, when is your birthday, " << Fullname << "? \nNot that I need it for anything non-suspicious...\n";
	std::cout << "Year: ";
	std::cin >> BirthYear;

	std::cout << "Cool, what month are you born?\n";
	std::cout << "Month: ";
	std::cin >> BirthMonth;

	std::cout << "Wow, how interesting. What day?\n";
	std::cout << "Day: ";
	std::cin >> BirthDay;

	//output for task one
	system("cls");
	std::cout << "----------------------------------------------------\n";
	std::cout << "| Name: \t|" << Fullname << "\t" << std::endl;
	std::cout << "----------------------------------------------------\n";
	std::cout << "| Initial:\t|" << initial << "\t\t" << std::endl;
	std::cout << "----------------------------------------------------\n";
	std::cout << "| Age: \t\t|" << age << "\t\t" << std::endl;
	std::cout << "----------------------------------------------------\n";
	std::cout << "| Phone: \t|" << tlf << "\t" << std::endl;
	std::cout << "----------------------------------------------------\n";
	std::cout << "| Birthday:\t|" << BirthDay << "/" << BirthMonth << "/" << BirthYear << "\t"<< std::endl;
	std::cout << "----------------------------------------------------\n";

	std::cout << "\n\n\nPress any key to continue to another task, " << Fullname << "!";
	char heyo = _getch();
}

void task2() {
	std::string name;
	int age;
	bool answer = false;
	char YN = '0';

	system("cls");
	std::cout << "What is your name again?\n";
	std::cin >> name;

	system("cls");
	std::cout << "Right, right... and how old are you again?\n";
	std::cin >> age;

	system("cls");
	std::cout << "Cool Cool... Do you drink coffee?\n Y/N";
	YN = _getch();
}

void task3() {

}

void task4() {

}

void task5() {

}

int main() {
	bool complete1 = false;
	bool complete2 = false;
	bool complete3 = false;
	bool complete4 = false;
	bool complete5 = false;


	start:
	system("cls");
	std::cout << "This is Erik Holst's assignment Weekly 1.\n";
	std::cout << "It contaions 5 tasks.\n";
	std::cout << "To chose a task, type a number between 1 and 5, then press enter.\n";

choice:
	if (complete1 && complete2 && complete3 && complete4 && complete5) {
		system("cls");
		std::cout << "You are done!\n\n\n\n Now go away.";
		_getch();
	}
	else {
		int choice = getintfromuser();
		if (choice == 1) {
			task1();
			complete1 = true;
		}
		else if (choice == 2) {
			task2();
			complete2 = true;
		}
		else if (choice == 3) {
			task3();
			complete3 = true;
		}
		else if (choice == 4) {
			task4();
			complete4 = true;
		}
		else if (choice == 5) {
			task5();
			complete5 = true;
		}
		else {
			system("cls");
			std::cout << "Really? You can't type a number between 1 and 5?\n\n";
			std::cout << "Type a number between 1 and 5, then press enter.\n";
			goto choice;
		}
		goto start;
	}
	
}