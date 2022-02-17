#include <iostream>
#include <fstream>
using namespace std;

double TheFunction (double x)
{
    if(x >= -5 && x < -2)   return -x;
    if(x >= -2 && x <  2)   return 2;
    if(x >=  2 && x <= 5)   return x;
}

double TxtFile (string nameOfFile, double x, double endOfTheIterval, double step)
{
    ofstream fout(nameOfFile);

    while(x < endOfTheIterval)
    {
        if(x >= -5 && x <= 5)
        {
            fout << x << endl;
            fout << TheFunction(x) << endl;
        }

        x += step;
    }

    fout.close();
}



int main()
{
    string nameOfFile = "Result.txt";
    double x = -6;
    double maxNumber = 6;
    double dx = 0.1;

    TxtFile(nameOfFile, x, maxNumber, dx)

}