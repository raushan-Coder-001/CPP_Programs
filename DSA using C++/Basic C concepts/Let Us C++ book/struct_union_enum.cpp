struct employee
{
    char name[20];
    int age;
};
union data
{
    char ch[2];
    int i;
};
enum status{married,unmarried,divorced};
employee e;
data d;
status s;
int main()
{
    struct employee e;
}