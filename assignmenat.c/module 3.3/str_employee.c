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
    struct display e1 = {101, 26, "  jayraj chavada", "  C-302,shivam com. mota varachha, surat."};
    printf(" %d %d %s %s\n", e1.no, e1.age, e1.name, e1.Address);
    struct display e2 = {102, 36, "  mohan jariwala", "  B-201,raj nivas com,jakat naka, surat."};
    printf(" %d %d %s %s\n", e2.no, e2.age, e2.name, e2.Address);
    struct display e3 = {103, 25, "  rajkumar veer", "  706/5,renuka park so. mini bajar, surat."};
    printf(" %d %d %s %s\n", e3.no, e3.age, e3.name, e3.Address);
    struct display e4 = {104, 30, "  shital navadiya", "  A-605,ratanji house,kholvad, surat."};
    printf(" %d %d %s %s\n", e4.no, e4.age, e4.name, e4.Address);
    struct display e5 = {105, 44, "  jaman kikani", "  603/4,musa faliyu,puna gam, surat."};
    printf(" %d %d %s %s\n", e5.no, e5.age, e5.name, e5.Address);
    return 0;
}