#include <stdio.h>

int main(void) {
    int m ,p,c ,total_of_three_subject;
    int total_of_physic_Maths;
    printf("\t=================================================\n");
    printf("\t\tEligibility criteria\n");
    printf("\t================================================\n");
    printf(" \t\t1 Mark in Maths >=65\n");
    printf("\t\t2 and Mark in Physics >=55\n");
    printf("\t\t3 Mark in Chimestry >=50\n");
    printf("\t\t4 Total all three subjects >=190\n");
    printf("\t\t5 Total of Maths and Physics >=140\n");

    printf("\n");
    printf("\t-------------------------------------------------\n");
    printf("\t\t User Input\n");
    printf("\t-------------------------------------------------\n");
    // user input
    printf("\tInput the marks obtained in Physic:");
    scanf("\t%d",&p);
    printf("\n");
    printf("\tInput the marks obtained in Chemistry:");
    scanf("\t%d",&c);
    printf("\n");
    printf("\tInput the marks obtained in Maths:");
    scanf("\t%d",&m);
    printf("\n");

    printf("\n");
    printf("\t-------------------------------------------------\n");
    printf("\t\t Display Information of Candinate\n");
    printf("\t-------------------------------------------------\n");
    //Calualtion
     total_of_three_subject = m+p+c;
     total_of_physic_Maths = m+p;

    printf("\tTotal marks of Maths, Physics and Chemistry : %d\n", total_of_three_subject);   // Calculate and display total marks.
    printf("\tTotal marks of Maths and Physics : %d\n", total_of_physic_Maths);

    // Check condition
    if(m>=65) {
        if(p>=55) {
            if (c>=50) {
                if ((total_of_three_subject>=190)|| (total_of_physic_Maths>=140)) {
                    printf("\tThe candinate is eligible for the admission.\n");
                }else {
                    printf("\tThe candinate is not eligible for the admission.\n");
                }
            }else {
                printf("\tThe candinate is not eligible for the admission.\n");
            }
        }else {
            printf("\tThe candinate is not eligible for the admission.\n");
        }
    }else {
        printf("\tThe candinate is not eligible for the admission.\n");
    }
    return 0;
}
