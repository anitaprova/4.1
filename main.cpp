/*
 * Author: Anita Prova
 * Course: CSCI-135
 * Instructor: Genady Maryash
 * Assignment: Homework E4.8
 * The program prints the characters of a string on separate lines. 
 * */

#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "Enter a string: ";
	string str;
	cin >> str;

	for (int i = 0; i < str.length(); i++) {
		cout << str[i] << endl;
	}

	return 0;
}
