#include "stdafx.h"
#include <fstream>
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	ifstream file;
	file.open("T:\\�-22\\VOVA\\1\\main.txt");

	if (file.is_open())
	{
		printf ("������\n");
		int n = 50;
		char* buffer = new char[n + 1];
		buffer[n] = 0;

		while(!file.eof())
		{
			file.getline(buffer, n);
			printf ("�����: %s", buffer);
		}
		ofstream fout ("T:\\�-22\\VOVA\\1\\main.txt");
		fout << "�������";
		fout.close();
		system ("pause");
	}
	else
	{
		printf("�� ������\n");
		return -1;
	}
	return 0;
} 

