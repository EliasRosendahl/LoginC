#include "login.h"
#include <stdio.h>

int main(){
    char name[8] = "";
    char password[8] = "";
    int tries = 0;

    int i;
    for(i = 0; i < 3; i++){
        printf("\nusername\n");
        fgets(name, 32, stdin);

        printf("\npassword\n");
        fgets(password, 32, stdin);
        if(login(name, password) == 0){
            printf("login successful");
            break;
        }
    }
}