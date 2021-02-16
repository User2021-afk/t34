#include <iostream>
#include <string>

int main() {
	using namespace std;
	cout << "Calculate" << endl;

	cout << "Enter first num: ";
	int firstNum = 0;
	cin >> firstNum;

	cout << "Enter operator: ";
	char op = 0;
	cin >> op;

	cout << "Enter a second num: ";
	int secondNum = 0;
	cin >> secondNum;

	cout << "Продолжить ввод (yes/no)?: " << endl;
	char userVal = 0;
	cin >> userVal;
	if (userVal == 'y') {
		cout << "Enter operator: ";
		char op2 = 0;
		cin >> op2;

		cout << "Enter a second num: ";
		static int threeNum = 0;
		cin >> threeNum;

		double result;
		if (op == '+') {
			result = firstNum + secondNum + threeNum;
			cout << "Result: " << result << endl;
		}

		else if (op == '-') {
			result = firstNum - secondNum - threeNum;
			cout << "Result: " << result << endl;
		}

		else if (op == '*') {
			result = firstNum * secondNum * threeNum;
			cout << "Result: " << result << endl;
		}

		else if (op == '/') {
			result = firstNum / secondNum / threeNum;
			cout << "Result: " << result << endl;
		}
		else {
			return 0;
		}
	}
	else {
		return 0;
	}

	double result;
	if (op == '+') {
		result = firstNum + secondNum;
		cout << "Result: " << result << endl;
	}

	else if (op == '-') {
		result = firstNum - secondNum;
		cout << "Result: " << result << endl;
	}

	else if (op == '*') {
		result = firstNum * secondNum;
		cout << "Result: " << result << endl;
	}

	else if (op == '/') {
		result = firstNum / secondNum;
		cout << "Result: " << result << endl;
	}

	return 0;
}

