static int i;

int someFunc(void)
{

    i = 5;
    return 2;
}

int (*x(int someVal))[5]
{
    char (*deezNutz[10])(int deezBalls);
    int a = 2;
    float b = 3;
}

int main(void)
{
    extern int a;
    i = 3;
    a = 2;
    int *p = x(2);
}

float demFloats(float);
float *demFunctionPointingFloats(float);
float (*demPointingFloatsFunctions)(float);

int *(*bar[20])(void);

typedef int *Fcn(void);
typedef void VoidFunc(void);

VoidFunc *(*ptf)(int *p);
