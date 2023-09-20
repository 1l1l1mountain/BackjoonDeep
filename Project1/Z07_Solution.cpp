#include "io.h"
void Level07()
{

	int N;
	cin >> N;

	char Name[101];
	
	int Switch[26] = {};
	int Count = 0;
	int Switch2 = 0;
	

	for (int j = 0; j < N; j++)
	{
		cin >> Name;
		int length = strlen(Name);

		for (int i = 0; i < length; i++)
		{

			if (Switch[Name[i] - 'a'] == 0) Switch[Name[i] - 'a'] = 1;
			else
			{
				if (Name[i] != Name[i - 1])
				{
					Switch2 = 1;
					break;
				}
			}

		}

		if (Switch2 != 1) Count++;
		Switch2 = 0;
		for (int k = 0; k < 26; k++)
		{
			Switch[k] = 0;
		}
	}
	cout << Count;

}