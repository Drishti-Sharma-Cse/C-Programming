#include <stdio.h>
#include <string.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

void addStudent(struct Student students[], int *count)
{
    printf("\nEnter Roll Number: ");
    scanf("%d", &students[*count].roll);

    printf("Enter Name: ");
    getchar();
    fgets(students[*count].name, 50, stdin);

    students[*count].name[strcspn(students[*count].name, "\n")] = '\0';

    printf("Enter Marks: ");
    scanf("%f", &students[*count].marks);

    (*count)++;

    printf("\nStudent added successfully!\n");
}

void displayStudents(struct Student students[], int count)
{
    int i;

    if(count == 0)
    {
        printf("\nNo student records found.\n");
        return;
    }

    printf("\n===== STUDENT RECORDS =====\n");

    for(i = 0; i < count; i++)
    {
        printf("\nRoll Number: %d", students[i].roll);
        printf("\nName: %s", students[i].name);
        printf("\nMarks: %.2f\n", students[i].marks);
    }
}

void searchStudent(struct Student students[], int count)
{
    int roll, i, found = 0;

    printf("\nEnter Roll Number to search: ");
    scanf("%d", &roll);

    for(i = 0; i < count; i++)
    {
        if(students[i].roll == roll)
        {
            printf("\nStudent Found!\n");
            printf("Roll Number: %d\n", students[i].roll);
            printf("Name: %s\n", students[i].name);
            printf("Marks: %.2f\n", students[i].marks);

            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("\nStudent not found.\n");
    }
}

void saveToFile(struct Student students[], int count)
{
    FILE *fp;
    int i;

    fp = fopen("students.txt", "w");

    if(fp == NULL)
    {
        printf("\nFile could not be opened.\n");
        return;
    }

    for(i = 0; i < count; i++)
    {
        fprintf(fp, "%d %s %.2f\n",
                students[i].roll,
                students[i].name,
                students[i].marks);
    }

    fclose(fp);

    printf("\nRecords saved to file successfully!\n");
}

int main()
{
    struct Student students[100];
    int count = 0;
    int choice;

    do
    {
        printf("\n\n===== STUDENT RECORD SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Save Records to File\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addStudent(students, &count);
                break;

            case 2:
                displayStudents(students, count);
                break;

            case 3:
                searchStudent(students, count);
                break;

            case 4:
                saveToFile(students, count);
                break;

            case 5:
                printf("\nExiting program...\n");
                break;

            default:
                printf("\nInvalid choice!\n");
        }

    } while(choice != 5);

    return 0;
}