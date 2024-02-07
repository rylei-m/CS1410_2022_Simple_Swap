#include <iostream>
using std::cin;
using std::cout;
using namespace std;

int main() {
	// add a varable to hold first number
	// int a = 5, b = 6, c = hold;
	// cout << "a = " << a << ", b = " << b << endl;

	// add a varable to hold second number
	// ask user to input first number
	// get input
	// ask user for second number
	// get input
	// swap first number for second number
	// print to the console the new first number and return carriage tell the
	// user that this is the new first number print the new second number again
	// telling the used that it is the new second number

	int age, age2, hold;
	// double = age;
	// double = age2;
	// double = hold;

	{
		// int age = a;

		cout << "\nPlease input your age: ";
		cin >> age;
		cout << "\nYour age is " << age;
	}

	{
		// int age2 = b;
		cout << "\nPlease input another number: ";
		cin >> age2;
		cout << "\nYour second number is: " << age2;
	}

	{
		cout << "\na = " << age << ", b = " << age2 << endl;

		hold = age;
		age = age2;
		age2 = hold;

		cout << "\na = " << age << ", b = " << age2 << endl;
	}

	cout << "\nYour age is now: " << age;
	cout << "\nYou now have a cat that has an age of: " << age2;
}
