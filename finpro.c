#include <stdio.h>

typedef struct data{
    int number
    char nama[100];
    float berat;
    float tinggi;
    int gd;
    char stat[100];
} data;


int main (){

    int i, d, 
    int m = 1;

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

void menu(){
    int 


    printf("Thank you for using our program. Stay healthy and have a nice day!");
    break;

}

void input_Data(){

    int n;

    printf("Masukkan jumlah pasien yang ingin di-input");
    scanf("%d", &n);

    for(i = 0 ; i < n ; i++){

        printf("Nama pasien ke-%d: ", counter);
        scanf(" %[^\n]s", Data[i].nama);

        printf("id buku ke-%d: ", counter);
        scanf("%d", &Data[i].nomorBuku);

        printf("Rating buku ke-%d: ", counter);
        scanf("%d", &Data[i].rating);

        printf("\n");

        counter++;
    }

}

float BMI(int height, int weight){

    float bmi;

    bmi = height/(weight^2);

    return bmi;
}

void BMI_Level(){ //Comparing BMI data with literature


}

void GD_Level(){ //Comparing GD data with literature


}

void Status(){ //Calculation diabetes or not + display data



}

void accessPatient(){ //Access the data for each patient


}