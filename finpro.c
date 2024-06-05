#include <stdio.h>
#include <string.h>

typedef struct data {
    int number;
    char nama[100];
    float berat;
    int tinggi;
    int gd;
    char stat[100];
} data;

void input_Data(int *totalPatient, int n, data Data[]);
float BMI(int tinggi, float berat);
void BMI_Level(float bmi, int *bmiLevel);
void GD_Level(int gd, int *sugarLevel);
void Status(int sugarLevel, int bmiLevel, int i, data Data[]);
void accessPatient(int i, data Data[]);

int main() {

    int d, n;
    int m = 1;
    data Data[100];
    int totalPatient = 0;

    printf("\nWelcome to DiaBase, a diabetes risk calculation and database!\n");

    while (m == 1){

        printf("\nHow can we help you today?\n");
        printf("1. Input data\n");
        printf("2. Access data\n");
        printf("3. Exit program\n");
        printf("Enter your option : ");
        scanf("%d", &d);

        if (d == 1){
            printf("\nEnter the number of patients: ");
            scanf("%d", &n);

            input_Data(&totalPatient, n, Data);
        } 
        else if (d == 2){
            printf("\nEnter the patient number to access: ");
            scanf("%d", &n);

            accessPatient(n, Data);
        } 
        else if (d == 3){
            printf("\nThank you for using DiaBase!\n\n");
            m = 0;
        } 
        else{
            printf("\nInvalid option. Please enter the correct option from 1-3.\n");
        }
    }

    return 0;
}

void input_Data(int *totalPatient, int n, data Data[]) {

    int start = *totalPatient;
    int end = start + n;

    for (int i = start; i < end; i++) {
        Data[i].number = i + 1;
        printf("\nPatient number %d\n", i + 1);
        printf("\nPatient's name: ");
        scanf(" %[^\n]", Data[i].nama);
        printf("Patient's weight: ");
        scanf("%f", &Data[i].berat);
        printf("Patient's height: ");
        scanf("%d", &Data[i].tinggi);

        float bmi = BMI(Data[i].tinggi, Data[i].berat);
        int bmiLevel, sugarLevel;
        printf("Patient's sugar level: ");
        scanf("%d", &Data[i].gd);

        BMI_Level(bmi, &bmiLevel);
        GD_Level(Data[i].gd, &sugarLevel);
        Status(sugarLevel, bmiLevel, i, Data);
    }

    *totalPatient = end;
}

float BMI(int tinggi, float berat) {
    return berat / ((tinggi / 100.0) * (tinggi / 100.0));
}

void BMI_Level(float bmi, int *bmiLevel) {
    if (bmi <= 20) {
        *bmiLevel = 1;
        printf("You are underweight\n");
    } 
    else if (bmi <= 30) {
        *bmiLevel = 2;
        printf("You have normal weight\n");
    } 
    else if (bmi <= 40) {
        *bmiLevel = 3;
        printf("You are overweight\n");
    } 
    else {
        *bmiLevel = 4;
        printf("You are obese\n");
    }
}

void GD_Level(int gd, int *sugarLevel) {
    if (gd <= 80) {
        *sugarLevel = 1;
        printf("You have low blood sugar level\n");
    } 
    else if (gd <= 150) {
        *sugarLevel = 2;
        printf("You have normal blood sugar level\n");
    } 
    else if (gd <= 200) {
        *sugarLevel = 3;
        printf("You have high blood sugar level\n");
    } 
    else {
        *sugarLevel = 4;
        printf("You have very high blood sugar level\n");
    }
}

void Status(int sugarLevel, int bmiLevel, int i, data Data[]) {
    if (sugarLevel == 4 && bmiLevel == 4) {
        printf("You have a very high risk of having diabetes. Please check with a doctor immediately.\n");
        strcpy(Data[i].stat, "Very High Risk");
    } 
    else if (sugarLevel == 4 || bmiLevel == 4) {
        printf("You have a high risk of having diabetes.\n");
        strcpy(Data[i].stat, "High Risk");
    } 
    else if (sugarLevel == 3 && bmiLevel == 3) {
        printf("You have a high risk of having diabetes.\n");
        strcpy(Data[i].stat, "High Risk");
    } 
    else if (sugarLevel == 3 || bmiLevel == 3) {
        printf("You have a medium risk of having diabetes.\n");
        strcpy(Data[i].stat, "Medium Risk");
    } 
    else {
        printf("You have a low risk of having diabetes.\n");
        strcpy(Data[i].stat, "Low Risk");
    }
}

void accessPatient(int i, data Data[]) {
    if (i < 1 || i > 100) {
        printf("Invalid patient number.\n");
        return;
    }

    printf("\n[PATIENT NUMBER %d]\n", Data[i-1].number);
    printf("Name: %s\n", Data[i-1].nama);
    printf("Weight: %.2f\n", Data[i-1].berat);
    printf("Height: %d\n", Data[i-1].tinggi);
    printf("Sugar level: %d\n", Data[i-1].gd);
    printf("Status: %s\n", Data[i-1].stat);
}