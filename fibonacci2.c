#include<stdio.h>
int fibolist(int n);
int main()
{
    int n;
    scanf("%d",&n);
    printf("Fibonacci Series : %d",fibolist(n));
    return 0;
}
int fibolist(int n)
{
 int F[n+1];
 F[0]=0;
 F[1]=1;
 for(int i=2;i<=n;i++)

     F[i]=F[i-1] + F[i-2];
     return F[n];


}
