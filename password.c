#include <stdio.h>
#include <string.h>


int getPass(char* b) {
    char pass[100];
    FILE* f = fopen("password.txt", "r");
    if (f == NULL) {
        return 0;
    }
    fgets(pass, 100, f);
    fclose(f);
    return strcmp(b, pass) == 0;
    
}

int main(int argc, char **argv) {
    char buffer[100];
    printf("Enter password: ");
    scanf("%64s", buffer);
    if (getPass(buffer)) {
        printf("Access granted\n");
    } else {
        printf("Password wrong");
    }
    return 0;
}
