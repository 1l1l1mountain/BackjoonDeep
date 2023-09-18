#include "io.h"
void Level05()
{

	char name[1000001];

	cin >> name;

	//cout << strlen(name); // 문자열 c++ 버전 알아보기

	//대문자로 변경

	int Alphabet[26] = {};
	int str = strlen(name);
	for (int i = 0; i < str; i++)
	{

		if (name[i] >= 'a') Alphabet[name[i] - 'a']++;
		else Alphabet[name[i] - 'A']++;
	}

	
	int Max = 0;
	char ans;
	for (int i = 0; i < 26; i++)
	{
		if (Alphabet[i] == Max) ans = '?';
		else if (Alphabet[i] > Max)
		{
			Max = Alphabet[i];
			ans = 'A' + i;
		}
	}
	cout << ans;


}
/*
다시 풀어보기!!
a : 97
A : 65
*/