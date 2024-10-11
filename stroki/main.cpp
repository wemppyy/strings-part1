#include <iostream>

using namespace std;

void str_insert(char*& str, char symbol, int index) {
	int len = strlen(str);
	char* new_str = new char[len + 2];

	for (int i = 0; i < index; i++) {
		new_str[i] = str[i];
	}
	new_str[index] = symbol;
	for (int i = index; i < len; i++) {
		new_str[i + 1] = str[i];
	}
	new_str[len + 1] = '\0';
	delete[] str;
	str = new_str;
}

int main() {
	char* str = new char[100] { "Hello, World!" };
	cout << str << endl;

	int index;
	char symbol;

	cout << "Enter index: ";
	cin >> index;
	cout << "Enter symbol: ";
	cin >> symbol;

	str_insert(str, symbol, index);
	cout << str << endl;

	delete[] str;

	return 0;
}