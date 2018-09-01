#include<stdio.h>
#include <stdlib.h>

int main()
{
    char a[100][100];
    int n,index=0;
    scanf("%d",&n);
    while(scanf("%s",a[index])>0)
    {
        index++;
    }
    for(int index=0;index<n;index++)
    {
        for(int index1=0;index1<n;index1++)
        {
            if(a[index][index1]>='1' && a[index][index1]<='9')
            {
                int d=a[index][index1]-48;
                for(int index2=index-d;index2<=index+d;index2++)
                {
                    if(index2>=0)
                    {
                    for(int index3=index1-d;index3<=index1+d;index3++)
                    {
                        if(index3>=0)
                        {
                            if(a[index2][index3]>='1' && a[index2][index3]<='9')
                            {
                                a[index2][index3]=a[index2][index3];
                            }
                            else
                            {
                            a[index2][index3]='X';
                            }
                        }
                    }
                    }
                }
            }
        }
    }
    int count=0;
    for(int index=0;index<n;index++)
    {
        for(int index1=0;index1<n;index1++)
        {
           // printf("%c",a[index][index1]);
            if(a[index][index1] == 'P')
            {
                count++;
            }
        }//printf("\n");
    }
    printf("%d",count);


}



