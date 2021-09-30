#include <iostream>
using namespace std;
class ThisPointer {
private:
int data;
public:
ThisPointer (int data = 0) { this->data = data; }
ThisPointer (ThisPointer& t) { this = t; }
void print() { cout << "data = " << data << endl; }
};
int main() {
ThisPointer obj(10);
ThisPointer obj1(obj);
obj.print();
obj1.print();
return 0;
}