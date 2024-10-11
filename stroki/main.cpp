#include <iostream>

using namespace std;

void str_replace(char*& str) {
	int len = strlen(str);
	for (size_t i = 0; i < len; i++)
	{
		if (str[i] == '.') str[i] = '!';
	}
}

int main() {
	int len;
	cout << "Enter the length of the string: ";
	cin >> len;

	char* str = new char[len + 1];
	cout << "Enter the string: ";
	cin >> str;

	system("pause");

	str_replace(str);

	cout << str << endl;

	return 0;
}