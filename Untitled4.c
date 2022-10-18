#include <stdio.h>
int main()
{
    int i,j,k=0,p=0,a[105][105]={0},row,col;
    scanf("%d %d",&row,&col);
    for(i=0;i<row;i++)
        for(j=0;j<col;j++)
    scanf("%d",&a[i][j]);
    i=0;
    while(p<row+col-1)
    {
        for(j=k;j>=0;j--)
        {
         if(i<row&&j<col&&i>=0&&j>=0)
         printf("%d\n",a[i][j]);
        i++;
        }
        k++;
        i=0;
        p++;
    }
}

