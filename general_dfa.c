
#include <stdio.h>
#include<string.h>

int main()
{
    int n,a;
    char start,end;
    char str[10];
    printf("Enter the number of states: ");
    scanf("%d",&n);
    getchar();
    char state[n];
    printf("Enter the States\n");
    for(int i=0;i<n;i++){
        scanf("%c",&state[i]);
        getchar();
    }

    printf("Enter the number of alphabets: ");
    scanf("%d",&a);
    getchar();

    char array[n][a];
    printf("\nTransition function: ");
    for(int i=0;i<n;i++){
        for(int j=0;j<a;j++){
            printf("\nIn %c state %d is encountered: move to-->",state[i],j);
            scanf("%c",&array[i][j]);
            getchar();
        }
    }
    printf("\nThe start state-->");
    scanf("%c",&start);
    getchar();
    printf("\nThe End state-->");
    scanf("%c",&end);
    getchar();
    for(;;){
        gets(str);
        if(!strcmp(str,"exit")) return 0;
        for(int i=0;str[i]!='\0';i++){
            int row;
            row=start-state[0];
            printf("%c-->",start);
            int a=str[i]-'0';
            start=array[row][a];
        }
        printf("%c\n",start);
        if(start==end) printf("Yes\n");
        else printf("No\n");
    }

    return 0;

}

