#include <iostream>
using namespace std;

void Capital(char arr[])
{
	for (int i = 0; arr[i] != '\0'; i++)
		if (arr[i] >= 'a'&& arr[i] <= 'z')
			arr[i] = arr[i] - 32;
}

int main()

{
	char name[] = "My name is Leo";
	Capital(name);

	cout << name << endl;

	system("pause");
	return 0;
}