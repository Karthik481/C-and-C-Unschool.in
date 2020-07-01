#include <stdio.h>
void main()
{
    int per;
    printf("Enter your percentage");
    scanf("%d",&per);
    if (per > 80)  
        {  
            printf("\nGrade A"); 
        }  
    else
        {  
            if (per < 80 && per >= 70)  
            {  
                printf("\nGrade B");  
            }  
            else
            {  
                if (per < 70 && per >= 60) 
                {  
                    printf("\nGrade C");  
                }  
                else
                {  
                    if (per < 60 && per >= 45)  
                    {  
                        printf("\nGrade D");  
                    }
                    else
                    if(per < 45)
                    {  
                        printf("\nFail");
                    }
                    
                }  
            }  
        }
}
    
