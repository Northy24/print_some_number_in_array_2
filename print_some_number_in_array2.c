#include <stdio.h>

int main(){
    int n[10];
    int *p;
    int i = 0;
    //input
    printf("Enter your number : ");
    for(int i = 0;i < 10;i++){
        scanf("%d",&n[i]);
    }
    p = n;
    //print data
    printf("Data in array : ");
    while(i < 10){
        printf("%d ",*p);
        *p++;
        i++;
    }
    i=0;
    printf("\nresult : ");
    while(i < 10){
        if(i != 9  && i != 0){
            if(*(p-1)%2 != 0 && *(p+1)%2 != 0){
                    printf("%d ",*p);
            }
        }
        *p--;
        i++;
    }
    return 0;
}
