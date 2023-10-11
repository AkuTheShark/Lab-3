#include <iostream>
using namespace std;

int main() 
{
	setlocale(0, "");
	cout << "Выберите древнерусскую меру которую хотите перевести в современную единицу измерения" << endl;
	cout << "[1] Сажени -> Метры" << endl;
	cout << "[2] Дюймы -> Сантиметры" << endl;
	cout << "[3] Футы -> Метры" << endl;
	cout << "[4] Драхмы -> Граммы" << endl;
	cout << "[5] Унции -> Граммы" << endl;
	cout << "[6] Фунты -> Килограммы" << endl;
	cout << "[7] Аршины -> Метры" << endl;
	cout << "[8] Золотники -> Граммы" << endl;
	cout << "[9] Дюймы -> Миллиметры" << endl;

	int u_num;
	cin >> u_num;
	double val;

	switch(u_num)
	{
	case 1:
		system("cls");
		cout << "Введите количество саженей" << endl;
		cin >> val;
		cout << "Количество введеных вами саженей равно " << val * 2.1366 << " метров" << endl;
		break;

	case 2:
		system("cls");
		cout << "Введите количество дюймов" << endl;
		cin >> val;
		cout << "Количество введеных вами дюймов равно " << val *  2.5 << " сантиметров" << endl;
		break;

	case 3:
		system("cls");
		cout << "Введите количество футов" << endl;
		cin >> val;
		cout << "Количество введеных вами футов равно " << val * 0.3048 << " метров" << endl;
		break;

	case 4:
		system("cls");
		cout << "Введите количество драхм" << endl;
		cin >> val;
		cout << "Количество введеных вами драхм равно " << val * 3.7325 << " граммов" << endl;
		break;

	case 5:
		system("cls");
		cout << "Введите количество унций" << endl;
		cin >> val;
		cout << "Количество введеных вами унций равно " << val * 29.86 << " граммов" << endl;
		break;

	case 6:
		system("cls");
		cout << "Введите количество фунтов" << endl;
		cin >> val;
		cout << "Количество введеных вами фунтов равно " << val * 0.40951 << " килограммов" << endl;
		break;

	case 7:
		system("cls");
		cout << "Введите количество аршинов" << endl;
		cin >> val;
		cout << "Количество введеных вами аршинов равно " << val * 0.7112 << " метров" << endl;
		break;

	case 8:
		system("cls");
		cout << "Введите количество золотников" << endl;
		cin >> val;
		cout << "Количество введеных вами золотников равно " << val * 0.7112 << " граммов" << endl;
		break;
	

	case 9:
		system("cls");
		cout << "Введите количество дюймов" << endl;
		cin >> val;
		cout << "Количество введеных вами дюймов равно " << val * 0.7112 << " миллиметров" << endl;
		break;
	
	}

return 0;
}
