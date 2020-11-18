#include <iomanip>
#include <iostream>
#include "time.h"
#include "locale.h"

using namespace std;


int main()
{
	int length = 0;
	int random = 0;
	char question;
	setlocale(0, "");
	cout << endl << "Введите длинну пароля: ";
	cin >> length;
	char *mass = new char[length];
	char symbol[66] =
	{
		'q','w','e','r','t','y','u','i','o','p','_',
		'a','s','d','f','g','h','j','k','l','1',
		'z','x','c','v','b','n','m','_','2','3',
		'Z','X','C','V','B','N','M','4','5','6','_',
		'P','O','I','U','Y','T','R','E','Q','W',
		'A','S','D','F','G','H','J','K','L','7','_',
		'8','0','9'
	};
	srand(time(NULL));
	do
	{
		for (int i = 0; i < length; i++)
		{
			random = 0 + rand() % 69;
			if (symbol[random] != mass[i - 1] && symbol[random] != mass[i - 2] && symbol[random] != mass[i - 3])
			{
				mass[i] = symbol[random];
			}
		}
		cout << "Ваш пароль: ";
		for (int i = 0; i < length; i++)
		{
			cout << mass[i];
		}
	p:		cout << endl <<endl<< "Перегенироровать?  (y/n): ";
	
		{
			cin >> question;
			if (question != 'y' && question != 'n')
			{
				cout << "Введен некорректный символ, повторите попытку ";
				goto p;
			}
		}
	} while (question != 'n');
	return 0;
}