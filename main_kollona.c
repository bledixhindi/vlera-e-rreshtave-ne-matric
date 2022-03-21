#include <stdio.h>

int main(void)
{
    int i,j,rows,colon,v[10][10],Sum;

    printf("Vendos i,j:");
    scanf("%d %d",&i,&j);
    
        printf("Vendos vendos numrat: \n");
    for(rows=0;rows<i;rows++)
    {
               for(colon=0;colon<j;colon++)
               {
                   scanf("%d",&v[rows][colon]);
               }
    }
    
    for(rows = 0; rows < i; rows++)
    {
            Sum=0;
            for(colon=0;colon<j;colon++)
            {
                Sum=Sum + v[colon][rows];
            }
        printf("shuma eshte :  %d \n", Sum );

    }
                return 0;

}
