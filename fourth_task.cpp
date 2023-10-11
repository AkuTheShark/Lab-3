#include <iostream>
using namespace std;

int main()
{

	cout << "Введите числа: " << endl;

	int u_num1;
	int sum = 0;
	int res;
	int i;

	for (i = 0; (cin >> u_num1) && (u_num1 != 0); i++)
	{
		res = sum += u_num1;
	}

	cout << "Количество введенных чисел: " << i + 1 << endl;
	cout << "Сумма введенных чисел: " << res << endl;

	if (u_num1 == 0)
	{
		cout << "Среднее арифметическое введенных чисел: " << sum / i << endl;
	}


	return 0;
}