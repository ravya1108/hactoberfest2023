#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void print_menu(void);
void take_user_input(char message[]);

void encrypt(char msg[], size_t msg_len);
void decrypt(char msg[], size_t msg_len);

void addValue(char message[]);
void subValue(char message[]);

void reverse(char message[], int start, int end);

int main() {
    int should_exit = 0;

    do {
        print_menu();

        int user_choice = 0;
        printf("Your choice? ");
        scanf("%1d", &user_choice);

        char message[100] = {0};

        switch (user_choice) {
            case 1:
                take_user_input(message);
                encrypt(message, strlen(message));
                break;
            case 2:
                take_user_input(message);
                decrypt(message, strlen(message));
                break;
            case 3:
                should_exit = 1;
                break;
            default:
                printf("Invalid option\n");
                break;

        }

    } while(!should_exit);
}

void print_menu(void) {
    printf("1. Encrypt\n");
    printf("2. Decrypt\n");
    printf("3. Exit\n");
}

void take_user_input(char message[]) {
    printf("Enter your message: ");
    scanf("%s", message);
}

void encrypt(char msg[], size_t msg_len) {
    addValue(msg);
    
    printf("\n------------------------------\n");
    printf("Message length: %d\n", msg_len);
    printf("Encryption 1st process => %s\n", msg);
    
    reverse (msg ,0, msg_len - 1);
    printf("Encryption 2st process => %s\n", msg);
    
    printf("\nHence Message encrypted successfully!!\n");
    printf("------------------------------\n\n");
}

void decrypt(char msg[], size_t msg_len) {
    subValue(msg);
    
    printf("\n------------------------------\n");
    printf("Message length: %d\n",msg_len);
    printf("Decryption 1st process => %s\n", msg);
    
    reverse (msg, 0, msg_len - 1);
    printf("Decryption 2st process => %s\n", msg);
    
    printf("\nHence Message decrypted successfully!!\n");
    printf("------------------------------\n\n");
}

void addValue(char message[]) {
    int i=0;
    
    while(message[i]!='\0'){
        message[i] += 2;
        i++;
    } 
}

void subValue(char message[]) {
    int i=0;
    
    while(message[i]!='\0'){
        message[i] -= 2;
        i++;
    } 
}

void reverse(char message[], int start, int end) {
    char temp;
    
    if(start>=end){
        return;
    }
    
    temp = message[start];
    message[start] = message[end];
    message[end] = temp;
    reverse(message, start+1, end-1);

}
