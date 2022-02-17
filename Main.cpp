#include <iostream>
#include <fstream>
using namespace std;

double TheFunction (double x)
{
    if(x >= -5 && x < -2)   return -x;
    if(x >= -2 && x <  2)   return 2;
    if(x >=  2 && x <= 5)   return x;
}


int main()
{
    ofstream fout("name.txt");

    double x = -6;
    double dx = 0.1;
    double maxNumber = 6;

    while(x < maxNumber)
    {
        fout << x << endl;
        fout << TheFunction(x) << endl;
        x += dx;
    }

    fout.close();
}