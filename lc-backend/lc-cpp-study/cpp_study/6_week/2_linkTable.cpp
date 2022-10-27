//
// Created by Administrator on 2022/3/11.
//
struct Student
{
    char name[20];
    char gender;
    double score;

    Student *next;
    Student *last;

    Student *left;
    Student *right;
};

int main()
{
    Student *head, *p;
    head = new Student();
    p = head;
    p->score = 100;
    p->next = new Student();
    p = p->next;

    p->next = new Student();
    p = p->next;
}
