#include "io.h"
void Level05()
{

	char name[1000001] = {};

	//cin >> name;

	//cout << strlen(name); // 문자열 c++ 버전 알아보기

	//대문자로 변경
	for (int i = 0; i < strlen(name); i++)
	{

		if ('a' <= name[i] && name[i] <= 'z') name[i] -= ('a' - 'A');

	}

	int Alphabet[26] = {};
	//알파벳빈도수 설정	
	for (int i = 0; i < strlen(name); i++) {

		for (int j = 0; j < 26; j++)
		{
			if ((name[i] - 'A') == j) Alphabet[j]++;


		}
	}


	int Max = 0;

	for (int i = 0; i < 26; i++)
	{

		if (Alphabet[Max] < Alphabet[i])	Max = i;

	}

	//Max는 인덱스값
}
/*

a : 97
A : 65
*/