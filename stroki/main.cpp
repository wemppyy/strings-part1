#include <iostream>

using namespace std;

int get_nums_count(char* str) {
	int count = 0;
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] >= '0' && str[i] <= '9') {
			count++;
		}
	}
	return count;
}

int get_letters_count(char* str) {
	int count = 0;
	for (int i = 0; str[i] != '\0'; i++) {
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
			count++;
		}
	}
	return count;
}

int get_other_count(char* str) {
	int count = 0;
	for (int i = 0; str[i] != '\0'; i++) {
		if (!((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))) {
			count++;
		}
	}
	return count;
}

void print_string_info(char* str) {
	cout << "Numbers count: " << get_nums_count(str) << endl;
	cout << "Letters count: " << get_letters_count(str) << endl;
	cout << "Other symbols count: " << get_other_count(str) << endl;
}

int main() {
	int len;
	cout << "Enter the length of the string: ";
	cin >> len;

	char* str = new char[len + 1];
	cout << "Enter the string: ";
	cin >> str;

	system("pause");

	print_string_info(str);

	return 0;
}