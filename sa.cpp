#include <stdio.h>

int main()
{
    int choice;
    char name[50];
    int roll, m1, m2, m3;
    int total;
    float average;

    printf("===== STUDENT MANAGEMENT SYSTEM =====\n");

    printf("1. Enter Student Details\n");
    printf("2. Display Student Details\n");
    printf("3. Calculate Total\n");
    printf("4. Calculate Average\n");
    printf("5. Check Pass or Fail\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Enter student name: ");
            scanf("%s", name);

            printf("Enter roll number: ");
            scanf("%d", &roll);

            printf("Enter 3 subject marks: ");
            scanf("%d %d %d", &m1, &m2, &m3);

            printf("Details entered successfully!\n");
            break;

        case 2:
            printf("Name: %s\n", name);
            printf("Roll Number: %d\n", roll);
            printf("Marks: %d %d %d\n", m1, m2, m3);
            break;

        case 3:
            total = m1 + m2 + m3;
            printf("Total = %d\n", total);
            break;

        case 4:
            total = m1 + m2 + m3;
            average = total / 3.0;
            printf("Average = %.2f\n", average);
            break;

        case 5:
            if(m1 >= 35 && m2 >= 35 && m3 >= 35)
                printf("Result = PASS\n");
            else
                printf("Result = FAIL\n");
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
