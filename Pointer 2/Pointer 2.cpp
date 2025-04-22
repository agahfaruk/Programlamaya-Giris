#include <iostream>
using namespace std;

void centimize(double* ptrd)
{
    for (int j = 0; j < 5; j++) {
        *ptrd *= 2.54;
        ptrd++;
    }
}

int main()
{
    double varray[5] = { 10.0,43.1,95.9,59.7,87.3 };
    centimize(varray);
    for (int j = 0; j < 5; j++) {
        cout << "vararray[" << j << "]=" << varray[j] << " cm" << endl;
    }




    return 0;
}