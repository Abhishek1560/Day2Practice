#include <iostream>
using namespace std;

int main()  {
int Num = 57;
cout <<"The number is: " <<Num <<endl;
Num++;
cout <<"The post increment by 1 the number is: "<<Num<<endl;
++Num;
cout <<"The pre increment by 1 the number is: "<<Num<<endl;
Num= Num + 1;
cout <<"After increasing by 1 the number is: "<<Num<<endl;
Num--;
cout <<"After post decrement by 1 the number is: "<<Num<<endl;
--Num;
cout <<"After pre decrement by 1 the number is: "<<Num<<endl;
Num= Num -1;
cout<<"After decreasing by 1 the number is: "<<Num<<endl;

return 0;
}
