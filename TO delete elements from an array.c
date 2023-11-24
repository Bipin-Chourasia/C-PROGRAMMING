//DELETION OF AN ELEMENT FROM AN ARRAY.

#include<stdio.h>
int main(){
    int data[5]={10,5,20,44,69};
    int index;
    for(int i=0;i<5;i++){
        printf("%d",data);
    }
    printf("\n ENTER THE INDEX POSITION WHOSE VALUE IS TO BE DELETED:\n");
    scanf("%d",&index);
    for(int i=index;i<5;i++){
        data[i]=data[i+1];
    }
    for(int i=0;i<4;i++){
        printf("%d ",data[i]);
    }

}