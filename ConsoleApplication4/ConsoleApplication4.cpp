#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	setlocale(0, "");
	srand(time(NULL));
	char a[1000]; // переменная ставки
	char b[1000]; // выбор категории
	int c = 10; // счет пользователя
	int d; // рандомное число для для выбора победившей ставки
	int f; // переменная ставки
	int s; //выбор категории
	char q[1000]; // ставка на число 
	int w;//ставка на число 
	char e[1000];//ставка на цвет
	int r;// ставка на цвет
	char t[1000];//  ставка на четность
	int y;//ставка на четность
	cout << "У нас тут казина" << endl << "У тебя 10 монет" << endl << "Ты идешь домой если будет 500" << endl << "Ставишь на красное и черное" << endl << "Красное - Х2, Черное - X2 и Зеленое Х35" << endl << "Ячейки: Красное 1-18, Черное 19-36, Зеленое 0" << endl;
	
	while (c < 500)
	{
		cout << "Введи ставочку: ";
	hyi: cin >> a;
		f = atoi(a);
		if (f == 0)
		{
			cout << "Число блять введи" << endl;;
			goto hyi;
		}

		if (f <= c)
		{
			if (f > 0)
			{
				cout << "1 - Ставка на число" << endl << "2 - Ставка на цвет" << endl << "3 - Ставка на четное/нечетное" << endl;
			chlen:	cin >> b;
				s = atoi(b);
				if (s == 0)
				{
					cout << "Число блять введи" << endl;
					goto chlen;
				}
				while (s < 1 || s>3)
				{
					cout << "Только 1,2 или 3, тупое животное" << endl;
					goto chlen;
				}
				if (s == 1)
				{
					cout << "Введи номер ячейки : ";
				piska:	cin >> q;
					w = atoi(q);
					if (w == 0)
					{
						cout << "Число блять введи" << endl;
						goto piska;
					}
					while (w < 0 || w>37)
					{
						cout << "От 0 до 37, тупое животное" << endl;
						goto piska;
					}
					d = rand() % 37;
					cout << "Выпал: " << d << endl;
					if (w == d)
					{
						c = c +  f;
						cout << "Ваша ставка победила" << endl;
						cout << "Ваш счет: " << c << endl;
					}
					else
					{
						c = c - f;
						cout << "Ваша ставка проиграла" << endl;
						cout << "Ваш счет: " << c << endl;
					}
				}
				if (s == 2)
				{
					cout << "1 - Ставочка на красное" << endl << "2 - Ставочка на черное" << endl << "3 - Ставочка на зеленое" << endl;
					hren:	cin >> e;
					r = atoi(e);
					if (r == 0)
					{
						cout << "Число блять введи" << endl;
						goto hren;
					}
					while (r < 1 || r>3)
					{
						cout << "Только 1,2 или 3, тупое животное" << endl;
						goto hren;
					}
					d = rand() % 37;
					cout << "Выпал: " << d << endl;
					if (r == 1)
					{
						if (d >= 1 && d <= 18)
						{
							c = c + f;
							cout << "Ваша ставка победила" << endl;
							cout << "Ваш счет: " << c << endl;
						}
						else
						{
							c = c - f;
							cout << "Ваша ставка проиграла" << endl;
							cout << "Ваш счет: " << c << endl;
						}
					}
					else if (r == 2)
					{
						if (d >= 19 && d <= 36)
						{
							c = c + f;
							cout << "Ваша ставка победила" << endl;
							cout << "Ваш счет: " << c << endl;
						}
						else
						{
							c = c - f;
							cout << "Ваша ставка проиграла" << endl;
							cout << "Ваш счет: " << c << endl;
						}
					}
					else if (r == 3)
					{
						if (d == 0)
						{
							c = c + 35 * f;
							cout << "Ваша ставка победила" << endl;
							cout << "Ваш счет: " << c << endl;
						}
						else
						{
							c = c - f;
							cout << "Ваша ставка проиграла" << endl;
							cout << "Ваш счет: " << c << endl;
						}
					}
				}
				if (s == 3)
				{
					cout << "1 - Четное" << endl << "2 - Нечетное" << endl;
				penis:	cin >> t;
					y = atoi(t);
						if (y == 0)
						{
							cout << "Число блять введи" << endl;
							goto penis;
						}
						while (y < 1 && y>2)
						{
							cout << "Только 1 или 2, тупое животное" << endl;
							goto penis;
						}
						d = rand() % 37;
						cout << "Выпал: " << d << endl;
						if (y == 1)
						{
							if (d % 2 == 0)
							{
								c = c + f;
								cout << "Ваша ставка победила" << endl;
								cout << "Ваш счет: " << c << endl;
							}
							else 
							{
								c = c - f;
								cout << "Ваша ставка проиграла" << endl;
								cout << "Ваш счет: " << c << endl;
							}
						}
						else if (y == 2)
						{
							if (d % 2 == 1)
							{
								c = c + f;
								cout << "Ваша ставка победила" << endl;
								cout << "Ваш счет: " << c << endl;
							}
							else
							{
								c = c - f;
								cout << "Ваша ставка проиграла" << endl;
								cout << "Ваш счет: " << c << endl;
							}
						}
				}
				if (c <= 0)
				{
					return 0;
				}
			}
			else
			{
				cout << "Тебе нельзя отрицательные числа, дурак" << endl;
			}
		}
		else
		{
			cout << "У тебя денег не хватает" << endl;
		}

	}
	system("pause");
}