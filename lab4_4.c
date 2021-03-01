#include <stdio.h>
int main()
{
    char a[100] = " ",b[100] = " ";
    int i=0,j=1;
    gets(a);
    b[0] = toupper(a[0]);
    while(a[i]!='\0')
    {
        if(a[i]==' ')
        {
            b[j] = toupper(a[i+1]);
            j++;
        }
        i++;
    }
    printf("%s",b);
    return 0;
}
