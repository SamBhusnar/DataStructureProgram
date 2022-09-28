#include <stdio.h>
#include <string.h>
typedef struct fifth
{
    int Iamint[10];
    float Iamfloat[10];
    char Iamchar[10];
} e;

int main()
{
    e sam;
    //    sam.Iamchar="sa";
    // sam.Iamfloat=8.8;
    // sam.Iamint=8;
    int save = 8;
    float save2 = 8.8;
    char save3 = 's';
    strcpy(sam.Iamchar, " save3");
    printf("%s \n", sam.Iamchar);
    // strcpy(sam.Iamint, "8");
    // printf("%d \n", *(sam.Iamint));
    // int sam[10]=4;
    char sam2[10] = "samadhan"; // singal quote not allowed here in order to define this array
    // float sam3[30]=8.8;
    // sam2[10]="kkkkkkk";// it not give an error or many error but it not affect original result
    // sam2[]="Pandharpur";// it causing for error
    int i = 0;
        printf("sam 0 value is : %c\n", sam2[0]);
        printf("sam 1 value is : %c\n", sam2[1]);

    // strcpy(sam.Iamfloat, save2);
    // printf("%f \n",sam.Iamfloat);
    return 0;
}