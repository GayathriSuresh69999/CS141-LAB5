// First include the library and enter the main function
#include<iostream>
using namespace std;
int main()
{
int a; // Decleration and defenition
cout << "Enter a number" << endl;
cin >> a;
// Conditions
if (a%5 == 0 and a%11 == 0)
{
cout << a << " is divisible by 5 and 11" << endl;
}
else 
{ 
cout << a << " is not divisible by 5 and 11" << endl;
}
return 3;
}
