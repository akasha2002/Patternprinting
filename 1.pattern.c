/******************************************************************************
Input

3

Expected Output

    3 3 3 3 3
    3 2 2 2 3
    3 2 1 2 3
    3 2 2 2 3
    3 3 3 3 3

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,c;
    scanf("%d",&a);
    c=(a+(a-1));
    //printf(" c=%d\n",c);
    int v[c][c];
    for(int i=0;i<c;i++){
        for(int j=0;j<c;j++){
            if(i==0 ||i==c-1 ||j==0 || j==c-1){
                //printf("i=%d",i);
                v[i][j]=a;
            }
            else if((i ==1 && j<=3 && j>=1)|| (i ==3 && j<=3 && j>=1)|| (i==2 && j==1) ||(i==2 && j==3)){
                v[i][j]=a-1;
            }
            else
                v[i][j]=a-2;
            }
        }

     for(int i=0;i<c;i++){
        for(int j=0;j<c;j++){
           printf("%d ",v[i][j]);
        }
        printf("\n");
    }


    return 0;
}


