#include<stdio.h>
int main(void)
{
    int no,arr[5];
    FILE* abc;
    printf("enter a number\n");
    scanf("%d", &no);
    abc=fopen("lb11.c","r");
    if(abc==NULL)
    {
        printf("error of opening the file\n");

        return -1;
    }
    for(int i=0;i<5;i++)
    {
        fscanf(abc,"%d",&arr[i]);
        if(no==arr[i])
        {
            printf("error\n");

        }

    }
    fclose(abc);
    abc=fopen("lb11.c","a");
    fprintf(abc,"%d",no);
    fclose(abc);
    return 0;


}
