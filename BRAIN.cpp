#include "POSTFIX.h"

USER::USER()
{
}


USER::~USER()
{
}

int USER::counting(string expression)
{
	int result = 0;
	stack<int> newStack;

	for (int i = 0; i < expression.size(); i++) //считаем количество чисел и знаков и получаем их количество, чтобы определить количество итераций
	{
		if (isDigit(expression[i])) //проверяем это число или нет
		{
			string number = "";
			while (!isDelimeter(expression[i]) && !isOperator(expression[i]))
			{
				number += expression[i];
				i++;
				if (i == expression.size())
					break;
			}

			newStack.push(stoi(number));//заполняем числовой стэк
			
		}

		else if (isOperator(expression[i]))
		{
			int x = newStack.top();
			newStack.pop();
			int y = newStack.top();
			newStack.pop();
			if (expression[i] == '+') result = y + x;
			else if (expression[i] == '-') result = y - x;
			else result = y * x;
			newStack.push(result);
		}
	}

	result = newStack.top();
	newStack.pop();
	return result;
}

bool USER::stringIsEmpty(string str)
{
	for (int i = 0; i < str.size(); i++)
	{
		if (!isspace(str[i])) return false;
	}
	return true;
}

bool USER::isDelimeter(char a)
{
	if (string(" ").find(a) != string::npos)
		return true;
	return false;
}

bool USER::isOperator(char a)
{
	if (string("+-*").find(a) != string::npos)
		return true;
	return false;
}

bool USER::isDigit(char a)
{
	int symbol = a - '0';
	if (symbol <= 9 && symbol >= 0)
		return true;
	return false;
}
