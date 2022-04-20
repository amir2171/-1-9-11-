
#include <iostream>;
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	
	char str[80];

	int i = 0, cnt = 0;
	cout << "Введите текст на англиском:";
	cin >> str;
	while (str[i] != '\0')
	{
		if (str[i] == 'c' || str[i] == 'C')
		{
			str[i] = 'v';
		    str[i] = 'V';
			cnt++;
		}

		else if (str[i] == 'v' || str[i] == 'V')
		{
			str[i] = 'c';
			str[i] = 'C';
			cnt++;
		}
		i++;
	}
	cout << "Изменёная символьная строка: " << str << "\n";
	cout << "Количество изменений: " << cnt;
	return 0;
}


