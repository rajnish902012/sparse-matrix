#include<stdio.h>
int main()
{
    int A[10][10],B[51][3],r,c,i,j,cnt=0,a=1;
    printf("\n\n\t ENTER THE NUMBER OF ROWS OF MATRIX (MAX 10) : ");
    scanf("%d",&r);
    printf("\n\n\t ENTER THE NUMBER OF COLUMNS OF MATRIX (MAX 10) : ");
    scanf("%d",&c);
    printf("\n\n\t ENTER THE ELEMENTS : ");
    for(i=0;i<r;++i)
        for(j=0;j<c;++j)
        {
            scanf("%d",&A[i][j]);
            if(A[i][j]!=0)
            {
                cnt++;
                B[a][0]=i+1;
                B[a][1]=j+1;
                B[a][2]=A[i][j];
                a++;
            }
        }
    B[0][0]=r;
    B[0][1]=c;
    B[0][2]=cnt;
    if(cnt>0.75*r*c)
        printf("\n\n\t THE MATRIX IS NOT A SPARSE MATRIX...\n\n");
    else
    {
        printf("\n\n\t THE SPARSE MATRIX IS : \n\n\t ");
        for(i=0;i<a;++i)
        {
            for(j=0;j<3;++j)
            {
                printf("%d ",B[i][j]);
            }
            printf("\n\t ");
        }
    }
    return 0;
}

