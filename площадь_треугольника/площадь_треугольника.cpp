#include <iostream>
#include <iomanip>
#include <random>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	srand(time(0));
	float y_min = 0.0, y_max = 3.0, x_min = 0.0, x_max = 4.0, x, y;
	int n, k=0;
	cout << "Введите количество точек: " << endl;
	cin >> n;
	float s1 = (y_max - y_min) * (x_max - x_min), tg=-y_max/x_max, s2;
	for (int i=0; i < n; i++) {
		y = y_min + (y_max - y_min) * rand() / (RAND_MAX + 1);
		x = x_min + (x_max - x_min) * rand() / (RAND_MAX + 1);
		if (y <= tg * x + y_max) {
			k++;
		}
	}
	s2 = s1 * k / n;
	cout << "Точек в треугольнике: " << k << " из " << n << endl;
	cout << "Площадь треугольника методом Монте-Карло: " << fixed << setprecision(4) << s2 << endl;
	cout << "Площадь треугольника по формуле: " << fixed << setprecision(4) << s1/2 << endl;
	return 0;
}