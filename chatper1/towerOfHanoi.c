// #include <stdio.h>
// #define MAX 64
// #define SWAP(x,y,t) ((t)=(x),(x)=(y),(y)=(t))

// int sortTower(int towers[3][MAX], int counter[3], int ct, int lasttower){
//     int temp = 3-(ct+lasttower);
//     // printf("%d\n", temp);
//     if (counter[3]==63){
//         return 1;
//     }
//     if (counter[ct] == -1){
        
//         if (counter[temp] == -1){
//             int t=lasttower;
//             lasttower=ct;
//             ct=t;        
//         } else
//         {
//             int t=ct;
//             ct = temp;
//             temp=ct;
//         }
        

        
//         sortTower(towers,counter,ct,lasttower);
//     }
//     if (towers[ct][counter[ct]] < towers[temp][counter[temp]]){
//         counter[temp]++;
//         towers[temp][counter[temp]] = towers[ct][counter[ct]];
//         counter[ct]--;
//         printf("Disc number %d moved from tower %d to tower %d\n", counter[ct]+2,(ct%3)+1,lasttower+1);
//     }
//     lasttower = temp;
//     ct = 3 - (ct+lasttower);
//     printf("%d\n%d\n", lasttower, ct);
//     sortTower(towers,counter,ct,lasttower);


// }

// int main(){
//     int towers[3][MAX];
//     int counter[3] = {MAX-1,-1,-1};
//     int ct=0; //current tower
//     int lasttower = -1; // last tower to which disc placed.

//     for (int i=MAX-1; i>-1; i--){
//         towers[0][i] = -1*i;        
//     }
    
//     if (lasttower==-1){
//         towers[1][0] = towers[0][63];
//         counter[1]++;
//         printf("Disc number %d moved from tower %d to tower %d\n", 64,1,2);
//         towers[2][0] = towers[0][62];
//         counter[2]++;
//         printf("Disc number %d moved from tower %d to tower %d\n", 63,1,3);
//         counter[0] -=2;
//         lasttower=2;        
//     }
//     if (sortTower(towers, counter, ct, lasttower)){
//         printf("Sorted!\n");
//     }

//     return 0;
// }

#include <stdio.h>


void towerOfHanoi(int n, char source, char auxiliary, char destination) {
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", source, destination);
        return;
    }
    
    towerOfHanoi(n - 1, source, destination, auxiliary);
    printf("Move disk %d from %c to %c\n", n, source, destination);
    towerOfHanoi(n - 1, auxiliary, source, destination);
}

int main() {
    int n = 64; // Number of discs
    char source = 'A', auxiliary = 'B', destination = 'C';
    
    towerOfHanoi(n, source, auxiliary, destination);
    
    return 0;
}
