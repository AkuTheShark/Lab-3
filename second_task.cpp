#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    cout << "Какую сумму вы бы хотели вложить? " << endl;

    double u_sum;//сумма вклада
    cin >> u_sum;

    double per = 0.03;//процент

    cout << "На сколько лет вы бы хотели осуществить вклад? " << endl;

    int dur;//кол-во лет на которое совершается вклад
    cin >> dur;

    int durday;//в формуле используется кол-во дней, поэтому перевожу года в дни
    durday = dur * 365; 

    double f_sum;
    f_sum = (u_sum * per * durday) / 100;

    cout << "Ваш доход составит: " << endl;
    cout << f_sum << endl;
    cout << "Ваш доход вместе со вкладом будет составлять: ";
    cout << f_sum + u_sum << endl;





    return 0;
}
