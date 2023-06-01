#include<stdio.h>

int ft_average(int *a, int size)
{
    int i;
    int sum;

    i = 0;
    sum = 0;
    while(i <  size )
    {
        sum += a[i];
        i++;
    }
    return(sum / size);
}

/*int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    printf("%i\n",ft_average(arr, sizeof(arr)/sizeof(int)));
}*/