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
int itc_str(int a, int b, int c){
    if(a + b < c || a+c < b || b+c < a){
        return -1;
    }
    else{
        int p = a+b+c;
        return itc_sqrt(p*(p-a) * (p-b) * (p-c));

    }

}
double itc_pow(int num, int step){
    int tmp = 1;
    if(step == 0 && num > 0){
        return 0;
    }
    else{
    for(int i = 0; i < step; i++){
        tmp*=num;
    }
    return tmp;

}
}
