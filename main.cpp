#include <iostream>
#include <string.h>
#define MAXSIZE 255


void problem2(){
    printf("Input string for transformation:\n");
    char *str = (char *) malloc(sizeof(char) * MAXSIZE);
    fgets(str, MAXSIZE, stdin);
    char words[MAXSIZE];
    memset(words, '\0', MAXSIZE);
    char *word = strtok(str, " .");
    while (word != NULL) {
        strcat(words, word);
        strcat(words, " ");
        word = strtok(NULL, " .\n");
    }
    int size = strlen(str) - 2;
    char* words_copy = (char *) malloc(sizeof(char) * MAXSIZE);
    char* last_word = (char *) malloc(sizeof(char) * MAXSIZE);
    strcpy(words_copy, words);
    char *cur = strtok(words," .");

    while (cur != NULL){
        last_word = cur;
        cur = strtok(NULL," .");
    }


    char *check_word=strtok(words_copy," .");

    while (check_word!=NULL){
        if(strcmp(check_word, words_copy) != 0) printf("%s ", check_word);
        check_word=strtok(NULL," .");
    }

}



int main() {
    printf("TASK10.2\n");
    problem2();
    return 0;
}
