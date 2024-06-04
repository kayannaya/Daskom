#include <stdio.h>

typedef struct data{
    int number;
    char nama[100];
    float berat;
    int tinggi;
    int gd;
    char stat[100];
} data;

int main (){

    int i, d, 
    int m = 1;
    int bmiLevel;
    int sugarLevel;

    int number
    char nama[100];
    float berat;
    int tinggi;
    int gd;
    char stat[100];

    struct data Data[i];

    printf("Welcome to DiaBase, a diabetes risk calculation and database!\n");

    while (m == 1){
    
        printf("How can we help you today?");

        printf("1. Input data\n");
        printf("2. Access data\n");
        printf("3. Exit program\n");

        printf("Enter your option : ");
        scanf("%d", &d);

        if (d == 1) {

            //Data input
            input_Data();

            //Data calculation
            BMI(&tinggi, &berat);

            //Parameter calculation
            BMI_Level();
            GD_Level();

            //Risk calculation
            Status;
        }

        else if (d == 2)
        {
            accessPatient();
        }

        else if (d == 3)
        {
            printf("Thank you for using our Diabase!\n");

            //To make the while loop stops
            m = 0;
        }

        else
        {
            printf("Invalid option. Please enter the correct option from 1-3.\n");
        }
        
    }
    
    return 0;
}

void input_Data(){

    int n, i;
    int counter = 1;

    data Data[i];

    printf("Masukkan jumlah pasien yang ingin di-input");
    scanf("%d", &n);

    for(i = 0 ; i < n ; i++){

        Data[i].number = counter;

        printf("Nama pasien ke-%d: ", counter);
        scanf(" %[^\n]s", Data[i].nama);

        printf("Berat badan pasien ke-%d: ", counter);
        scanf("%f", &Data[i].berat);

        printf("Tinggi badan pasien ke-%d: ", counter);
        scanf("%d", &Data[i].tinggi);

        printf("Tinggi badan pasien ke-%d: ", counter);
        scanf("%d", &Data[i].gd);

        printf("\n");

        counter++;
    }

}

float BMI(int *height, float *weight){

    float bmi;

    bmi = *height/(*weight^2);

    return bmi;
}

void BMI_Level(int *bmi){ //Comparing BMI data with literature

    int bmiLevel;

    if (*bmi <= 20){
        bmiLevel = 1;
        printf("You are underweight");
    }
    
    else if (20 < *bmi < 30){
        bmiLevel = 2;
        printf("You have normal weight");
    }

    else if (30 < *bmi < 40){
        bmiLevel = 3;
        printf("You are overweight");
    }
    
    else{
        bmiLevel = 4;
        printf("You are obese");
    }

}

void GD_Level(int *gd){ //Comparing GD data with literature
    
    int sugarLevel;

    if (*gd <= 80){
        sugarLevel = 1;
        printf("You have low blood sugar level");
    }
    
    else if (80 < *gd < 150){
        sugarLevel = 2;
        printf("You have normal blood sugar level");
    }

    else if (150 < *gd < 200){
        gdLevel = 3;
        printf("You have high blood sugar level");
    }
    
    else{
        gdLevel = 4;
        printf("You have very high blood sugar level");
    }

}

void Status(int){ //Calculation diabetes or not + display data



}

void accessPatient(){ //Access the data for each patient


}