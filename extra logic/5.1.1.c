#include<stdio.h>

int fibo(int f)                 //recursive method
{
    if(f == 0)
    {
        return 0;
    }
    else if(f == 1)
    {
        return 1;
    }
    else
    {
        return fibo(f-1) + fibo(f-2);
    }
}


int main()
{
    int n,i;
    printf("Enter the numb of sequence : ");
    scanf("%d", &n);

    printf("\nYour sequence is : ");
    for (i = 0; i < n; i++)
    {
        printf(" %d ", fibo(i));
    }
    
    return 0; 
}