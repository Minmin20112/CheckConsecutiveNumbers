/******************************************************************************
Tran Tuan Minh
Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// #include <stdio.h>
// #include <stdbool.h>
// #include <stdlib.h>

// bool isConsecutive (long n)
// {
//    long prevDigit=-1;
//    while (n)
//    {
//        long curDigit=n%10;

//        if(prevDigit==-1)
//        {
//            prevDigit=curDigit;
//        }
//        else 
//        {
//            if((prevDigit-curDigit)!=1)
//            return false;
//        }
//        prevDigit=curDigit;
//        n/=10;
//    }
//    return true;
// }
// int getsize(int l, int r)
// {   
//     int n;
//     while(l<=r)
//     {
//         if(isConsecutive(l))
//         {
//            n++;
//         }
//         l++;
//     }
//     return n;
// }

// int main() 
// {
//     long l, r;
//     int count;
//     scanf("%ld %ld", &l, &r);
//     int n=getsize(l,r);
//     long arr[n];
//     // long n=r-l+1;

//     // for(long i=0;i<n;i++)
//     // {
//     // arr[i]=l;
//     // l++;
//     // }
//     // printf("[");
//     while(l<=r)
//     {
//         if(isConsecutive(l))
//         {
//            arr[count]=l;
//            count++;
//         }
        
//         l++;
//     }
//     // printf("]")
//     printf("[");
//     for(int i=0;i<n;i++)
//     {
//         if(i!=n-1)
//         {
//         printf("%ld,",arr[i]);
//         }
//         else printf("%ld",arr[i]);
//     }
//     printf("]");
//     return 0;
// }


#include <stdio.h>

void sortArr(int n, long arr[])
{
    long temp;
    for (int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            }
        }
    }
}
void steppingNos(int l, int r)
{
    int count;
    int arr[100];
    for(int i=0;i<9;i++)
    {
        DFSTravelsal(l,r,i,arr);
    }
    sortArr(count,arr);
}
void DFSTravelsal(int l,int r, int stepnum, int steplist[])
{
    static int i;
    if(stepnum>=l&&stepnum<=r)
    {
        steplist[i]=stepnum;
        i++;
    }
    if(stepnum<=l&&stepnum>=r)
    {
        return;
    }
}
main ()
{

}
