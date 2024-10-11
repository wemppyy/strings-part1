#include <iostream>

using namespace std;

int get_symbol_count(char* str, char symbol) {
	int count = 0;
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] == symbol) {
			count++;
		}
	}
	return count;
}

int main() {
	int len;
	cout << "Enter the length of the string: ";
	cin >> len;

	char* str = new char[len + 1];
	cout << "Enter the string: ";
	cin >> str;

	char symbol;
	cout << "Enter the symbol: ";
	cin >> symbol;

	system("pause");

	cout << "The symbol " << symbol << " is found " << get_symbol_count(str, symbol) << " times in the string." << endl;

	return 0;
}