#include <stdio.h>
int main(){
    FILE *file;
    if (file = fopen("FileHandling01.txt", "r+")){
        fputs("Home Address: Bangarmau, Unnao, Uttar-Pradesh India 209868",file);
        fputs("Current Address: C101 - Bh6, Lovely Professional University",file);
        printf("Done ...........");
    }
    else{
        printf("Error in opening file");
    }
    fclose(file);
    return 0;
}