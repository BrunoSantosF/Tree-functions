#ifndef student_h
#define student_h


typedef struct student Student;

Student * CreateStudent(int id , char * name);
char * ReturnName(Student * student);
int ReturnID(Student * student);
void Print(Student * student);
void FreeStudent(Student * student);

#endif
