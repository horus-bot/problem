
#include <stdio.h>
#include <string.h>

int main() {
    char harh[]="harsh";
    int length = strlen(harh);
    printf("%d\n",length);
    printf("%s",harh);
    for (int i=0; i<length/2;i++)
    {
        char temp=harh[i];
        harh[i]=harh[length-i-1];
        harh[length/2-i]=harh[i];
        
        
    }
    printf("\n%s is the reveresed string",harh);
    
    getchar();


    return 0;
}
