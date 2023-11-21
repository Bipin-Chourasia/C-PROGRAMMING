#include <stdio.h>
int main(){
    FILE *fp;
    char data[100];
    fp= fopen("sample.txt","r");
    if(fp!=NULL){
        printf("FILE OPENEND !");
        fgets(data,100,fp);
        printf("%s",data);
    }
    else{
        printf("ERROR !");
    }
}