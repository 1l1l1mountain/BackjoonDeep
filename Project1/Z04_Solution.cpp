#include "io.h"
int Lenght(char* name)
{
	int lenght = 0;
	for (int i = 0;; i++) {
		lenght++;
		if (name[i] == NULL) break;
	}
	lenght--;
	return lenght;
}
void Level04()
{

	char name[101] = {};

	cin >> name;
	int lenght = Lenght(name);

	for (int i = 0; i < lenght / 2; i++)
	{
		if (name[i] != name[lenght - 1 - i])
		{
			cout << 0;
			exit(0);
		}
	}

	cout << 1;
	exit(0);

}