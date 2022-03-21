#include <stdio.h>
#include <string.h>

void main()
{
    char plainText[] = "GIVEMONEY";
    char key[] = "LOCK";

    int plainTextLength = strlen(plainText);
    int keyLength = strlen(key);
    int i, j;

    char newKey[plainTextLength];
    char encryptedText[plainTextLength];
    char decryptedText[plainTextLength];

    // generate new key
    for (i = 0, j = 0; i < plainTextLength; i++, j++)
    {
        if (j == keyLength)
            j = 0;

        newKey[i] = key[j];
    }

    newKey[i] = '\0';

    // encryption
    for (i = 0; i < plainTextLength; ++i)
        encryptedText[i] = ((plainText[i] + newKey[i]) % 26) + 'A';
    encryptedText[i] = '\0';

    printf("Plain Text: %s", plainText);
    printf("\nKey: %s", key);
    printf("\nNew Key: %s", newKey);
    printf("\nEncrypted Text: %s", encryptedText);
}