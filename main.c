#include <stdio.h>
#include "myMath.h"


double main(){
    double num;
    printf("Please enter a real number\n");
    scanf("%lf",&num);
    

    double a=sub(add(Exponent(num),Power(num,3)),2);
    double b=add(mul(num,3),mul(Power(num,2),2));
    double c=sub(div(mul(Power(num,3),4),5),mul(num,2));


    printf("The value of f(𝑥) = 𝑒^𝑥 + 𝑥^3 − 2 at the point %lf is:%.4f\n",num,a);
    
    printf("The value of f(x) = 3x + 2X^2 at the point %lf is:%.4f\n",num,b);
  
    printf("The value of f(x) = (4x^3)/5 -2x at the point %lf is:%.4f\n",num,c);
return 0;
    
}
