//This code was done in cooperation of Sten Rune Lyngmo, Mathian Fredriksen and Adrian Drevland.
#define NOMINMAX
#include <iostream>
#include <string>
#include <conio.h>
#include <limits>
#include <windows.h>
#include "Task_1.h"
#include "Task_2.h"
#include "Task_3.h"
#include "Task_4.h"
#include "Task_5.h"

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
	char YN = '0';
	system("cls");
	std::cout << "What is your name again?\n" << std::endl;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::getline(std::cin, name); 
	system("cls");
	std::cout << "Right, right... and how old are you again?\n";
	std::cin >> age2; //A bug seems to happen here when you've done task one. Giving you the age of 0 automatically.	
	system("cls");
	std::cout << "Cool Cool... Do you drink coffee?\n y/n: ";
	std::cin >> YN;
	if (YN == 'y') {
		answertext = "Seems you like coffee";
	}
	else if (YN == 'n') {
		answertext = "Oh, you don't like coffee?";
	}
	else {
		answertext = "You'll have water then!";
	}
	system("cls");
	std::cout << "Your name is: " << name << std::endl;
	std::cout << "You are " << age2 << " years old!" << std::endl;
	std::cout << answertext << std::endl;
	std::cout << "\n\n\nPress any key to continue to another task, " << name << "!";
	char heyo2 = _getch();
}

void task3() {
	system("cls");
	std::cout << "How old are you? \n";
	std::cout << "Age: ";
	std::cin >> age;
	//Output
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
	std::cout << "\n\n\nPress any key to continue to another task!";
	char heyo = _getch();
}


void task4() {
	//input
	system("cls");
	std::cout << "Hello again, what is your favourite drink? \n1. Coffee\n2. Tea\n3. Coca Cola" << std::endl;
	std::cin >> drink;
	if (drink == 1) {
		std::cout << "Coffee is delicious!\n\n";
	}
	else if (drink == 2) {
		std::cout << "Tea gives peace of mind!\n\n";
	}
	else if (drink == 3) {
		std::cout << "Coke will give you a white smile!\n\n";
	}
	else {
		system("cls");
		std::cout << "That's not on the list, so I'll get you some water!\n\n";
	}
	std::cout << "\n\n\nPress any key to continue to another task!";
	char heyo = _getch();
}

void task5() {
	system("cls");
	design += "      1   2   3   4   5   6    \n";
	design += "     --- --- --- --- --- ---   \n";
	design += " A  | * | * | * | * | * | * | A\n";
	design += "     --- --- --- --- --- ---   \n";
	design += " B  | * | * | * | * | * | * | B\n";
	design += "     --- --- --- --- --- ---   \n";
	design += " C  | * | * | * | * | * | * | C\n";
	design += "     --- --- --- --- --- ---   \n";
	design += " D  | * | * | * | * | * | * | D\n";
	design += "     --- --- --- --- --- ---   \n";
	design += "      1   2   3   4   5   6    \n";
	for (int i = 0; i < design.length(); i++)  //Warning: C4018
	{
		if (design.at(i) == '*')
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12); //Change text color to red
			std::cout << "*";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7); //Change text color to white
		}
		else
		{
			std::cout << design.at(i);
		}
	}
	std::cout << "\n\n\nPress any key to continue to another task!";
	char heyo = _getch();
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
	std::cout << "It contains 5 tasks.\n";
	std::cout << "To chose a task, type a number between 1 and 5, then press enter.\n";

choice:
	if (complete1 && complete2 && complete3 && complete4 && complete5) {
		system("cls");
		std::cout << "You are done!\n\n\n\nNow go away.";
		char heyo = _getch();
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