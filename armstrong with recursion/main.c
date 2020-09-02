#include<stdio.h>


int arm(int num);

int main() {

    int num;
    printf(" Enter number: ");
    scanf(" %d", &num);

    //if(arm(num) == num)
   // printf("\n\n The number %d is Arm",num);
   // else printf(" The number %d is not Arm",num);

    if (num == arm(num, num))
        printf(" The number is arm");
    else printf(" The number is not arm");
    printf(" %d", arm(num, num));

}


int arm(int num, int result) {

    if (num == 0)
        return result;
    else {

        result = (num % 10) * (num % 10) * (num % 10) + arm(num / 10, result);
    }

}
