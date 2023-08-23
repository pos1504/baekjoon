#include<stdio.h>

int main(){
    int **arr = NULL;
    int **arr_r = NULL;
    int N;
    scanf("%d",&N);
  // 배열   
   arr = (int **)malloc(sizeof(int *) * N);
    arr_r = (int **)malloc(sizeof(int *) * N);

    for (int i = 0; i < N; i++) {
        arr[i] = (int *)malloc(sizeof(int) * N);
        arr_r[i] = (int *)malloc(sizeof(int) * N);
    }
  // Clear input buffer
    getchar();
// Input values
    for(int i = 0; i < N ; i ++ ){
       
        for(int j = 0 ;j < N ; j ++){
         char temp  = NULL;
            scanf(" %c",&temp); // Add space before %c to skip whitespace
            if(temp == '.'){
                arr[i][j] = 0;
            }
            else {
                arr[i][j] = 1;
            }

        }
    }
// Transpose the array
    for(int i = 0; i < N; i++){
        for(int j = 0;j < N; j++){
            arr_r[i][j] = arr[j][i];
        }
    }


//count to sleep

int sleep_count_r = 0,sleep_count_c = 0;
for(int i = 0 ; i < N; i++){
    int count_r = 0,count_c =0;
    for(int j = 0 ; j < N; j++){
        if(arr[i][j] == 0){
            count_r++;         
        }
        else if(arr[i][j] == 1){
            if(count_r >= 2){
                sleep_count_r++;
                
            }
            count_r = 0;
        }
        if(j == (N-1)){
             if(count_r >= 2){
                sleep_count_r++;
                
            }
        }
       

        if(arr_r[i][j] == 0){
            count_c++;         
        }
        else if(arr_r[i][j] == 1){
            if(count_c >= 2){
                sleep_count_c++;
            
            }
             count_c = 0;
        }

        if(j == (N-1)){
             if(count_c >= 2){
                sleep_count_c++;
                
            }
        }
    }
}

 // Print the arrays
    for(int i = 0; i < N; i++){
        for(int j = 0;j < N; j++){
           printf("%d ",arr[i][j]);
        }
            printf("\n");
    }
    
printf("\n\n\n");


    for(int i = 0; i < N; i++){
        for(int j = 0;j < N; j++){
           printf("%d ",arr_r[i][j]);
        }
            printf("\n");
    }
    

printf("\n\n\n");

printf("row : %d col : %d",sleep_count_r,sleep_count_c);


    for (int i = 0; i < N; i++) {
        free(arr[i]);
        free(arr_r[i]);
    }

    free(arr);
    free(arr_r);
}