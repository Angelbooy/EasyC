/*
This program was made by Aiden#6538 for 1nferios#0001 to learn
*/

#include <iostream> // Include this file so you can use cout/cin

#include <String.h> // Include this so we can make strings etc...

#include <Windows.h> // so we can set console title, this is also used in exploits 

#include <stdlib.h> // used so we can use system clear

// Above are the basic inclusions we needed

using namespace std; // this is important so we dont have to say std::cout << "hello" << std::endl; .. it waters it down to cout << "hello world" << endl; .
// std stand for standard not the std you were thinking of

/*
Operators / Data Types / statements we will be using
if/else -- for if / else statements
<< "for cout" -- printing
>> "for cin"  -- asking
string "for long words"
int "numbers and shit" -- main calls (for functions 99% of the time)
voids "functions" -- secondary calls(sencondary mainly)
*/

void welcome() { // you can change "welcome" to what ever you want
	cout << "Welcome to the game!" << endl;
}

int main() {
	string name; // your name, will be used at line 36
	string ans; // answer used at line 43
	
	SetConsoleTitle("What's your name?"); // sets the console title
	welcome();
	cout << "What is your name?"; // this time we use ";" because the cin doesnt like "<< endl;"
	cin >> name;
	cout << "Oh, what a nice name. Would you like to be friends " << name << "?" << "Yes/No" << endl;
	// so this is a big one, were printing "name" to the input..
	// so for instance if you put it as wioufhwufw it will say Oh what a nice name ..  wioufhwufw
	cin >> ans;
	if (ans == "Yes") { // in lua you dont have the brackets but it basically means then
		system("CLS"); // used to clear console
		cout << "Thank you friend!" << endl;
		system("PAUSE"); // used to pause the system so you can exit the program without it exiting its self
	}
	else {
		system("CLS"); // clear console
		cout << "Oh... okay" << endl;
		system("PAUSE");
	}
	
	//end in lua
	return 0; // returns nil
}