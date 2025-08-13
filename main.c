#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
#include <errno.h>
#define Lmax 100
void Character_to_Morse(char c, char s[]);
char Morse_to_Character(char s[]);
void AFF_T_of_CM();
int Lire_int(int *result);
int Lire_str(char *str, int N);
int main()
{
    int choix1;
    int i, k;
    char str[500];
    char zwa9 = 219, zwa999[52];
    char s[20];

    for (i = 0; i < 51; i++)
    {
        zwa999[i] = zwa9;
    }
    zwa999[51] = '\0';
    do
    {
        printf("                        %s\n", zwa999);
        printf("                        %c%c                                               %c%c\n", zwa9, zwa9, zwa9, zwa9);
        printf("                        %c%c                                               %c%c\n", zwa9, zwa9, zwa9, zwa9);
        printf("                        %c%c      saisir 0 pour sortir.                    %c%c\n", zwa9, zwa9, zwa9, zwa9);
        printf("                        %c%c      saisir 1 Code Morse to Character  text   %c%c\n", zwa9, zwa9, zwa9, zwa9);
        printf("                        %c%c      saisir 2 Character to code Morse  text   %c%c\n", zwa9, zwa9, zwa9, zwa9);
        printf("                        %c%c      saisir 3 Aff T                           %c%c\n", zwa9, zwa9, zwa9, zwa9);
        printf("                        %c%c      saisir 4 cls                             %c%c\n", zwa9, zwa9, zwa9, zwa9);
        printf("                        %c%c                                               %c%c\n", zwa9, zwa9, zwa9, zwa9);
        printf("                        %c%c                                               %c%c\n", zwa9, zwa9, zwa9, zwa9);
        printf("                        %c%c                                               %c%c\n", zwa9, zwa9, zwa9, zwa9);
        printf("                        %s\n", zwa999);
        // printf("\n\n                                 saisir  votre choix :");

        {
            int r = 0;
            do
            {
                printf("\n\n                                 saisir  votre choix :");
                r = Lire_int(&choix1);
            } while (r == 0);
        }

        switch (choix1)
        {
        case 1:
            Lire_str(str, sizeof(str));
            i = 0;

            while (str[i] != '\0')
            {
                if (str[i] != ' ' && str[i] != '\t')
                {
                    k = 0;
                    while (str[i] != ' ' && str[i] != '\0' && str[i] != '\t')
                    {
                        s[k] = str[i];
                        k++;
                        i++;
                    }
                    s[k] = '\0';
                    printf("%c", Morse_to_Character(s));
                }
                else if (str[i] == '\t')
                {
                    s[0] = '\t';
                    s[1] = '\0';
                    i++;
                    printf("%c", Morse_to_Character(s));
                }
                else
                {
                    i++;
                }
            }
            printf("\n\n");

            break;

        case 2:
            Lire_str(str, sizeof(str));
            for (i = 0; i < (int)(strlen(str)); i++)
            {
                Character_to_Morse(str[i], s);
                printf("%s ", s);
            }
            printf("\n\n");
            break;
        case 3:
            AFF_T_of_CM();
            break;
        case 4:
            system("cls");
            break;
        }
    } while (choix1 != 0);

    return 0;
}
void Character_to_Morse(char c, char s[])
{
    switch (c)
    {
    case 'A':
        strcpy(s, ".-");
        break;
    case 'a':
        strcpy(s, ".-");
        break;
    case 'B':
        strcpy(s, "-...");
        break;
    case 'b':
        strcpy(s, "-...");
        break;
    case 'C':
        strcpy(s, "-.-.");
        break;
    case 'c':
        strcpy(s, "-.-.");
        break;
    case 'D':
        strcpy(s, "-..");
        break;
    case 'd':
        strcpy(s, "-..");
        break;
    case 'E':
        strcpy(s, ".");
        break;
    case 'e':
        strcpy(s, ".");
        break;
    case 'F':
        strcpy(s, "..-.");
        break;
    case 'f':
        strcpy(s, "..-.");
        break;
    case 'G':
        strcpy(s, "--.");
        break;
    case 'g':
        strcpy(s, "--.");
        break;
    case 'H':
        strcpy(s, "....");
        break;
    case 'h':
        strcpy(s, "....");
        break;
    case 'I':
        strcpy(s, "..");
        break;
    case 'i':
        strcpy(s, "..");
        break;
    case 'J':
        strcpy(s, ".---");
        break;
    case 'j':
        strcpy(s, ".---");
        break;
    case 'K':
        strcpy(s, "-.-");
        break;
    case 'k':
        strcpy(s, "-.-");
        break;
    case 'L':
        strcpy(s, ".-..");
        ;
        break;
    case 'l':
        strcpy(s, ".-..");
        ;
        break;
    case 'M':
        strcpy(s, "--");
        break;
    case 'm':
        strcpy(s, "--");
        break;
    case 'N':
        strcpy(s, "-.");
        break;
    case 'n':
        strcpy(s, "-.");
        break;
    case 'O':
        strcpy(s, "---");
        break;
    case 'o':
        strcpy(s, "---");
        break;
    case 'P':
        strcpy(s, ".--.");
        break;
    case 'p':
        strcpy(s, ".--.");
        break;
    case 'Q':
        strcpy(s, "--.-");
        break;
    case 'q':
        strcpy(s, "--.-");
        break;
    case 'R':
        strcpy(s, ".-.");
        break;
    case 'r':
        strcpy(s, ".-.");
        break;
    case 'S':
        strcpy(s, "...");
        break;
    case 's':
        strcpy(s, "...");
        break;
    case 'T':
        strcpy(s, "-");
        break;
    case 't':
        strcpy(s, "-");
        break;
    case 'U':
        strcpy(s, "..-");
        break;
    case 'u':
        strcpy(s, "..-");
        break;
    case 'V':
        strcpy(s, "...-");
        break;
    case 'v':
        strcpy(s, "...-");
        break;
    case 'W':
        strcpy(s, ".--");
        break;
    case 'w':
        strcpy(s, ".--");
        break;
    case 'X':
        strcpy(s, "-..-");
        break;
    case 'x':
        strcpy(s, "-..-");
        break;
    case 'Y':
        strcpy(s, "-.--");
        break;
    case 'y':
        strcpy(s, "-.--");
        break;
    case 'Z':
        strcpy(s, "--..");
        break;
    case 'z':
        strcpy(s, "--..");
        break;
    case '0':
        strcpy(s, "-----");
        break;
    case '1':
        strcpy(s, ".----");
        break;
    case '2':
        strcpy(s, "..---");
        break;
    case '3':
        strcpy(s, "...--");
        break;
    case '4':
        strcpy(s, "....-");
        break;
    case '5':
        strcpy(s, ".....");
        break;
    case '6':
        strcpy(s, "-....");
        break;
    case '7':
        strcpy(s, "--...");
        break;
    case '8':
        strcpy(s, "---..");
        break;
    case '9':
        strcpy(s, "----.");
        break;
    case '?':
        strcpy(s, "..--..");
        break;
    case '!':
        strcpy(s, "-.-.--");
        break;
    case '.':
        strcpy(s, ".-.-.-");
        break;
    case ',':
        strcpy(s, "--..--");
        break;
    case ';':
        strcpy(s, "-.-.-.");
        break;
    case ':':
        strcpy(s, "---...");
        break;
    case '+':
        strcpy(s, ".-.-.");
        break;
    case '-':
        strcpy(s, "-....-");
        break;
    case '/':
        strcpy(s, "-..-.");
        break;
    case '=':
        strcpy(s, "-...-");
        break;
    case '*':
        strcpy(s, "-..---");
        break;
    case '(':
        strcpy(s, "------.");
        break;
    case ')':
        strcpy(s, ".------");
        break;
    default:
        s[0] = c;
        s[1] = '\0';
    }
}
char Morse_to_Character(char s[])
{
    if (strcmp(s, ".-") == 0)
    {
        return 'a';
    }
    else if (strcmp(s, "-...") == 0)
    {
        return 'b';
    }
    else if (strcmp(s, "-.-.") == 0)
    {
        return 'c';
    }
    else if (strcmp(s, "-..") == 0)
    {
        return 'd';
    }
    else if (strcmp(s, ".") == 0)
    {
        return 'e';
    }
    else if (strcmp(s, "..-.") == 0)
    {
        return 'f';
    }
    else if (strcmp(s, "--.") == 0)
    {
        return 'g';
    }
    else if (strcmp(s, "....") == 0)
    {
        return 'h';
    }
    else if (strcmp(s, "..") == 0)
    {
        return 'i';
    }
    else if (strcmp(s, ".---") == 0)
    {
        return 'j';
    }
    else if (strcmp(s, "-.-") == 0)
    {
        return 'k';
    }
    else if (strcmp(s, ".-..") == 0)
    {
        return 'l';
    }
    else if (strcmp(s, "--") == 0)
    {
        return 'm';
    }
    else if (strcmp(s, "-.") == 0)
    {
        return 'n';
    }
    else if (strcmp(s, "---") == 0)
    {
        return 'o';
    }
    else if (strcmp(s, ".--.") == 0)
    {
        return 'p';
    }
    else if (strcmp(s, "--.-") == 0)
    {
        return 'q';
    }
    else if (strcmp(s, ".-.") == 0)
    {
        return 'r';
    }
    else if (strcmp(s, "...") == 0)
    {
        return 's';
    }
    else if (strcmp(s, "-") == 0)
    {
        return 't';
    }
    else if (strcmp(s, "..-") == 0)
    {
        return 'u';
    }
    else if (strcmp(s, "...-") == 0)
    {
        return 'v';
    }
    else if (strcmp(s, ".--") == 0)
    {
        return 'w';
    }
    else if (strcmp(s, "-..-") == 0)
    {
        return 'x';
    }
    else if (strcmp(s, "-.--") == 0)
    {
        return 'y';
    }
    else if (strcmp(s, "--..") == 0)
    {
        return 'z';
    }
    else if (strcmp(s, ".----") == 0)
    {
        return '1';
    }
    else if (strcmp(s, "..---") == 0)
    {
        return '2';
    }
    else if (strcmp(s, "...--") == 0)
    {
        return '3';
    }
    else if (strcmp(s, "....-") == 0)
    {
        return '4';
    }
    else if (strcmp(s, ".....") == 0)
    {
        return '5';
    }
    else if (strcmp(s, "-....") == 0)
    {
        return '6';
    }
    else if (strcmp(s, "--...") == 0)
    {
        return '7';
    }
    else if (strcmp(s, "---..") == 0)
    {
        return '8';
    }
    else if (strcmp(s, "----.") == 0)
    {
        return '9';
    }
    else if (strcmp(s, "-----") == 0)
    {
        return '0';
    }
    else if (strcmp(s, "..--..") == 0)
    {
        return '?';
    }
    else if (strcmp(s, "-.-.--") == 0)
    {
        return '!';
    }
    else if (strcmp(s, ".-.-.-") == 0)
    {
        return '.';
    }
    else if (strcmp(s, "--..--") == 0)
    {
        return ',';
    }
    else if (strcmp(s, "-.-.-.") == 0)
    {
        return ';';
    }
    else if (strcmp(s, "---...") == 0)
    {
        return ':';
    }
    else if (strcmp(s, ".-.-.") == 0)
    {
        return '+';
    }
    else if (strcmp(s, "-....-") == 0)
    {
        return '-';
    }
    else if (strcmp(s, "-..-.") == 0)
    {
        return '/';
    }
    else if (strcmp(s, "-..---") == 0)
    {
        return '*';
    }
    else if (strcmp(s, "-...-") == 0)
    {
        return '=';
    }
    else if (strcmp(s, "------.") == 0)
    {
        return '(';
    }
    else if (strcmp(s, ".------") == 0)
    {
        return ')';
    }
    else if (s[0] == '\n')
    {
        return '\n';
    }
    else if (s[0] == '\t')
    {
        return ' ';
    }
    else
    {
        printf("Ereur !!!   %s   \n", s);
        return ' ';
    }
}
void AFF_T_of_CM()
{ /// up !!!!!!! A salah
    int i, j, mx = 9;
    char str[20];
    printf("\n\n");
    for (i = 1; i <= 10; i++)
    {
        Character_to_Morse(32 + i, str);
        for (j = strlen(str); j < mx; j++)
        {
            str[j] = ' ';
        }
        str[j] = '\0';
        printf("%c :%s  ||  ", 32 + i, str);

        Character_to_Morse(42 + i, str);
        for (j = strlen(str); j < mx; j++)
        {
            str[j] = ' ';
        }
        str[j] = '\0';
        printf("%c :%s  ||  ", 42 + i, str);
        Character_to_Morse(52 + i, str);
        for (j = strlen(str); j < mx; j++)
        {
            str[j] = ' ';
        }
        str[j] = '\0';
        printf("%c :%s  ||  ", 52 + i, str);
        Character_to_Morse(62 + i, str);
        for (j = strlen(str); j < mx; j++)
        {
            str[j] = ' ';
        }
        str[j] = '\0';
        printf("%c :%s  ||  ", 62 + i, str);
        Character_to_Morse(72 + i, str);
        for (j = strlen(str); j < mx; j++)
        {
            str[j] = ' ';
        }
        str[j] = '\0';
        printf("%c :%s  ||  ", 72 + i, str);
        Character_to_Morse(82 + i, str);
        for (j = strlen(str); j < mx; j++)
        {
            str[j] = ' ';
        }
        str[j] = '\0';
        printf("%c :%s  \n", 82 + i, str);
    }
    printf("\n\n");
}
int Lire_int(int *result)
{
    char buffer[256];
    char *endptr;
    long value;

    if (fgets(buffer, sizeof(buffer), stdin) == NULL)
    {
        return 0;
    }

    errno = 0;
    value = strtol(buffer, &endptr, 10);

    if (errno == ERANGE && (value == LONG_MAX || value == LONG_MIN))
    {
        return 0;
    }

    if (endptr == buffer || *endptr != '\n')
    {
        return 0;
    }

    if (value < INT_MIN || value > INT_MAX)
    {
        return 0;
    }

    *result = (int)value;
    return 1;
}
int Lire_str(char *str, int N)
{
    if (str == NULL || N <= 0)
    {
        return 0; // Invalid parameters
    }

    if (fgets(str, N, stdin) == NULL)
    {
        return 0; // End of input or error
    }

    size_t len_str = strlen(str);

    // Remove trailing newline if present
    if (len_str > 0 && str[len_str - 1] == '\n')
    {
        str[len_str - 1] = '\0';
    }
    else
    {
        // Flush the remaining input
        int c;
        while ((c = getchar()) != '\n' && c != EOF)
            ;
    }

    return 1; // Successful input
}
