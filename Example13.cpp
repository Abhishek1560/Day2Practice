#include <iostream>
using namespace std;

int main ()   {
int Num1, Num2, temp;
cout<< "Input 1st number: ";
cin>>Num1;
cout<< "Input 2nd number: ";
cin>>Num2;
temp = Num2;
Num2 = Num1;
Num1 = temp;
cout<< " After swapping the first number is: "<<Num1<<"\n";
cout<< " After swapping the second number is: "<<Num2<<"\n";
return 0;
}



