#include <stdio.h>

int main(void){
    int blanks=0, digits=0, letters=0, others=0;
    int c; // use for int value of character
    
    printf("Enter text (Ctrl+D or Ctrl+Z then Enter to end): ");

    while((c = getchar()) != EOF){
        //getchar() returns the next character from the input. It is equivalent to fgetc(stdin). 

        //EOF is a macro that expands to an integer constant expression with type int and an implementation-defined value that is not negative. It is used to indicate end-of-file when reading from a stream.

        if(c == ' '){
            blanks++;
        }
        else if(c >= '0' && c <= '9'){
            digits++;
        }
        else if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
            letters++;
        }
        else{
            others++;
        }
    }

    printf("blanks = %d, digits = %d, letters = %d, others = %d\n", blanks, digits, letters, others);

    return 0;
}


