/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//menu driven calculator//
#include <stdio.h>
void main()
{
    int a,b,v;
    char n;
    do
    {
        printf("enter two numbers\n");
        scanf("%d %d",&a,&b);
        printf("1. add\n 2. subtract\n 3. multiply\n 4. divide\n");
        printf("enter the number to your choice\n");
        scanf("%d",&v);
        switch(v)
        {
            case 1: printf("%d+%d=%d",a,b,a+b);
            break;
            case 2: printf("%d-%d=%d",a,b,a-b);
            break;
            case 3: printf("%d*%d=%d",a,b,a*b);
            break;
            case 4: printf("%d/%d=%f",a,b,a/b);
            break;
            default : printf("the input is valid\n");
            
        }
        printf("if you want to continu then press 1\n");
        scanf ("%d",&n);
    }
    while(n==1);
}
