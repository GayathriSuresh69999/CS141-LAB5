// First include library
#include<iostream>
using namespace std;
// Include main function
int main()
{
// Decleration of variables
int a,b,c;
cout << "Enter any three numbers" << endl;
cin >> a;
cin >> b;
cin >> c;
// Conditions
if (a>b and a>c)
{
cout << a << "is maximum" << endl;
}
else if (b>a and b>c)
{
cout << b << "is maximum" << endl;
}
else if (c>a and c>b)
{
cout << c << "is maximum" << endl;
}
else
{ 
cout << "The three numbers are equal" << endl;
}
return 3;
}
