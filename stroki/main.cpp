#include <iostream>

using namespace std;

void remove_symbol(char*& str, char symbol) {
	int len = strlen(str);
	char* new_str = new char[len + 1];

	int j = 0;  // Индекс для новой строки
	for (int i = 0; i < len; i++) {
		if (str[i] != symbol) {
			new_str[j] = str[i];
			j++;
		}
	}

	new_str[j] = '\0';

	delete[] str;
	str = new_str;
}

int main() {
	char* str_p = new char[100] {"Hello World"};
	cout << str_p << endl;
	remove_symbol(str_p, 'o');
	cout << str_p << endl;
	return 0;
}