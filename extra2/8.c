#include<stdio.h>
// To copy file content using command line argument.
int main(int argc, char *argv[]) {
    FILE *mf, *cf;
    char s;
    mf = fopen(argv[1], "r");
    cf = fopen(argv[2], "w");
    while(1){
        s = fgetc(mf);
        if(s == EOF)
        break;
        fputc(s, cf);
    }
    fclose(mf);
    fclose(cf);
    return 0;
}