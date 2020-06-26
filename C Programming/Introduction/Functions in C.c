#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d)
{
    int res;
    if(a>b)
    {
        if(a>c)
        {
            if(a>d)
                res=a;
            else {
                res=d;
            }
        }
        else {
            if(c>d)
                res=c;
            else {
                res=d;
            }
        }
    }
    else {
        if(b>c)
        {
            if(b>d)
                res=b;
            else {
                res=d;
            }
        }
        else {
            if(c>d)
                res=c;
            else {
                res=d;
            }
        }
    }
    return res;
}
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    return 0;
}