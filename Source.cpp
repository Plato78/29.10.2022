#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	/*int x;
	int k = 0;
	int sum = 0;
	do {
		cin >> x;
		k++;
		sum += 1;
	} while (x != 0);
	double sr = (double)sum / k;
	cout << k << " " << sum << " " << sr << endl;
	int a, b, i, sum = 0;
	cin >> a >> b;
	i = a;
	do {
		if (i % 2 != 0) {
			sum += 1;
		}
		i += 1;
	} while (i <= b);
	cout << sum;*/
	//int i, h;
	//cin >> h;
	//i = 1;
	//do {
	//	for (int j = 1; j <= h - i; j++)
	//		cout << " "; 
	//	for (int j = 1; j <= 2 * i - 1; j++)
	//		cout << '^';
	//	cout << endl;
	//	i++;
	//} while (i <= h);
	//17. В ЭВМ вводятся по очереди данные о росте N учащихся класса.Определить средний рост учащихся класса.
	//int n, sum = 0, r , i = 1;
	//cin >> n;
	//do {
	//	cin >> r;
	//	sum += r;
	//	i++;
	//} while (i <= n);
	//double sr = (double)sum / n;
	//cout << sr << endl;
	//29. с помощью оператора do-while напишите программу вывода всех четных чисел в диапазоне от 2 до 100 включительно.
	/*int i;
	i = 2;
	do {
		if (i % 2 == 0) {
			cout << i << endl;
		}
		i += 1;
	} while (i <=100);*/
	//30. С помощью оператора do-while напишите программу определения суммы всех нечетных чисел в диапазоне от 1 до 99 включительно.
	/*int i = 1, sum = 0;
	do {
		if (i % 2 != 0) {
			sum += i;
		}
		i += 1;
	} while (i <= 99);
	cout << sum << endl;*/
	//18. Задано натуральное число N.Найти количество натуральных чисел, не превосходящих N и не делящихся ни на одно из чисел 2, 3, 5.
	//c-количество
	int n, c = 0, i = 1;
	cin >> n;
	do {
		if (i % 2 != 0 && i % 3 != 0 && i % 5 != 0) {
			c++;
		}
		i++;
	} while (i <= n);
	cout << c << endl;
}