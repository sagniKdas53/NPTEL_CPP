#include <iostream>
using namespace std;
class Integer {
int i;
void set_j(int _j){ j = _j; }
public:
int j;
void set_i(int _i) {i = _i;}
int get_j(){ return j; }
private:
int get_i(){ return i; }
};

int main() {
Integer i_obj;
i_obj.set_i(10); // LINE-1
i_obj.set_j(20); // LINE-2
cout << i_obj.get_i(); // LINE-3
cout << i_obj.get_j(); // LINE-4
return 0;
}