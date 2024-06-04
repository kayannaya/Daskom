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

            minta n

            if (i = 0 ; i < n ; i++){
                //Data input
                input_Data(i,);

                //Data calculation
                BMI(&tinggi, &berat);

                //Parameter calculation
                BMI_Level();
                GD_Level();

                //Risk calculation
                Status;
            }
            
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

void input_Data(int *i, int *n){

    data Data[*i];

    printf("Masukkan jumlah pasien yang ingin di-input");
    scanf("%d", &n);

    Data[0]
    nama0, tinggi0, dll

    Data[1]
    nama1. 

    Data[n]

    
        Data[i].number = *i + 1;

        printf("Patient number %d", *i + 1);

        printf("Patient's name : ");
        scanf(" %[^\n]s", Data[*i].nama);

        printf("Patient's weight : ");
        scanf("%f", &Data[*i].berat);

        printf("Patient's height : ");
        scanf("%d", &Data[*i].tinggi);

        printf("Patient's sugar level : ");
        scanf("%d", &Data[*i].gd);

        printf("\n");

        counter++;
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
        sugarLevel = 3;
        printf("You have high blood sugar level");
    }
    
    else{
        sugarLevel = 4;
        printf("You have very high blood sugar level");
    }

}

void Status(int *sugarLevel, int *bmiLevel, int *i, data *Data[*i]){ //Calculation diabetes or not + display data

    if (*sugarLevel == 4 && *bmiLevel == 4){
        
        printf("You have very high risk of having diabetes. Please check to the doctor immediately.");

        strcpy(Data[*i]->stat, "Very High Risk");
    }
    
    else if (*sugarLevel == 4 || *bmiLevel == 4){
        
        printf("You have high risk of having diabetes.");

        strcpy(Data[*i]->stat, "High Risk");
    }

    else if (*sugarLevel == 3 && *bmiLevel == 3){
        
        printf("You have high risk of having diabetes.");

        strcpy(Data[*i]->stat, "High Risk");
    }    

    else if (*sugarLevel == 3 || *bmiLevel == 3){
       
        printf("You have medium risk of having diabetes.");

        strcpy(Data[*i]->stat, "Medium Risk");
    }
    
    else{

        printf("You have low risk of having diabetes.");

        strcpy(Data[*i]->stat, "Low Risk");
    }

}

void accessPatient(data Data[i]){ //Access the data for each patient

    int k;

    printf("Which data do you want to access?");

    printf("Enter the patient number");
    scanf("%d", &k);

    printf("[PATIENTS NUMBER %d]");

    printf("Name : %s\n", Data[i].nama);
    printf("Weight : %d\n", Data[i].berat);
    printf("Height: %d\n", Data[i].tinggi);
    printf("Sugar level : %d\n", Data[i].gd);
    printf("Status : %d\s", Data[i].stat);

}