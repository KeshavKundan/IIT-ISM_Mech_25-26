#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TOTAL_STUDENTS 20

typedef struct
{
    char name[50];
    int admissionNumber;
    int year;
    float cgpa;
} Student;

/* Function prototypes */
Student* createStudents(int n);
void initializeStudents(Student *students, int n);
void sortMeritList(Student *students, int n);
void displayStudents(Student *students, int n);

int main()
{
    Student *students;

    students = createStudents(TOTAL_STUDENTS);
    initializeStudents(students, TOTAL_STUDENTS);
    sortMeritList(students, TOTAL_STUDENTS);

    printf("----- MERIT LIST -----\n");
    displayStudents(students, TOTAL_STUDENTS);

    free(students);
    return 0;
}

Student* createStudents(int n)
{
    Student *ptr;

    ptr = (Student *)malloc(n * sizeof(Student));

    if (ptr == NULL)
    {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    return ptr;
}

void initializeStudents(Student *students, int n)
{
    strcpy(students[0].name, "Aarav");
    students[0].admissionNumber = 1045;
    students[0].year = 1;
    students[0].cgpa = 8.4;

    strcpy(students[1].name, "Diya");
    students[1].admissionNumber = 1032;
    students[1].year = 1;
    students[1].cgpa = 9.1;

    strcpy(students[2].name, "Ishaan");
    students[2].admissionNumber = 1018;
    students[2].year = 1;
    students[2].cgpa = 8.9;

    strcpy(students[3].name, "Meera");
    students[3].admissionNumber = 1051;
    students[3].year = 1;
    students[3].cgpa = 9.1;

    strcpy(students[4].name, "Rohan");
    students[4].admissionNumber = 1009;
    students[4].year = 1;
    students[4].cgpa = 7.8;

    strcpy(students[5].name, "Ananya");
    students[5].admissionNumber = 2044;
    students[5].year = 2;
    students[5].cgpa = 8.7;

    strcpy(students[6].name, "Kabir");
    students[6].admissionNumber = 2021;
    students[6].year = 2;
    students[6].cgpa = 9.1;

    strcpy(students[7].name, "Sneha");
    students[7].admissionNumber = 2030;
    students[7].year = 2;
    students[7].cgpa = 8.9;

    strcpy(students[8].name, "Yash");
    students[8].admissionNumber = 2010;
    students[8].year = 2;
    students[8].cgpa = 7.9;

    strcpy(students[9].name, "Pooja");
    students[9].admissionNumber = 2055;
    students[9].year = 2;
    students[9].cgpa = 9.1;

    strcpy(students[10].name, "Rahul");
    students[10].admissionNumber = 3042;
    students[10].year = 3;
    students[10].cgpa = 8.6;

    strcpy(students[11].name, "Nisha");
    students[11].admissionNumber = 3015;
    students[11].year = 3;
    students[11].cgpa = 9.3;

    strcpy(students[12].name, "Arjun");
    students[12].admissionNumber = 3028;
    students[12].year = 3;
    students[12].cgpa = 8.9;

    strcpy(students[13].name, "Simran");
    students[13].admissionNumber = 3007;
    students[13].year = 3;
    students[13].cgpa = 9.1;

    strcpy(students[14].name, "Tanya");
    students[14].admissionNumber = 3033;
    students[14].year = 3;
    students[14].cgpa = 8.2;

    strcpy(students[15].name, "Vikram");
    students[15].admissionNumber = 4019;
    students[15].year = 4;
    students[15].cgpa = 9.3;

    strcpy(students[16].name, "Neha");
    students[16].admissionNumber = 4005;
    students[16].year = 4;
    students[16].cgpa = 8.8;

    strcpy(students[17].name, "Aditya");
    students[17].admissionNumber = 4031;
    students[17].year = 4;
    students[17].cgpa = 9.1;

    strcpy(students[18].name, "Priya");
    students[18].admissionNumber = 4022;
    students[18].year = 4;
    students[18].cgpa = 8.5;

    strcpy(students[19].name, "Karan");
    students[19].admissionNumber = 4001;
    students[19].year = 4;
    students[19].cgpa = 9.1;
}

void sortMeritList(Student *students, int n)
{
    int i, j;
    Student temp;

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (students[j].cgpa < students[j + 1].cgpa)
            {
                temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
            else if (students[j].cgpa == students[j + 1].cgpa)
            {
                if (students[j].year < students[j + 1].year)
                {
                    temp = students[j];
                    students[j] = students[j + 1];
                    students[j + 1] = temp;
                }
                else if (students[j].year == students[j + 1].year)
                {
                    if (students[j].admissionNumber > students[j + 1].admissionNumber)
                    {
                        temp = students[j];
                        students[j] = students[j + 1];
                        students[j + 1] = temp;
                    }
                }
            }
        }
    }
}

void displayStudents(Student *students, int n)
{
    int i;

    printf("%-5s %-15s %-15s %-10s %-10s\n",
           "Rank", "Name", "Admission No", "Year", "CGPA");
    printf("--------------------------------------------------------------\n");

    for (i = 0; i < n; i++)
    {
        printf("%-5d %-15s %-15d %-10d %-10.2f\n",
               i + 1,
               students[i].name,
               students[i].admissionNumber,
               students[i].year,
               students[i].cgpa);
    }
}
