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
	char* str = new char[100] {"Hello world!"};
	cout << str << endl;

	system("pause");

	print_string_info(str);

	delete[] str;
	return 0;
}