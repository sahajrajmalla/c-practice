#include <stdio.h>

#define MAX_STUDENT 10

typedef struct {
    char name[30];
    int rollno;
} Student;

void main () {
    int N;
    Student CM[MAX_STUDENT];
    
    printf("Enter the total number of students: ");
    scanf("%d", &N);
    
    printf("Enter the details of the students: \n");
    for (int i = 0; i < N; i++) {
        printf("Name: ");
        scanf("%s", &CM[i].name);
        
        printf("Roll Number: ");
        scanf("%d", &CM[i].rollno);
    }
    
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            if (strcmp(CM[i].name, CM[j].name) > 0) {
            Student temp;
            temp = CM[i];
            CM[i] = CM[j];
            CM[j] = temp;
            }
        }
    }
    
    printf("Details of the students: \n");
    for (int i = 0; i < N; i++) {
        printf("Name: %s \n", CM[i].name);
        printf("Roll Number: %d \n", CM[i].rollno);
        printf("\n");
    }
    
    
}