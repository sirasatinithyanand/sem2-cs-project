#include <stdio.h>
#include "header.h"
#include <stdlib.h>
#include <conio.h>
#include "C:\Users\yasha\Desktop\CSP\Mail.h"
#define SIZE 100
int main()
{
    int numnum;
    char email[30];
    char str[SIZE], keystr[SIZE];
    printf("Enter your email \n");
    scanf("%s", email);
    fflush(stdin);
    printf("Enter 1 for Encryption and 2 for Decryption \n");
    scanf("%d", &numnum);
    fflush(stdin);
    if (numnum == 1)
    {

        printf("Enter the key: ");
        scanf("%[^\n]s", &keystr);
        printf("Key text: %s\n", keystr);

        printf("Enter the plaintext: ");
        scanf("\n");
        scanf("%[^\n]s", &str);
        printf("Plain text: %s\n", str);
        PlayfairCrypt(str, keystr);
    }
    else if (numnum == 2)
    {

        printf("Enter the key: ");
        scanf("%[^\n]s", &keystr);
        printf("Key text: %s\n", keystr);
        fflush(stdin);

        printf("Enter the ciphertext: ");
        scanf("%[^\n]s", &str);
        printf("Cipher text: %s\n", str);

        //Calling the PlayfairDeCrypt function
        PlayfairDeCrypt(str, keystr);
    }

    else
    {
        printf("Invalid Input \n");
    }

    FILE *fp1 = fopen("mail.txt", "w");
    fprintf(fp1, "%s", email);
    fclose(fp1);
    printf("Sending Email ....\n");
    SendMail(0);

    return 0;
}
