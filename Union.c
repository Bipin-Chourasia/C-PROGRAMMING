#include<stdio.h>
int main(){
    struct user_data{
        char name[20];
        int age;
        union {
            long int voter_id;
            long int pan_id;
            long int aadhar_id;
        };
    };
    struct user_data ud;
    int option;
    printf("ENTER THE NAME:\n");
    gets(ud.name);
    printf("ENTER THE AGE:\n");
    scanf("%d",&ud.age);
    printf("ENTER THE OPTION OF ID CARD:1-VOTER, 2-PAN, 3-AADHAR\n");
    scanf("%d", &option);
    switch (option) {
        case 1:
            printf("ENTER THE VOTER ID:\n");
            scanf("%d", &ud.voter_id);
            break;
        case 2:
            printf("ENTER THE PAN ID:\n");
            scanf("ld", &ud.pan_id);
            break;
        case 3:
            printf("ENTER THE AADHAR ID:\n");
            scanf("%d", &ud.aadhar_id);
            break;
    }
    printf("name,%s\n",ud.name);
    printf("AGE,%d\n", ud.age);
    printf("ID CARD,%d\n" ,ud.aadhar_id);
}
