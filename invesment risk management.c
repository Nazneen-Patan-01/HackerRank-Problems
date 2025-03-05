#include <stdio.h>

int main() {
    int age, income, risk;
    scanf("%d %d %d", &age, &income, &risk);

    if (age > 50) {
        if (income > 75000 && risk == 3) {
            printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.\n");
        } else {
            printf("Low Risk Portfolio: Suitable for conservative investments.\n");
        }
    } else if (age < 30) {
        printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.\n");
    } else { 
        if (income > 75000 && risk == 3) {
            printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.\n");
        } else if (income <= 75000 && risk == 2) {
            printf("Medium Risk Portfolio: Balanced risk for moderate returns.\n");
        } else if (income > 75000 && (risk == 1 || risk == 2)) {
            printf("Medium Risk Portfolio: Balanced risk for moderate returns.\n");
        }else if(income <= 30000 && (risk == 1 || risk == 2)){
            printf("Low Risk Portfolio: Suitable for conservative investments.\n");
        } else {
            printf("Medium Risk Portfolio: Balanced risk for moderate returns.\n");
        }
    }

    return 0;
}
