#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,i,j,count=0; 
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n");
        for(j=0;j<n;j++)
        {
            if(j<n-1-i)
            {
            printf("%d",j);
            
            }
       
                
       }     
    }
    return 0;
}

