
// k точек с заданными координатами x1, x2, ..., xk находятся на одной прямой
// определить координату точки z которя находится на той же прямой такой что сумма расстояний от нее до данных точек минимальна

#include <iostream>

int main() {
	int k, i;
	float sum, point;
	std::cout << "введите количество точек" << std::endl;
	std::cin >> k;
	for (i = 0; i < k; i += 1) {
		std::cout << "введите координаты точки №" << i + 1 << "" << std::endl;
		std::cin >> point;
		sum += point;
	}
	std::cout << "координаты точки z" << std::endl;
	std::cout << sum / k << std::endl;
}
