#include "login.h"
#include <stdio.h>

int main(){
    char name[8] = "";
    char password[8] = "";

    do{
        //gets username and password and stores them as strings
        printf("\nusername\n");
        fgets(name, 32, stdin);

        printf("\npassword\n");
        fgets(password, 32, stdin);


    }while(login(name, password) == 1);
}