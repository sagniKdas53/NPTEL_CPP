#include <iostream>
#include <vector>
using namespace std;
int main() {
const int size = 3, c = 65;
vector<char> vc(size, 'A');
for (int i =1; i <= 3; i++){
vc.push_back(65 + i);}
vc.resize(10, 88);
vc.resize(8);
for (int i = 0; i < vc.size(); i++)
cout << vc[i] << " ";
return 0;
}

//A A A B C D X X