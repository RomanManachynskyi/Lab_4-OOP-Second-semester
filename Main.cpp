#include <iostream>
#include <cmath>
using namespace std;

double TheFunction (double x)
{
    if(x >= -5 || x < -2)   return -x;
    if(x >= -2 || x <  2)   return 2;
    if(x >=  2 || x <= 5)   return x;
}


int main()
{

}