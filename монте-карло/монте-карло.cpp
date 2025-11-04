#include <iostream>
#include <random>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	srand(time(0));
	int n, k=0;
	float  x_min= -3.0, x_max = 3.0, y_min = -3.0, y_max = 3.0, x, y, pi=3.1416;
	cout << "Введите количество точек" << endl;
	cin >> n;
	float S = (x_max-x_min)*(y_max-y_min);
	float r = (x_max - x_min) / 2;
	for (int i = 0; i < n; i++) {
		x = x_min + (x_max-x_min) * rand() /(RAND_MAX+1);
		y = y_min + (y_max - y_min) * rand() / (RAND_MAX + 1);

		if (pow(x , 2) + pow(y , 2) <= pow(r, 2))
			k+=1;
	}
	float s1 = S * k / n;
	cout << "Точек в круге: " << k << " из " << n << endl;
	cout << "Площадь круга методом Монте-Карло: "<<fixed<< setprecision(4) << s1  << endl;
	cout << "Площадь круга по формуле: " << fixed << setprecision(4) << pow(r, 2) * pi << endl;
	return 0;
}