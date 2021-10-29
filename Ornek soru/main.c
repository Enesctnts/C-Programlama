#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=5,b=13,c=8,x;

    a += 2;
    b -= a++;
    c *= --b;
    x = ++a* b-- % ++c;
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    printf("c=%d\n",c);
    printf("x=%d\n",x);

//a:7 b:5  c:32 x:6       7 6 40 0
    system("pause");
    return 0;
}