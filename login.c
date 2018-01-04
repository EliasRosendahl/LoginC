#include <string.h>

//returns 0 if both username and password is correct
//otherwise it returns 1

int login(char name[], char password[]){
    if(strncmp(name, "john\n", 32) == 0 && strncmp(password, "1234\n", 32) == 0){
        return 0;
    }
    return 1;
}