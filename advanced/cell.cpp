#include <iostream>
//#include <cstdlib>
using namespace std;
int *cellCompete(int *cells, int days)
{
    int i, day, next[8] = {0, 0, 0, 0, 0, 0, 0, 0};
    for (day = 0; day < days; day++)
    { //swap from the second day
        if (day > 0)
        {
            //cout << "here" << endl;
            for (i = 0; i < 8; i++)
                cells[i] = next[i];
        }
        for (i = 0; i < 8; i++)
        {
            if (i == 0)
            {
                if (cells[1] == 0)
                {
                    next[i] = 0;
                }
                else
                {
                    next[i] = 1;
                }
            }
            else if (i > 0 && i < 7)
            {
                if (cells[i - 1] != cells[i + 1])
                {
                    next[i] = 1;
                }
                else
                {
                    next[i] = 0;
                }
            }
            else if (i == 7)
            {
                if (cells[6] == 0)
                {
                    next[i] = 0;
                }
                else
                {
                    next[i] = 1;
                }
            }
        }
        /*days progress
        cout << endl
             << "Day:" << day << endl;
        for (i = 0; i < 8; i++)
            cout << cells[i];

        cout << endl
             << "Next" << endl;
        for (i = 0; i < 8; i++)
            cout << next[i];

        cout << endl;*/
    }
    for (i = 0; i < 8; i++)
        cells[i] = next[i];
    return cells;
}
int main()
{
    //int arr[8] = {1, 0, 0, 0, 0, 1, 0, 0}, days = 1, i, *arrRes;
    int arr[8] = {1, 1, 1, 0, 1, 1, 1, 1}, days = 2, i, *arrRes;
    //for (i = 0; i < 8; i++)
    //    cin >> arr[i];
    //cin >> days;
    //arrRes = (int *)calloc(8, sizeof(int)); // not necessary
    arrRes = cellCompete(arr, days);
    for (i = 0; i < 8; i++)
        cout << arrRes[i];

    cout << endl;

    //cellCompeter(arr, days);
    return 0;
}