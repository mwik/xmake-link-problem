
extern int init_testlib1(void);
extern int init_testlib2(void);

int main(int argc, char *argv[])
{
    init_testlib1();
    init_testlib2();
    return 0;
}
