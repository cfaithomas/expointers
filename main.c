#include <stdio.h>
#include <stdlib.h>
/*****************************variables globales****************************/
int inombre=0;
int *iptr=&inombre;


/******************************prototypes***********************************/
void display_value_point();
void display_pointed();
void entervalue();
void display_address_var();
void menu();
void display_adresse_pointer();
void display_integer();

/******************************implementations*********************************/

void display_value_point() {
    printf("%p\n",iptr);
}

void display_pointed() {
    printf("%d\n",*iptr);
}

void entervalue() {
    printf("Veuillez saisir une nouvel entier");
    scanf("%d",&inombre);
}

void display_adresse_pointer() {
    printf("%p\n",&iptr);
}

void display_address_var() {
    printf("%p\n",&inombre);
}

void display_integer() {
    printf("%d\n",inombre);
}

void menu() {
    int choix=0;
    printf("1- Affiche la valeur du pointeur\n");
    printf("2- Affiche le contenu pointée\n");
    printf("3- Saisir la nouvelle valeur entière\n");
    printf("4- Affiche l'adresse du pointeur\n");
    printf("5- Affiche l'adresse de l'entier\n");
    printf("6- Afficher la valeur entière\n");

    scanf("%d",&choix);

    switch(choix)
    {
        case 1:
            display_value_point();
            menu();
        case 2:
            display_pointed();
            menu();
        case 3:
            entervalue();
            menu();
        case 4:
            display_adresse_pointer();
            menu();
        case 5:
            display_address_var();
            menu();
        case 6:
            display_integer();
            menu();
        case 7:
            exit(1);

    }
}




int main()
{

/************************************************Ex1************************************************************
    int *iptr;
    char *cptr;
    float *fptr;

    int inombre=1;
    char  ccaractere='c';
    float fnombre=1.333;
/********************************************affectation variable vers pointeur********************************
    iptr=&inombre;
    cptr=&ccaractere;
    fptr=&fnombre;
/*******************************************Valeurs des variables***********************************************
    printf("%d\n",inombre);
    printf("%c\n",ccaractere);
    printf("%f\n",fnombre);
/******************************************Valeurs des pointeurs***********************************************
    printf("%p\n",iptr);
    printf("%p\n",cptr);
    printf("%p\n",fptr);
/*****************************************Valeur des adresses variables****************************************
    printf("%p\n",&inombre);
    printf("%p\n",&ccaractere);
    printf("%p\n",&fnombre);
/*****************************************Valeur des adresses variables****************************************
    printf("%p\n",&iptr);
    printf("%p\n",&cptr);
    printf("%p\n",&fptr);
/**********************************************Ex2***********************************************************/
menu();
    return 0;
}