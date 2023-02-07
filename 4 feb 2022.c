#include <stdio.h>
int main()
{
    int a = 10;
    float a = 10;

    printf("%d",a);

    return 0;
}

//________________________________________________________________

#include <stdio.h>
int main()
{
    int i = -3;
    int k = i % 2;

    printf("%d\n",k);

    return 0;
}

//________________________________________________________________

#include <stdio.h>
int main()
{
    int i = 3;
    int l = i / -2;
    int k = i % 2;

    printf("%d %d\n",l,k);

    return 0;
}

//________________________________________________________________

#include <stdio.h>
int main()
{
    int x = 5.3 % 2;

    printf("%d\n",x);

    return 0;
}