#include<stdio.h>

int main(){

 printf("input number: "); 
  int n;
    scanf("%d", &n);
    for(int i=n;i>=1; i--){
        for(int j=n;j>=1;j--){
            printf("%d ",i<j?j:i); 
        }
        for(int j=2;j<=n;j++){
           printf("%d ",i<j?j:i); 

        }
        printf("\n"); 
    }
for(int i=2;i<=n;i++){
      for(int j=n;j>=1; j--){
        
            printf("%d ",i<j?j:i); 
        }
        for(int j=2;j<=n;j++){
            printf("%d ",i<j?j:i);
        
    }
     printf("\n");
}
return 0; 
}