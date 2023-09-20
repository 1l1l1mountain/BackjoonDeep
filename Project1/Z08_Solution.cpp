#include "io.h"
void Level08()
{

	char Subject[20][51] = {};
	double Grade=0,SumGrade=0;
	char MyGrade[20][3] = {};
	double Average = 0;
	for (int i = 0; i < 20; i++)
	{
		cin >> Subject[i];
		cin >> Grade;
		cin >> MyGrade[i];

		if (!strncmp(MyGrade[i], "A+", 2)) Average = Average + (Grade * 4.5);
		else if (!strncmp(MyGrade[i], "A0", 2))Average = Average + (Grade * 4.0);
		else if (!strncmp(MyGrade[i], "B+", 2))Average = Average + (Grade * 3.5);
		else if (!strncmp(MyGrade[i], "B0", 2))Average = Average + (Grade * 3.0);
		else if (!strncmp(MyGrade[i], "C+", 2))Average = Average + (Grade * 2.5);
		else if (!strncmp(MyGrade[i], "C0", 2))Average = Average + (Grade * 2.0);
		else if (!strncmp(MyGrade[i], "D+", 2))Average = Average + (Grade * 1.5);
		else if (!strncmp(MyGrade[i], "D0", 2))Average = Average + (Grade * 1.0);
		else if (!strncmp(MyGrade[i], "F", 1))Average = Average + (Grade * 0);
		else if (!strncmp(MyGrade[i], "P", 1)) { SumGrade -= Grade; }

		SumGrade += Grade;
	}
	cout << Average / SumGrade;


}