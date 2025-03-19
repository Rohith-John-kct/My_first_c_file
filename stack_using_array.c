#include <stdio.h>
#include<stdlib.h>
int main()
{
    int stack[100],n=100,ch,pushelement,i,top=-1;

    while(1)
    {
        printf("-----------------------Stack Implementation program----------------");
        printf("\n1 -> push an element into stack\n");
        printf("2 -> pop an element from stack\n");
        printf("3 -> display the present stack\n");
        printf("4 -> find the size of stack\n");
        printf("5 -> exit the program\n\n");
        printf("Enter your choice\n");
        scanf("%d",&ch);


        switch(ch)
        {
            case 1:
                printf("Enter the element to be pushed onto stack");
                scanf("%d",&pushelement);
                if(top>=n-1)
                    printf("The stack is already full...");
                top=top+1;
                stack[top]=pushelement;
                printf("DATA PUSHED SUCCESSFULLY");
                break;
            case 2:
                if(top==-1)
                    printf("The stack is still empty");
                else
                    printf("DATA deleted is %d",stack[top]);
                    top=top-1;
                break;
            case 3:
                if(top==-1)
                    printf("The stack is still empty");
                else
                {
                    printf("The present stack is :\n");
                    for(i=top;i>-1;i--)
                        printf("%d --> ",stack[i]);
                break;
            case 4:
                printf("Presently, the size of the stack is %d",top+1);
                break;
            case 5:
                printf("program exited successfully");
                exit(0);
                break;
            default:
                printf("Invalid choice");
                break;
        }
    }
}
}
