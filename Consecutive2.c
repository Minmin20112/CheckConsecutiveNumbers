#include<stdio.h>

void sortArr(int n, int arr[])
{
    int temp;
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
// void steppingNos(int l, in r)
// {
//     int arr[20];
//     for(int i=1;i<9;i++)
//     {
//         DFSTravelsal(l,r,i,arr);
//     }
//     //sortArr(count,arr);
// }
int DFSTravelsal(long l,long r, int stepnum, int steplist[])
{
    static int i;
    if(stepnum>=l&&stepnum<=r)
    {
        steplist[i]=stepnum;
        i++;
    }
    if(stepnum<l&&stepnum>r)
    {
        return i;
    }
    int lastdigit=stepnum%10;
    if(lastdigit!=9)
    {
    int stepnumright=stepnum*10+(lastdigit+1);
    DFSTravelsal(l,r,stepnumright,steplist);
    }
    return i;
}

void main ()
{
int arr[50];
long long l,r;
int count;
printf("Input:");
scanf("%lld %lld",&l,&r);
for(int i=1;i<=9;i++)
    {
    count=DFSTravelsal(l,r,i,arr);
    // printf("num count:%d",count);
    }
// printf("last count:%d",count);
sortArr(count,arr);
printf("[");
for(int i=0;i<count;i++)
    {
    if(i==count-1)
        {
    printf("%d",arr[i]);
        }
    else printf("%d,",arr[i]);
    }
printf("]");
}
