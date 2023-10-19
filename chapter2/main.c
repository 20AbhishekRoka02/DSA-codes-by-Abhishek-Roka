#include <stdio.h>
#include<stdlib.h>

// int main(){
//     int arr[1][2][3] = {
//         {
//             {
//                 {1},{2},{3}
//                 },
//             {
//                 {4},{5},{6}
//                 }
//             }
//         };
//     // int secondarr[4] = {1,2,3,4};
//     // int *newSarr = secondarr;
//     // int *newarr = arr;
//     // printf("%d\n",*(newarr+0));
//     // printf("%d\n",*(newSarr+3));
//     return 0;
// }

int * make2dArray(int rows, int cols){
    int *x = (int) malloc(rows * cols * sizeof(int));
    for (int i=0; i<20; i++){
        *(x+i) = i+3;
    }
    return x;

}

int main(){
    int *arr = make2dArray(4,5);
    for (int i=0; i<20; i++){
        printf("%d\n", *(arr+i));
    }
    return 0;
}