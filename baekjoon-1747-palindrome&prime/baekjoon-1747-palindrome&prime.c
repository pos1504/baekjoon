#include<stdio.h>
#include<math.h>
#include <string.h>
#include <stdbool.h>
#include<stdlib.h>


char* reverseString(char str[]) {
    int length = strlen(str);
    int start = 0;
    int end = length - 1;

    while (start < end) {
        // 문자 교환
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        // 다음 문자로 이동
        start++;
        end--;
    }
   // printf("%s", str);
    return str;
}


bool isPrime(int n) {
    if (n <= 1) {
      //  printf("false");
        return false;
      
    }
       

        for (int i = 2; i <= sqrt(n); i++) {
            if ((n % i) == 0) {
              //  printf("false");
                return false;
            }
                
        }
       // printf("true");
    return true;
}
bool padal(int n) {
    int  arr[10]={0}, arr_reverse[10] = {0};
    int i, j ,padal=1;
    for (i = 0; n != 0; i++) {
        arr[i] = n % 10;
        n= n/10;
    }
    j = i - 1; // arr 마지막 인덱스로 이동
    i = 0;
    for (j; j >= 0; j--) {
        arr_reverse[i] = arr[j];
        i++;
    }
    for (i = 0; i < 10; i++) {
        if(arr[i] != arr_reverse[i]) {
            padal = 0;
        }
    }
    if (padal == 1) {
        return true;
    }
    else return false;
    
    

}

int main(void) {
    int q,answer;
    
    scanf_s("%d", &q);
    for(int i = q;;i++){
        if (isPrime(i) && padal(i)) {
            answer = i;
            break;
        }
    }
 
    printf("%d", answer);
    
}


