int itc_revnbr(int num){
    int res = 0;
    while (num > 0){
        res *= 10;
        res += num%10;
        num/=10;
    }
    return res;
}


bool itc_iseven(int num)
{
    if(num % 2 == 0)
    {
        return true;
    }
    else{
        return false;
    }
}
int itc_max(int num, int num2)
{
    if(num > num2){
        return num;
    }
    else{
        return num2;
    }
}
int itc_min(int min1, int min2)
{
    if(min1 < min2)
    {
        return min1;
    }
    else
    {
        return min2;
    }
}
