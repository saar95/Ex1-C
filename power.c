#include "myMath.h"

double Power(double x , int y){
int t=y;
if(t<0)
t=t*(-1);
    double p =x;
    for (int i = 1; i < t; i++)
    {
        p=p*x;
    
}
if(y>=0)
    return p;
    else
    return 1/p;
}
double Exponent(int x){
if(x==0)
return 1;
int t=x;
if(t<0)
t=t*(-1);
    double p=2.71828182846;
    for (int i = 1; i < t; i++)
    {
        p=p*2.71828182846;
    }
    if(x>=0)
    return p;
    else
    return 1/p;
}
