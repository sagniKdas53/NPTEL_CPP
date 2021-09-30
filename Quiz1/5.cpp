#include <iostream>

using namespace std;

int findMax(int arr[][20], int r, int c) {  // LINE-1
for( int i =0;i<r;i++){
    for( int j =0;j<c;j++){
        cout << arr[i][j] << " ";
    }
}
cout << endl;
return arr[r-1][c-1];
}

int main() {
int data[10][20]; // array of 10 strings
findMax(data, 10, 20);
return 0;

}

//arr[10][20], arr[][20]