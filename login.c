#include <string.h>
#include <stdio.h>

//returns 0 if both username and password is correct
//otherwise it returns 1

int login(char name[], char password[]){

    static char users[][2][32] = {
            {"john\n", "1234\n"},
            {"doe\n", "hunter2\n"},
            {"rick\n", "roll\n"}
    };

    int i;
    for(i = 0; i < 5; i++){
        if(strncmp(users[i][0], name, 32) == 0 && strncmp(users[i][1], password, 32) == 0){
            return 0;
        }
    };
    return 1;
}