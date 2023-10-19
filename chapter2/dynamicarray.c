#include<stdio.h>
#include<stdlib.h>
// #define MAX 

// Using pointer
void dynamicarray(int * array, int element, int index){
    array = (int *) realloc(array, sizeof(int) * index);
    *(array + (index-1)) = element;
    
}

int main(){
    int * arr = calloc(1,sizeof(int));
    // int * arr = NULL;
    *(arr) = 3;
    int n=1, bool=1, num;
    while (bool)
    {
        printf("Enter element: ");
        scanf("%d", &num);
        if (num == 9){
            bool=0;
            
        } else{
            n++;    
            dynamicarray(arr,num,n);
        }
        
        
    }
    printf("n is %d\n", n);
    for (int i=0; i<n; i++){
        printf("n=%d -> %d\n",i,*(arr+i));
    }

        


    return 0;
}

