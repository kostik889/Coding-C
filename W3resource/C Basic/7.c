int main(){
    printf("Sample Variables :\n");
    printf("a+ c, x + c,dx + x, ((int) dx) + ax, a + x, s + b, ax + b, s + c, ax + c, ax + ux");
    printf("\n\n");
    printf("Declaration: \n");
    printf("int a = 125, b = 12345;\n");
    printf("long ax = 1234567890;\n");
    printf("short s = 4043;\n");
    printf("float x = 2.13459;\n");
    printf("double dx = 1.1415927;\n");
    printf("char c = 'W';\n");
    printf("unsigned long ux = 2541567890;\n");

    int a = 125, b = 12345;
    long ax = 1234567890;
    short s = 4043;
    float x = 2.13459;
    double dx = 1.1415927;
    char c = 'W';
    unsigned long ux = 2541567890;

    printf("\n\n");

    printf("a+ c = %d which in char is >> %c <<\n", a+ c, a+ c);
    printf("x + c = %f\n", x + c);
    printf("dx + x = %lf\n", dx + x);
    printf("((int) dx) + ax = %Ld\n", ((int) dx) + ax);
    printf("a + x = %f\n", a + x);
    printf("s + b = %hd\n", s + b);
    printf("ax + b = %Ld\n", ax + b);
    printf("s + c = %hd\n", s + c);
    printf("ax + c = %ld\n", ax + c);
    printf("ax + ux = %u\n", ax + ux);

}