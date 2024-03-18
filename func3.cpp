double itc_fmax(double num, double num2)
{
    if (num > num2)
    {
        return num;
    }
    else
    {
        return num2;
    }
}

double itc_fmin(double num, double num2)
{
    if (num < num2)
    {
        return num;
    }
    else
    {
        return num2;
    }
}
int itc_sqrt(int num)
{
    long long i = 0;
    if(num < 0){
        return -1;
    }
    if(num == 0){
        return 0;
    }
    else{
        while(i*i < num){
            i++;
        }
        if(i*i == num){
            return i;
        }
        else{
            return i-1;
        }
    }
}
int itc_skv(int num)
{
    if (num <= 0)
    {
        return -1;
    }
    else
    {
        int tmp = num * num;
        return tmp;
    }
}

