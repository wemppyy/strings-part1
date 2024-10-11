#include <iostream>

using namespace std;

template <typename T>
void remove(T* &str, int index) {
	int len = strlen(str);
	T* new_str = new T[len];
	for (size_t i = 0; i < index; i++)
	{
		new_str[i] = str[i];
	}
	for (size_t i = index; i < len; i++)
	{
		new_str[i] = str[i + 1];
	}
	delete[] str;
	str = new_str;
}


int main() {
    char* str_p = new char[20] {"Hello World"};
	cout << str_p << endl;
	remove(str_p, 6);
	cout << str_p << endl;
    return 0;
}