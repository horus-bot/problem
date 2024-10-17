
#include <stdio.h>
#include <string.h>

int main() {
    char harsh[]="hgdhyjgbehteiutgjffsGLSHJGFORIGVLHSJKGFEURBVJHSDFIYWERGFJHSADGFUGFIDARBGGHIARE    DHGLDAIK  GHIUGHLJGarsh";
    int length = strlen(harsh),count=0;
    printf("%d using strlen function\n",length);
    printf("%s",harsh);
    char vowels[]="a,e,i,o,u,A,E,I,O,U";
    while (harsh[count] !='\0'){
        count++;
    }

    printf("\n%d is the elemts in the string",count);
    char harsh2[length];
    strcpy(harsh2,harsh);
    printf("%s is the copied string",harsh2);
    
    getchar();


    return 0;
}
