#include <stdio.h>
#include <stdlib.h>

struct student
{

    int id; /*যদি তুমি পয়েন্টার ইউজ করো
তাহলে তোমার সর্টিং এর সময় অবশ্যই স্টার চিহ্ন দিতে হবে
এবং পয়েন্টার ইউজ করার ক্ষেত্রে স্ট্রাকচারে তোমার অবশ্যই ম্যালক
অথবা ক্যালক দিয়ে মেমোরি অ্যালোকেশন করতে হবে।*/
    int roll;
    int marks;
    char name[100];
    char grade[3];
};
int main()
{
    int n, i;
    printf("how many students details you want?:");

    scanf("%d", &n);
    struct student *p;

    p = (struct student *)calloc(n, sizeof(struct student));

    //(p+i)->

    struct student temp;
    for (i = 0; i < n; i++)
    {
        printf("id:");
        scanf("%d", &(p + i)->id);

        printf("roll:");
        scanf("%d", &(p + i)->roll);

        printf("marks:");
        scanf("%d", &(p + i)->marks);
        getchar(); // eita dite hoy karon hocceh int er pore string/char scan korte somossa hoy

        printf("grade:");
        gets((p + i)->grade);
        printf("students name:");
        fgets((p + i)->name, sizeof((p + i)->name), stdin); // mukhosthoooooo
        (p + i)->name[strcspn((p + i)->name, "\n")] = 0;    // mukhosthoooooo
    }

    int j;
    for (i = 0; i < n - 1; i++) // bubble sort mukhosthoooooo
    {
        for (j = i + 1; j < n; j++)
        {
            if ((p + i)->marks > (p + j)->marks)
            {
                temp = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = temp;
            }
        }
    }

    printf("\n");

    printf("\n");
    printf("\n");
    printf("\n");
    printf("name  roll  id  marks  grade\n");
    for (i = 0; i < n; i++)
    {

        printf("%s   ", (p + i)->name);
        printf("%d   ", (p + i)->roll);
        printf("%d   ", (p + i)->id);
        printf("%d    ", (p + i)->marks);
        printf("%s  ", (p + i)->grade);
        printf("\n");
    }
    free(p);
}

//(p+i)->name
