# include<stdio.h>
# include<stdlib.h>
# include<string.h>

int main(){

int number_input = 0;
char  ** String = {0,} ;
int KBS1_idx = 0;
int KBS2_idx = 0;
int Order = 0; // KBS1 KBS2가 정렬 되어 있는가?
scanf("%d ", &number_input);
 String = (char **)malloc(number_input * sizeof(char*));
 for(int i = 0; i < number_input; i++){
  String[i] = (char*) malloc (sizeof(char) * 10);
 }
for(int i = 0 ; i < number_input;i++){
scanf("%s",String[i]);
}


for(int i = 0;i < number_input;i++){
    
    if(strcmp( String[i],"KBS1") == 0){
      KBS1_idx = i;
    }
    if(strcmp( String[i],"KBS2") == 0){
        KBS2_idx = i;
    }
}

if(KBS1_idx > KBS2_idx) Order =1;
else Order = 0;

for(int i = 0;i < KBS1_idx; i++){
    printf("1");
}
for(int i = 0;i < KBS1_idx; i++){
    printf("4");
}

for(int i = 0;i<KBS2_idx+Order;i++){
    printf("1");
}
for(int i = 0;i<KBS2_idx+Order-1;i++){
    printf("4");
}



 for(int i=0; i<number_input; i++){
    free(String[i]);
}
free(String);
}

