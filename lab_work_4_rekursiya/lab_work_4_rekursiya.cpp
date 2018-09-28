# include <iostream>
#include <clocale>


int print(int start, int n);

void exponent_two(int n);

int fibo(int n1, int n2, int n, int x);

int sum_digits(int sum, int n);

int get_max(int n, int max);


int main() {

	setlocale(LC_ALL, "Russian");
	
	std::cout << "�������, ������� ������� ����� �� 1 �� n" << std::endl;
	int number_1 = 1; 

	std::cout << "Enter n" << std::endl;
	int number_2 = 0;
	std::cin >> number_2;
	
	std::cout << print(number_1, number_2) << std::endl;
	
	std::cout << "�������, ������� ������� ����� YES, ���� ����� n �������� ������ �������� ������, ";
	std::cout << "��� ����� NO � ��������� ������" << std::endl;
	std::cout << "Enter digit" << std::endl; 
	int digit = 0;
	std::cin >> digit;
	
	exponent_two(digit);
	
	std::cout << "�������, ������� ������� �������� ����� ���������" << std::endl;
	std::cout << "What number of Fibonacchi do you want to sum?" << std::endl; 
	int number = 0;
	std::cin >> number;
	
	int number1 = 0;
	int number2 = 1;
	int count = 3;

	std::cout << fibo(number1, number2, number, count) << std::endl;
	
	std::cout << "�������, ������� ������� ����� ���� �����" << std::endl;
	std::cout << "What number do you want to sum digits of?" << std::endl; 
	int your_number = 0;
	std::cin >> your_number;
	
	int sum1 = 0;

	std::cout << sum_digits(sum1, your_number) << std::endl;
	
	std::cout << "�������, ������� ������� ������������ �������� �� ������������������ �����" << std::endl;
	std::cout << "Enter numbers:" << std::endl; 
	int numbers = 0;
	
	get_max(numbers, 0);

	system("pause");
	return 0;
}


int print(int start, int n) {

	if (start == n) {
		return n;
	}

	std::cout << start << std::endl;

	return print(++start, n);
}


void exponent_two(int n) {

	if (n == 1) {
		std::cout << "YES" << std::endl;
	}
	else if (n % 2 != 0) {
		std::cout << "NO" << std::endl;
	}
	else {
		return exponent_two(n / 2);
	}
}


int fibo(int n1, int n2, int n, int x) {

	int sum = n1 + n2;

	if (n == 0 || n == 1) {
		return 0;
	}
	else if (n == 2) {
		return 1;
	}
	else if (n == x) {
		return sum;
	}
	else {
		return fibo(n2, sum, n, ++x);
	}
}


int sum_digits(int sum, int n) {

	sum += n % 10;

	if (n < 1) {
		return sum;
	}

	return sum_digits(sum, n / 10);
}


int get_max(int n, int max) {

	std::cin >> n;

	if (n > max) {
		max = n;
	}

	std::cout << "Max of your numbers is" << "\t" << max << std::endl;
	
	if (n == 0) {
		return max;
	}
		
	return get_max(n, max);
}

