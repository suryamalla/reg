#include <stdio.h>
#include <conio.h>

int sum(int **a, int **b, int n)
{
    int **sum;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    return **sum;
}
void disp(int **sum, int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf(sum[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int n,**a,**b,**res;
    printf("enter the size of matrix");
    scanf("%d",&n);
      for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("matrixA[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
            printf("matrixB[%d][%d]=",i,j);
             scanf("%d",&a[i][j]);
        }
    }
res=sum(**a,**b,n);

disp(**res,n);

}