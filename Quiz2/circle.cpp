#include <iostream>
using namespace std;
//int multiply(int a){ return a; }
//int multiply(int a, int b = 1){ return a * b; }
int multiply(int a, int b, int c = 1){ return a * b * c; }
double multiply(double a, double b = 1.0, double c = 1){ return a * b * c; }
int main(){
cout << multiply(10) << endl; //call-1
cout << multiply(10, 20) << endl; //call-2
cout << multiply(10, 20, 30) << endl; //call-3
cout << multiply(10.0, 20.0, 30.0) << endl; //call-4
return 0;
}

/*
 c++ circle.cpp 
circle.cpp: In function ‘int main()’:
circle.cpp:8:12: error: call of overloaded ‘multiply(int)’ is ambiguous
    8 | multiply(10); //call-1
      |            ^
circle.cpp:3:5: note: candidate: ‘int multiply(int)’
    3 | int multiply(int a){ return a; }
      |     ^~~~~~~~
circle.cpp:4:5: note: candidate: ‘int multiply(int, int)’
    4 | int multiply(int a, int b = 1){ return a * b; }
      |     ^~~~~~~~
circle.cpp:6:8: note: candidate: ‘double multiply(double, double, double)’
    6 | double multiply(double a, double b = 1.0, double c = 1){ return a * b * c; }
      |        ^~~~~~~~
circle.cpp:9:16: error: call of overloaded ‘multiply(int, int)’ is ambiguous
    9 | multiply(10, 20); //call-2
      |                ^
circle.cpp:4:5: note: candidate: ‘int multiply(int, int)’
    4 | int multiply(int a, int b = 1){ return a * b; }
      |     ^~~~~~~~
circle.cpp:5:5: note: candidate: ‘int multiply(int, int, int)’
    5 | int multiply(int a, int b, int c = 1){ return a * b * c; }
      |     ^~~~~~~~
circle.cpp:6:8: note: candidate: ‘double multiply(double, double, double)’
    6 | double multiply(double a, double b = 1.0, double c = 1){ return a * b * c; }
      |        ^~~~~~~~
*/