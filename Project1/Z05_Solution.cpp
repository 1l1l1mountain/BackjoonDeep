#include "io.h"
void Level05()
{

	char name[1000001] = {};

	//cin >> name;

	//cout << strlen(name); // ���ڿ� c++ ���� �˾ƺ���

	//�빮�ڷ� ����
	for (int i = 0; i < strlen(name); i++)
	{

		if ('a' <= name[i] && name[i] <= 'z') name[i] -= ('a' - 'A');

	}

	int Alphabet[26] = {};
	//���ĺ��󵵼� ����	
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

	//Max�� �ε�����
}
/*

a : 97
A : 65
*/