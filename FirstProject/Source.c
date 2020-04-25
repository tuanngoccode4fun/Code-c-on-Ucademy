#include<stdio.h>
#include<stdbool.h>
int main()
{  
    enum Company {GOOGLE=3,FACEBOOK,XEROX,YAHOO,EBAY,MICROSOFT};
    enum Company google = GOOGLE;
    enum Company facebook = FACEBOOK;
    enum Company xerox = XEROX;
    enum Company yahoo = YAHOO;
    printf("The value of xerox is : %d\n", xerox);
    printf("The value of facbook is : %d\n", facebook);
    printf("The value of google is : %d\n", google);
    return 0;
}