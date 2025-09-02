#include<stdio.h>

int fibo(int f)
{
                        //iterative method

    if(f==0)
    return 0;

    if(f==1)
    return 1; 

    int x=0,y=1,z;
    for(int i=2;i<=f;i++)         //0,1,1,2,3,5...
    {
        z=x+y;
        x=y;
        y=z;
    }
    return y;
   
}


int main()
{
    int n;
    printf("Enter the numb of sequence : ");
    scanf("%d", &n);

    printf("\nYour sequence is :  ");

    for(int i=0;i<n;i++)
    {
        printf(" %d ",fibo(i));
    }
    
    
    
    return 0; 
}

//this method is more efficient bcz this method calls func only for once 
