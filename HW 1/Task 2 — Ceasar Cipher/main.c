#include <stdio.h>
#include <string.h>

int main(){
    char word[50];
    int pos;

    printf("Enter your word: \n");
    scanf("%s", word);
    printf("Enter number of positions: \n");
    scanf("%i", &pos);

    int len = strlen(word);
    
    for(int i=0; i<len; i+=1){
        word[i]+=pos;
    }

    printf("%s", word);
}    
    