#include <string>
#include <stack>
#include <iostream>   

using namespace std;

class USER
{
public:
	USER();
	~USER();

	int counting(string expression);
	bool stringIsEmpty(string str);

private:
	bool isDelimeter(char c);
	bool isOperator(char c);
	bool isDigit(char c);
};

