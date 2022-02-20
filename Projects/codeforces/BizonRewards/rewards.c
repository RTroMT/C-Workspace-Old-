#include <stdio.h>

int main()
{
    int a1 = 0, a2 = 0, a3 = 0;
    int b1 = 0, b2 = 0, b3 = 0;
    int n = 0;
    scanf("%d%d%d", &a1, &a2, &a3);
    scanf("%d%d%d", &b1, &b2, &b3);
    scanf("%d", &n);
    int n1 = 0, n2 = 0, n3 = 0;
    int res1 = 0, res2 = 0;
    n1 = (a1 + a2 + a3)/5;
    n2 = (b1 + b2 + b3)/10;
    res1 = (a1 + a2 + a3)%5;
    res2 = (b1 + b2 + b3)%10;
    if(res1 > 0)
    {
        n1+=1;
    };
    if(res2 > 0)
    {
        n2+=1;
    };
    n3 = n1 + n2;
    if(n3 > n) 
    {
        printf("NO");
    }
    else 
    {
        printf("YES");
    };
    return 0;
}

/*
https://codeforces.com/contest/448/problem/A

rules:
.any shelf cannot contain both cups and medals at the same time;
.no shelf can contain more than five cups;
.no shelf can have more than ten medals.

test_input1/2/3 : 
1 1 1
1 1 1   
4
"YES"
;
1 1 3
2 3 4   
2
"YES"
;
1 0 0
1 0 0   
1 
"NO"
;
9 2 4
19 37 33
12


1/ Calculate sum(a1,a2,a3); sum(b1,b2,b3)
2/ Result1 =  sum(a1,a2,a3)/5 ; residual1 = sum(a1,a2,a3)%5
3/ Result2 =  sum(b1,b2,b3)/10; residual2 = sum(b1,b2,b3)%10
4/ If residual1 bigger than 0, then result1+=1;
   else continue;
   If residual2 bigger than 0, then result2+=1;
   else continue;
5/ n3 = result1 + result2;
6/ If n3 bigger than n then "NO"
   else "YES"
*/

