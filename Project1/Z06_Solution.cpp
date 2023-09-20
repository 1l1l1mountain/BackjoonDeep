#include "io.h"
void Level06()
{

	char Name[301] = {  };
	cin >> Name;
	int Count = 0;
	int length = strlen(Name);
	for (int i = 0; i < length; i++)
	{

		if (!strncmp(&Name[i], "c=", 2) || !strncmp(&Name[i], "c-", 2) ||
			!strncmp(&Name[i], "d-", 2) || !strncmp(&Name[i], "lj", 2) ||
			!strncmp(&Name[i], "nj", 2) || !strncmp(&Name[i], "s=", 2) ||
			!strncmp(&Name[i], "z=", 2))
		{
			Count++;
			i++;
		}
		else if (!strncmp(&Name[i], "dz=", 3))
		{
			Count++;
			i += 2;
		}
		else
			Count++;

	}

	cout << Count<<endl;
}