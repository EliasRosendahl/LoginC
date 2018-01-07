#include "login.h"
#include <stdio.h>
#include <stdlib.h>

int main(){

    /*name and password are defined as pointers
     * at login() they should not be passed as &name but simply as name, as
     * they are already pointers
     * */
    char * name = malloc(8);
    char * password = malloc(8);

    int i;
    for(i = 0; i < 3; i++){
        printf("\nusername\n");
        fgets(name, 8, stdin);

        printf("\npassword\n");
        fgets(password, 32, stdin);
        if(login(name, password) == 0){
            printf("login successful");
            break;
        }
    }
}