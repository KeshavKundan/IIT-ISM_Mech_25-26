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

    /* TO DO 1:
       Dynamically allocate memory for TOTAL_STUDENTS students
       by calling createStudents()
    */
    students = createStudents(TOTAL_STUDENTS);

    /* TO DO 2:
       Initialize the student records
    */
    initializeStudents(students, TOTAL_STUDENTS);

    /* TO DO 3:
       Sort the students according to merit list rules
    */
    sortMeritList(students, TOTAL_STUDENTS);

    printf("----- MERIT LIST -----\n");

    /* TO DO 4:
       Display the final merit list
    */
    displayStudents(students, TOTAL_STUDENTS);

    /* TO DO 5:
       Free the dynamically allocated memory
    */
    free(students);

    return 0;
}

Student* createStudents(int n)
{
    Student *ptr;

    /* TO DO:
       Use malloc() to allocate memory for n students
    */

    ptr = NULL;   /* Replace this line */

    /* TO DO:
       Check if memory allocation failed
       If failed, print message and exit
    */

    return ptr;
}

void initializeStudents(Student *students, int n)
{
    /* TO DO:
       Fill details of 20 students
       Make sure there are:
       - 5 first-year students
       - 5 second-year students
       - 5 third-year students
       - 5 fourth-year students
    */

    /*
    Example:
    strcpy(students[0].name, "Aarav");
    students[0].admissionNumber = 1045;
    students[0].year = 1;
    students[0].cgpa = 8.4;
    */
}

void sortMeritList(Student *students, int n)
{
    int i, j;
    Student temp;

    /* TO DO:
       Use bubble sort on the array of structures.

       Merit rules:
       1. Higher CGPA first
       2. If CGPA same, higher year first
       3. If CGPA and year same, lower admission number first
    */

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            /*
            TO DO:
            Compare students[j] and students[j + 1]
            Swap if needed
            */
        }
    }
}

void displayStudents(Student *students, int n)
{
    int i;

    printf("%-5s %-15s %-15s %-10s %-10s\n",
           "Rank", "Name", "Admission No", "Year", "CGPA");
    printf("--------------------------------------------------------------\n");

    /* TO DO:
       Use a loop to print all student details
    */

    for (i = 0; i < n; i++)
    {
        /*
        TO DO:
        Print rank, name, admission number, year and CGPA
        */
    }
}
