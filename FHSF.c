#include <stdio.h>
#include <string.h>
struct software
{
    char n[22];
    char e[33];
    char a[77];
    char m[10];
    char p[4];
} s;
void openFile(int fo);
void createFile(char fn[]);
void viewFile(char fn[]);
void editFile(char fn[]);

void openFile(int fo)
{
    char fn[20], ch;
    FILE *f;
    printf("\nEnter the name of the file: ");
    scanf("%s", fn);
    strcat(fn, ".txt");
    f = fopen(fn, "r");
    if (f == NULL)
    {
        printf("File not found!\n");
    ag:
        printf("do you want to create a new file with this name %s (y or n)", fn);
        fflush(stdin);
        scanf("%c", &ch);
        if (ch == 'y' || ch == 'Y')
        {
            createFile(fn);
        }
        else if (ch == 'n' || ch == 'N')
        {
        }
        else
            goto ag;
    }

    fclose(f);
    if (fo == 1)
    {
        viewFile(fn);
    }
    else if (fo == 2)
    {
        createFile(fn);
    }
    else if (fo == 3)
    {
        editFile(fn);
    }
}
void createFile(char fn[])
{
    FILE *f;
    f = fopen(fn, "w");
    printf("file has been created %s", fn);
    fprintf(f, "\nName\tEmail\t\t\taddress\t\t\tMobile Number\t\tPassword");
    fprintf(f, "\n-----------------------------------------------------------------------------------");
    fclose(f);
}
void viewFile(char fn[])
{
    char c;
    FILE *f;
    f = fopen(fn, "r");
    while ((c = fgetc(f)) != EOF)
    {
        printf("%c", c);
    }
}
void editFile(char fn[])
{
    // struct software s;
    FILE *f;
    f = fopen(fn, "a");
    fflush(stdin);
    printf("\nEnter your full name: ");
    gets(s.n);
    fflush(stdin);
    printf("\nEnter your email: ");
    gets(s.e);
    fflush(stdin);
    printf("\nEnter your address: ");
    gets(s.a);
    fflush(stdin);
    printf("\nEnter your mobile number: ");
    gets(s.m);
    fflush(stdin);
    printf("\nEnter your atm password: ");
    gets(s.p);
    fprintf(f, "\n%s\t", s.n);
    fprintf(f, "%s\t\t\t", s.e);
    fprintf(f, "%s\t\t\t", s.a);
    fprintf(f, "%s\t\t\t\t", s.m);
    fprintf(f, "%s", s.p);
    fclose(f);
}
void main()
{
    int x = 0;
    fflush(stdin);
    while (x != 5)
    {
        // system("cls");
        printf("\n\n\t\tFILE HANDALING SOFTWARE\n1. To Open a file \n2. To Create a file\n3. To Update a fule\n4. To Delete a file\n5. To Exit the program ");
        scanf("%d", &x);
        switch (x)
        {
        case 1:
            openFile(1);
            break;
        case 2:
            openFile(2);
            break;
        case 3:
            openFile(3);
            break;
        case 4:
            // openfile(4);
            break;
        case 5:
            printf("\n\n\t\tTHANK YOU FOR USING FILE HANDLING SOFTWARE\n");
            break;
        default:
            printf("enter a value between 1-5");
            break;
        }
    }
}