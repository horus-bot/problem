
#include <stdio.h>
#include <string.h>

int main() {
    char harsh[]="hgdhyjgbehteiutgjffsGLSHJGFORIGVLHSJKGFEURBVJHSDFIYWERGFJHSADGFUGFIDARBGGHIARE    DHGLDAIK  GHIUGHLJGarsh";
    int length = strlen(harsh),count=0;
    printf("%d\n",length);
    printf("%s",harsh);
    char vowels[]="a,e,i,o,u,A,E,I,O,U";
    for (int i=0; i<length;i++)
    {
        if ( strchr(vowels,harsh[i])){
            count++;
        }
        
        
        
    }
    int consta=length-count;
    printf("\n%d is the amount of times consonants repoeated",consta);
    
    getchar();


    return 0;
}
