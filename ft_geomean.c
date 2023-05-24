#include<stdio.h>


int ft_pow(int a, unsigned long b)
{
    int i;
    int c;
    i = 1;
    c = a;
    while(i < b)
    {
        a = c * a;
        i++;
    }
    return(a);
}

int ft_nsq(unsigned long p, unsigned long size)
{
    int i;

    i = 0;
    while(ft_pow(i, size) < p)
    {
        i++;
    }
    return(i);
}

int ft_geomean(int *a, unsigned long size)
{
    int i;
    unsigned long p;
    i = 0;
    p = a[i]; 
    while(i < size)
    {
        p = p * a[i];
        i++;
    }
    p = ft_nsq(p,size);
    return(p);
}

/*int main()
{
    int arr[] = {1, 2, 11, 35, 2, 6, 7};
    printf("%i", ft_geomean(arr, sizeof(arr)/ sizeof(int)));
    return(0);
}*/