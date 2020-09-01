#include <iostream>
#include <string>
#include <conio.h>
#include <limits>

int age;
char initial;
std::string Fullname = "";
int long phone;


int main()
{
	std::cout << "Hello there! May I inquire your full name?\n";
	std::cout << "Full name: ";
	std::getline(std::cin, Fullname);


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
	std::cin >> phone;

	std::cout << "\nCool. Cool cool cool. \n\nI definitely won't share your phone number " << phone << " with the chinese government...\n\n";

	std::cout << "Say, when is your birthday, " << Fullname << "? \nNot that I need it for anything non-suspicious...";




	std::cout << "\n\n\nPress any key to exit, " << Fullname << "!";
	char heyo = _getch();
}

