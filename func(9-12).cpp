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
    int tmp;
    for (int i = 0; i * i <= num; i++) {
        tmp = i;
    }
    return tmp;
    if (num < 0)
    {
        return -1;
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

/// םמגûי פאיכ
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
