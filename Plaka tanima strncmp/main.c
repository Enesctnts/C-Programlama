#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    const char* ankaraKod="06";
    const char* istanbulKod="34";

    char plakalar[][10]={"06 AA 122","34 ZA 243","06 BB 222","34 UUU 34","35 CC 456"};

    for(int i=0;i<5;i++)
    {
        if(strncmp(plakalar[i],ankaraKod,2)==0)
        {
            printf("%s - (Ankara)\n",plakalar[i]);
        }

        else if(strncmp(plakalar[i],istanbulKod,2)==0)
        {
            printf("%s - (istanbul)\n",plakalar[i]);
        }
    }

    system("pause");
    return 0;
}