#include <iostream>
#include <string>
using namespace std;
class Integer{
int i;
public:
Integer (const int& _i) : i(_i){}
void change_i(const int& _i) const { i = _i; }
int get_i() const { return i; }
};
int main(){
Integer obj(10);
obj.change_i(5);
cout << obj.get_i();
return 0;
}