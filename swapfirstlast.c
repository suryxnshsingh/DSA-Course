#include<stdio.h>

int main(){

    int n= 92345;
    int f,l,n2=n;

    l=n2%10;

    while (n>10)
    {
        n=n/10;
    }

    f=n;

    printf("%d and %d", f,l);
    
}
