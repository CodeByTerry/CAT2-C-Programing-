#include<stdio.h>
int main (){
    //Declare and initialize the 2d array
    int scores[2][4] = {
        {65,92,35,70},
        {84,72,59,67}
    };
    //print the elements of the array using a nested loop
    for (int i = 0; i<2; i++){
        for (int j = 0; j<4; j++) {
            printf("%d",scores[i][j]);
        }
        printf("\n");//new line after each row
    }
    return 0;
}
    