
#include <iostream>

namespace number {
	int factorial(int num) {
		return num < 2 ? 1 : num * factorial(num - 1);
	}
	int gcd(int a, int b) {
		return b ? gcd(b, a % b) : a;
	}
	int lcm(int a, int b) {
		return a * b / gcd(a, b);
	}
	int gcd_even(int a, int b) {
		int div = gcd(a, b);
		return div % 2 ? div : 0;
	}
	int gcd_odd(int a, int b) {
		int div = gcd(a, b);
		while (! div % 2) div = div / 2;
		return div;
	}
	double max(double a, double b) {
		return a < b ? b : a;
	}
	double min(double a, double b) {
		return a < b ? a : b;
	}
	int sum_digits(int num) {
		num = abs(num);
		unsigned int sum = 0;
		while (num) {
			sum += num % 10;
			num /= 10;
		}
		return sum;
	}
	bool is_palindrome(unsigned int num) {
		unsigned int temp = num;
		unsigned int result = 0;
		while (temp) {
			result = result * 10 + temp % 10;
			temp /= 10;
		}
		return num == result;
	}
	bool is_prime(unsigned int num) {
		if (num <= 1) {
			return false;
		}
		if (num == 2) {
			return true;
		}
		for (int i = 3; i * i <= num; i += 2) {
			if (num % i == 0) {
				return false;
			}
		}
		return true;
	}
	bool is_pythagorean_prime(int num) {
		for (int i = 1; i < num; i += 1) {
			for (int j = 1; j < num; j += 1) {
				if (i * i + j * j == num) {
					return true;
				}
			}
		}
		return false;
	}
	bool is_shifter_six_digit_number(int a) {
		bool condition_1 = a / 100000 == a % 10;
		bool condition_2 = a / 10000 - a / 100000 == a % 100 / 10;
		bool condition_3 = a / 1000 - a / 10000 - a / 100000 == a % 1000 / 100;
		return condition_1 & condition_2 & condition_3;
	}
}
