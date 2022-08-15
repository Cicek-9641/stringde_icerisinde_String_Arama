#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char cumle[1000];
    printf("Bir cumle giriniz:");
    
    fgets(cumle,1000,stdin);
    char kelime[50];
    printf("Aranacak stringi giriniz:");
    scanf("%s",kelime);
    
    char *araptr;
    araptr=strstr(cumle,kelime);
    int adet=0;
    while(araptr!=NULL){
        adet++;
        araptr++;
        araptr=strstr(araptr,kelime);
    }
    printf("%s stringi cumle icinde %d tane vardir.",kelime,adet);

    return 0;
}

