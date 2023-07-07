#include<stdio.h>

struct Mark {
    int roll;
    char name[100];
    int chem;
    int math;
    int phy;
    float percentage;
};

int main() {
    FILE *M;
    struct Mark students[5];
    
    M = fopen("mark_sheet.txt", "w");
    if (M == NULL) {
        printf("Unable to open mark_sheet.txt file.\n");
        return 1;
    }
    int i;
    for (i = 0; i < 5; i++) {
        printf("Enter details of student %d:\n", i+1);
        printf("Roll No => ");
        scanf("%d", &students[i].roll);
        printf("Name => ");
        scanf("%s", students[i].name);
        printf("Chemistry => ");
        scanf("%d", &students[i].chem);
        printf("Mathematics => ");
        scanf("%d", &students[i].math);
        printf("Physics => ");
        scanf("%d", &students[i].phy);
        printf("\n");
        
   
        float total_marks = students[i].chem + students[i].math + students[i].phy;
        students[i].percentage = (total_marks / 300) * 100;
    }
    
   
    printf("\nMark Sheets:\n");
   
    for ( i = 0; i < 5; i++) {
        fprintf(M, "-------------------------------------------\n");
        fprintf(M, "Mark Sheet of Roll No: %d\n", students[i].roll);
        fprintf(M, "Name: %s\n", students[i].name);
        fprintf(M, "Chemistry Marks: %d\n", students[i].chem);
        fprintf(M, "Mathematics Marks: %d\n", students[i].math);
        fprintf(M, "Physics Marks: %d\n", students[i].phy);
        fprintf(M, "Percentage: %.2f%%\n", students[i].percentage);
        fprintf(M, "-------------------------------------------\n\n");
        
        printf("Mark Sheet of Roll No: %d\n", students[i].roll);
        printf("Name: %s\n", students[i].name);
        printf("Chemistry Marks: %d\n", students[i].chem);
        printf("Mathematics Marks: %d\n", students[i].math);
        printf("Physics Marks: %d\n", students[i].phy);
        printf("Percentage: %.2f%%\n", students[i].percentage);
        printf("-------------------------------------------\n\n");
    }
    
    fclose(M);
    return 0;
}

