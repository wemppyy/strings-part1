#include <iostream>

using namespace std;

void str_replace(char*& str) {
	int len = strlen(str);

	for (size_t i = 0; i < len; i++)
	{
		if (str[i] == ' ') str[i] = '\t';
	}
}

int main() {
	char* str = new char[100] {"Hello world!"};
	cout << str << endl;

	system("pause");

	str_replace(str);

	cout << str << endl;

	delete[] str;

	return 0;
}