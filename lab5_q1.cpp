// First include library
#include<iostream>
using namespace std;
//  Enter main function
int main()
{
//Declaration of variables
int a,b;
cout << "Enter any two numbers" << endl;
cin >> a;
cin >> b;
//Conditions
if (a>b)
{
cout << a << "is maximum" << endl;
}
else if (a<b)
{
cout << b << "is maximum" << endl;
}
else
{
cout << "The numbers are equal" << endl;
}
return 3;
}

