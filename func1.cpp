#include "easy.h"
using namespace std;

void itc_name()
{
    cout<<"Ilya";
}
void itc_fio()
{
    itc_name();
    cout<<" "<<"Shirokov"<<" "<<"Maximovich";
}
int itc_abs(int num)
{
    if(num < 0){
        int tmp = num - num -(num);
        return tmp;
    }
    else{
        return num;
    }
}
double itc_fabs(double num)
{
    if(num < 0){
        double tmp = num - num -(num);
        return tmp;
    }
    else{
        return num;
    }
}



