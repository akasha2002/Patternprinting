#include <stdio.h>
#include <ctype.h>
int main()
{    int v=0;
    //printf("Hello World");
    char temp;
    char a[1000];
    scanf("%s",a);
    char aa[1000];
    for(int i=0;a[i];i++){
        if(isdigit(a[i])){
            aa[v]=a[i];
            v++;
        }
    }
    for(int i=0;i<v;i++){
        for(int j=i+1;j<v;j++){
            if(aa[i] > aa[j]){
                temp=aa[i];
                aa[i]=aa[j];
                aa[j]=temp;
            }
        }
    }
    int count=1,z=0;
    int rep[100];
    int r=0;
    char aaa[100];
    for(int i=0;i<v;i++){
        //printf("i");
        if( aa[i]==aa[i+1]){
            //printf("i");
            count++;
        }
        else{
            //printf("i");
            aaa[z]=aa[i];
            z++;
            //printf("f%d ",z);
            rep[r]=count;
            r++;
            //printf("v%d ",z);
            count =1;
        }
        
    }
    int aaaa[1000];
    for(int j=0;j<aaa[j];j++){
         aaaa[j]=aaa[j];
        
    }
    //for(int i=0;aaaa[i];i++){
     //   printf("%d %d " ,aaaa[i]-48,rep[i]);
    //}
    int g=0,n=0;
    for(int i=0;i<=9;i++){
        //printf("%d %d\n",g,aaaa[n]-48);
        if(g == aaaa[n]-48){
            //printf("i");
            printf("%d",rep[n]);
            g++;
            n++;
        }
        else{
            printf("0");
            g++;
            //n++;
        }
        //n++;
        //g++;
    }
    
    
    
    
    return 0;
}

