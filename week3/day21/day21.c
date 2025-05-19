//day21 of learning c
//name: Leigh
//date: 05/13/2025


//Simple password checker ("Enter password:")
//length = 6, Special characters, At least 1 capital letter, At least 1 number 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int has_digit(const char *str) {
    while (*str) {
        //isdigit expects an unsigned char or EOF otherwise it will cause a problem
        if (isdigit((unsigned char)*str)) {
            return 1;
        }
        str++;
    }
    return 0;
}

int has_special(const char *str) {
    const char specialCharacters[] = {'!', '@', '#', '$', '%', '^', '&', '*', '<', '>', '?', '/'};
    int len = sizeof(specialCharacters) / sizeof(specialCharacters[0]);

    while (*str) {
        for (int i = 0; i < len; i++) {
            if (*str == specialCharacters[i]) {
                return 1;
            }
        }
        str++;
    }
    return 0;
}

int has_capital(const char *str) {
    while (*str) {
        //isupper expects an unsigned char or EOF otherwise it will cause a problem
        if (isupper((unsigned char)*str)) {
            return 1;
        }
        str++;
    }
    return 0;
}

//*password points to the address of input
void passwordChecker(const char *password) {
    if (strlen(password) < 6) {
        printf("Password must be at least 6 characters long.\n");
        return;
    }

    if (!has_special(password)) {
        printf("Password must contain at least one special character.\n");
        return;
    }

    if (!has_capital(password)) {
        printf("Password must contain at least one capital letter.\n");
        return;
    }

    if (!has_digit(password)) {
        printf("Password must contain at least one digit.\n");
        return;
    }

    printf("Password accepted!\n");
}

int main() {
    char input[100];

    printf("Enter password: ");
    //if the variable is an int or float you have to assign an address to it unlike char
    //input is already a pointer cause of [100]
    scanf("%99s", input); 

    passwordChecker(input);

    return 0;
}
