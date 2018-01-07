#include "login.h"
#include <stdio.h>
#include <stdlib.h>

int main(){

    /*name and password are defined as pointers
     * at login() they should not be passed as &name but simply as name, as
     * they are already pointers
     * */

    /*malloc is given a length of 8, which means the max length
     * of the "string" should be 7 given the null terminator
     * therefore fgets only takes 7 characters
    */
    char * name = malloc(8);
    char * password = malloc(8);

    int i;
    for(i = 0; i < 3; i++){
        printf("\nusername\n");
        fgets(name, 7, stdin);

        printf("\npassword\n");
        fgets(password, 7, stdin);
        if(login(name, password) == 0){
            printf("login successful");
            break;
        }
    }
}