#include <iostream>
#include <fstream>
using namespace std;


double ModuleNumb (double x)
{
    if(x < 0)   return -1*x;
    else        return x;
}
       
double TheFunction (double x)
{
    if(x < -3)   return 3;
    if(x > -3 && x < 3)   return 3 - ModuleNumb(x);
    if(x > 3)   return 3;
}


void TxtFile (string nameOfFile, double x, double endOfTheIterval, double step)
{
    ofstream fout(nameOfFile);
    while(x < endOfTheIterval)
    {
        fout << x << endl;
        fout << TheFunction(x) << endl;

        x += step;
    }

    fout.close();
}



int main()
{
    string nameOfFile = "Result.txt";
    double x = -4;
    double maxNumber = 4;
    double dx = 0.1;

    TxtFile(nameOfFile, x, maxNumber, dx);
}