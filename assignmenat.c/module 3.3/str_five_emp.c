#include <stdio.h>
struct display
{
    int no;
    int age;
    char name[100];
    char Address[100];
};
int main()
{
    struct display e1 = {101, 50, "jatinbhai boghara", "G-605,varj vivanta higths,vesu road,surat."};
    printf("%d  %d  %s  %s", e1.no, e1.age, e1.name, e1.Address);
    return 0;
}