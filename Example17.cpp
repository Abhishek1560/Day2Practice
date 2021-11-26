#include <iostream>
using namespace std;

int main ()   {
int l, w, Area, Peri ;
cout<< "Enter value of length: ";
cin>> l;
cout<< "Enter value of width: ";
cin>> w;
Area= l*w;
cout<< " Area of rectangle is: "<< Area <<endl;
Peri= 2*(l+w);
cout<< " Perimeter of rectangle is: "<< Peri <<endl;
return 0;
}
