#include "easy.h"

int itc_spr(int a, int b)
{
    if (a <= 0 || b <= 0)
    {
        return -1;

    }
    else
    {
        int tmp = a * b;
        return tmp;
    }
}
double itc_scir(int radius){
    double pi = 3.14;
    if(radius <= 0){
        return -1;
    }
    else{
        return pi*(radius*radius);
    }
}
double itc_pow(int num, int step){
    double res = 1;
    
    if(step == 0){
        return 1.0;
    }
    else if(step < 0){
        for(int i = 0; i < -step; i++){
            res*=num;
        }
        return 1.0 / res;
    }
    else{
        for(int i = 0; i < step; i++){
            res*=num;
        }
        return res;
    }
}
int itc_str(int a, int b, int c){
    if(a + b > c && a + c > b && b + c > a){
        double p = {(a+b+c) / 2.00};
        return itc_sqrt(p*(p-a) * (p - b) * (p-c));
    }
    return -1;
    
}
    
