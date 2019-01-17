#include <iostream>     
#include <string>
#include "POSTFIX.h"
using namespace std;

int main()
{
	USER ALEXEY = USER();
	string expression;

	cout << "Input expression in postfix using space bar after every symbol: \n";
	getline(cin, expression);
	if (ALEXEY.stringIsEmpty(expression))
	{
		cout << "string is empty \n";
		return 0;
	}

	int result = ALEXEY.counting(expression);

	cout << "Result = " << result << "\n";

	system("pause");
	return 0;
}