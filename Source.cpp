#include <iostream>
#include <string.h>
#include <time.h>
#include "Stack.h"
using namespace std;

int main() {

	Stack<int> st;

	st.Push(56);
	cout << "Count: " << st.GetCount() << endl;
	st.Push(23);
	st.Push(77);
	st.Push(88);
	cout << "Count: " << st.GetCount() << endl;
	cout << "Element: " << st.Pop() << endl;
	cout << "Count: " << st.GetCount() << endl;

	while (!st.IsEmpty())
		cout << st.Pop() << endl;		

	//*
	/*string code = "void main() { Stack st(10); }";

	enum ScopeType
	{
		CIRCLE_IN = '(',
		CIRCLE_OUT = ')'
	};

	Stack<char> scopes;

	for (char s : code)
	{
		switch (s)
		{
		case CIRCLE_IN:
			scopes.Push(s);
			break;
		case CIRCLE_OUT:
			if (scopes.Peek() == CIRCLE_IN)
				scopes.Pop();
			else
				cout << "Error at symbol: " << s << endl;
			break;
		}
	}
	if (!scopes.IsEmpty())
	{
		cout << "Error!" << endl;
	}
	else
		cout << "Correct code!\n";*/

	system("pause");
	return 0;
}