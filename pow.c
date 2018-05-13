#include<stdio.h>
int powmod(int x, int n, int d) {
    int temp;
    long int a = x%d;
    long int r=1;
    if(x==0)
        return 0;
    if (n == 0) return 1 % d;
    while(n>0)
    {
        if (n % 2 == 1) {
                    r = (r * a) % d;
                    n--;
                } else {
                    a = (a * a) % d;
                   n = n>>1;
                }
    }
    
    if(r < 0)
    {
        r = (r + d) % d;
    }
    
    return r;
}
int main()
{
int x = 2;
int n = 3;
int d = 3;
int f;
f = powmod(x,n,d);
printf("%d",f);
return 0;
}