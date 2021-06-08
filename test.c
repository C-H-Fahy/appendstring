#include <stdio.h>

char * appendstr(char *a, char *b, int asize, int bsize, char *c){
    //appends two strings together
    asize = asize-1;
    bsize = bsize-1;
    for(int i = 0; i < asize; i++){
        printf("%x\n", a[i]);
    }
    for(int i = 0; i <= bsize; i++){
        c[i + asize] = b[i];
    }
    return(c);
    
}
int main(void){
    char a[] = "foo";
    char b[] = "bar";
    char c[sizeof(a) + sizeof(b) - 1];
    appendstr(a, b, sizeof(a), sizeof(b), c);
    printf("%s\n", c);
    return(0);
}

