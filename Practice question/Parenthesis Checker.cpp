#include <bits/stdc++.h>
using namespace std;

char check(char c)
{
if (c == ‘(‘)
return ‘)’;
if (c == ‘{‘)
return ‘}’;
if (c == ‘[‘)
return ‘]’;
return -1;
}

bool check(char expression[], int n)
{
if (n == 0)
return true;
if (n == 1)
return false;
if (expression[0] == ‘)’ || expression[0] == ‘}’ || expression[0] == ‘]’)
return false;

char closing = check(expression[0]);

int i, count = 0;
for (i = 1; i < n; i++) {
if (expression[i] == expression[0])
count++;
if (expression[i] == closing) {
if (count == 0)
break;
count–;
}
}

if (i == n)
return false;

if (i == 1)
return check(expression + 2, n – 2);

return check(expression + 1, i – 1) && check(expression + i + 1, n – i – 1);
}

int main()
{
char expression[15];
cout << “\nEnter the expression : “;
cin >> expression;
int n = strlen(expression);
if (check(expression, n))
cout << “Balanced”;
else
cout << “Not Balanced”;
return 0;


