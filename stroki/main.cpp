#include <iostream>

using namespace std;

bool is_palindrome(char* str) {
	int len = strlen(str);
	for (size_t i = 0; i < len; i++)
	{
		if (str[i] != str[len - i - 1]) {
			return false;
		}
	}

	return true;
}

int main() {
	char* str = new char[100] {"12321"};

	cout << str << endl;

	system("pause");

	if (is_palindrome(str)) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}

	delete[] str;

	return 0;
}