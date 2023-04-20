#include <stdio.h>
int main(){
    FILE *file;
    if(file=fopen("FileHandling01.txt","w")){
        if(fprintf(file,"He was a great personality.....")>=0){
            printf("Successfull");
        }
    }
    fclose(file);
    return 0;
}