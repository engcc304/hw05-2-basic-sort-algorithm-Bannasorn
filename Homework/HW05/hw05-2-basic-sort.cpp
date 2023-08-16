/*
    จงเรียงลำดับเลขจากข้อมูลที่ผู้ใช้กรอก โดยเรียงจากมากไปน้อย (โดยใช้คำสั่ง if else หรือ else if เท่านั้น)
    
    Test case:
        Input[1] :
            6
        Input[2] :
            9
        Input[3] :
            1
    Output:
        9 6 1

    Test case:
        Input[1] :
            65
        Input[2] :
            91
        Input[3] :
            112
    Output:
        112 91 65
*/
#include <stdio.h>
int main()
{
    char string1 [50], string2 [50], string3 [50], string4 [50], s4[50] ;
    int a = 0, b = 1, c = 2, d = 3, e = 4 ;
    printf("Please Enter your string : ");
    scanf("%s %s %s %s", string1,string2,string3,string4);
    if (e > d)
    {
        printf("Result: %s", string4);
        if (e > c)
        {
            printf(" %s", string3);
            if (e > b)
            {
                printf(" %s", string2);
                if (e > a)
                {
                    printf(" %s", string1);
                }
                
            }
            
        }
        
    }
    else{
        printf("Error");
    }
    
    return 0;
}