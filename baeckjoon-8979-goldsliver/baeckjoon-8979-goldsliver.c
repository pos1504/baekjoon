#include<stdio.h>
#include <stdlib.h>
/*
void swapRows(int **array, int i) {
    for (int j = 0; j < 4; j++) {
        int temp = array[i][j];
        array[i][j] = array[i + 1][j];
        array[i + 1][j] = temp;
    }
}
int main(){
    int target = 0,count = 0;
    int a = 4;
    scanf("%d %d",&count,&target);
    
    int ** array = (int**)malloc (sizeof(int*) * count);
    for(int i = 0; i < count ; i++){
        array[i] = (int*) malloc (sizeof(int) * a);
    }


    

    for(int i = 0 ; i < count ; i ++){
        scanf(" %d %d %d %d",&array[i][0],&array[i][1],&array[i][2],&array[i][3]);
    }

    for(int i = 0; i < count  ; i ++){
       for(int j = 0;j < count-1-i; j ++){
             if(array[j][1] < array[j+1][1]){
                swapRows(array,j);
            }
            else if (array[j][1] == array[j+1][1] && array[j][2] < array[j+1][2]){
                swapRows(array,j);
            }
            else if (array[j][1] == array[j+1][1] && array[j][2] == array[j+1][2] && array[j][3] < array[j+1][3]){
                swapRows(array,j);
            }
       }
       
    }

    for(int i = 0;i < count  ; i++){
        for(int j = 0 ; j < count ; j ++){
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }


    for(int i = 0;i < count ; i++){
        free(array[i]);
    }
    free(array);

    return 0;
}

내가 짠 코드
*/
/*
#include <stdio.h>
#include <stdlib.h>

void swapRows(int array[][5], int i) {
    for (int j = 0; j < 5; j++) {
        int temp = array[i][j];
        array[i][j] = array[i + 1][j];
        array[i + 1][j] = temp;
    }
}

int main() {
    int count = 0;
    int target = 0;
    int same = 0;
    scanf("%d %d", &count, &target);

    int (*array)[5] = malloc(sizeof(int) * count * 5); // 하나의 메모리 블록 사용

    for (int i = 0; i < count; i++) {
        scanf("%d %d %d %d", &array[i][0], &array[i][1], &array[i][2], &array[i][3]);
        array[i][4] = 0;
    }

    for (int i = 0; i < count; i++) {
        for (int j = 0; j < count - 1 - i; j++) {
            if (array[j][1] == array[j + 1][1] && array[j][2] == array[j + 1][2] && array[j][3] == array[j + 1][3]) {
                array[j+1][4]++;
                same ++;
            }
            if (array[j][1] < array[j + 1][1] ||
                (array[j][1] == array[j + 1][1] && array[j][2] < array[j + 1][2]) ||
                (array[j][1] == array[j + 1][1] && array[j][2] == array[j + 1][2] && array[j][3] < array[j + 1][3])) {
                swapRows(array, j);
            }
        }
    }

    for (int i = 0; i < count; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    printf("\n %d",same);
    free(array);

    return 0;
}
*/

#include <stdio.h>
#include <stdlib.h>

void swapRows(int array[][5], int i) {
    for (int j = 0; j < 5; j++) {
        int temp = array[i][j];
        array[i][j] = array[i + 1][j];
        array[i + 1][j] = temp;
    }
}

int main() {
    int count = 0;
    int target = 0,target_i = 0;
    int rank = 0;
    scanf("%d %d", &count, &target);

    int (*array)[5] = malloc(sizeof(int) * count * 5); // 하나의 메모리 블록 사용

    for (int i = 0; i < count; i++) {
        scanf("%d %d %d %d", &array[i][0], &array[i][1], &array[i][2], &array[i][3]);
        array[i][4] = 0;

        if(array[i][0] == target){
            target_i = i;
        }
    }

    for (int i = 0; i < count; i++) {
        if(target_i != i){
            if(array[i][1] > array[target_i][1] || 
            (array[i][1] == array[target_i][1] && array[i][2] > array[target_i][2]) ||  
            (array[i][1] ==array[target_i][1] && array[i][2] == array[target_i][2] && array[i][3] > array[target_i][3]) ){
                rank++;
            }
        }

    
    }
    printf("%d", rank + 1);
 
    free(array);

    return 0;
}

