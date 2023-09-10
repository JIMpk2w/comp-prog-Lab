#include <stdio.h>

struct student {
    int id;
    int mt;
    int fi;
};

char calculateGrade(struct student students){
    char grade;
    if (students.mt + students.fi >= 80){
        grade = 'A';
    }else if (students.mt + students.fi >= 70){ 
        grade = 'B';
    }else if (students.mt + students.fi >= 60){
        grade = 'C';
    }else if (students.mt + students.fi >= 50){
        grade = 'D';
    }else{
        grade = 'F';
    }
    return grade;
}

int main(){
    struct student students[7];
    int i;

    for(i=0;i<5;i++){
        printf("Enter Student ID: ");
        scanf("%d", &students[i].id);
        printf("Enter Student Midterm: ");
        scanf("%d", &students[i].mt);
        printf("Enter Student Final: ");
        scanf("%d", &students[i].fi);
    }

    for(i=0;i<5;i++){
        printf("Student ID %d receives grade %c.\n", students[i].id, calculateGrade(students[i]));
    }
    return 0;
    
}