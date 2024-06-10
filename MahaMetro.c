#include<stdio.h>
int main()
{
    int n,ch,Total_rs=0,candidates,price,lokmanya_nagar,bansi_nagar,vasudev_nagar,rachna_ringroad;
    printf("_____MAHA METRO_____\n");
    printf("Welcome to lokmanya Nagar Metro Station\n");
    printf("Choose your Destination\n");
    printf("1.Bansi nagar \n2.Vasudev nagar \n3.Rachna ring road \n4.Dhrampeth college \n5.Institute of engineers \n6.LED square \n7.Zansi Rani square \n8.Sitaburdi\n");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
    printf("You have choose your destination as bansi nagar\n");
    printf("Per person price=5 Rs\n");
    printf("Enter the number of candidates:-");
    scanf("%d",&candidates);
    Total_rs=candidates*5;
    printf("Your total amount is=%d Rs ",Total_rs);
    break;
    
    case 2:
    printf("You have choose your destination as vasudev nagar\n");
    printf("Per person price=10 Rs\n");
    printf("Enter  the no of candidates:-");
    scanf("%d",&candidates);
    Total_rs=candidates*10;
    printf("Your total amount is=%d Rs",Total_rs);
    break;
    
    case 3:
    printf("You have choose your destination as rachna ring road\n");
    printf("Per person price=15 Rs\n");
    printf("Enter  the no of candidates:-");
    scanf("%d",&candidates);
    Total_rs=candidates*15;
    printf("Your total amount is=%d Rs",Total_rs);
    break;
    
    case 4:
    printf("You have choose your destination as dhrampeth college\n");
    printf("Per person price=20 Rs\n");
    printf("Enter  the no of candidates:-");
    scanf("%d",&candidates);
    Total_rs=candidates*20;
    printf("Your total amount is=%d  Rs",Total_rs);
    break;
    
    case 5:
    printf("You have choose your destination as institute of engineers\n");
    printf("Per person price=25 Rs\n");
    printf("Enter  the no of candidates:-");
    scanf("%d",&candidates);
    Total_rs=candidates*25;
    printf("Your total amount is=%d  Rs",Total_rs);
    break;
    
    case 6:
    printf("You have choose your destination as LED square\n");
    printf("Per person price=30 Rs\n");
    printf("Enter  the no of candidates:-");
    scanf("%d",&candidates);
    Total_rs=candidates*30;
    printf("Your total amount is=%d  Rs",Total_rs);
    break;
    
    case 7:
    printf("You have choose your destination as zansi Rani square \n");
    printf("Per person price=35 Rs\n");
    printf("Enter  the no of candidates:-");
    scanf("%d",&candidates);
    Total_rs=candidates*35;
    printf("Your total amount is=%d Rs",Total_rs);
    break;
    
    case 8:
    printf("You have choose your destination as sitabuldi\n");
    printf("Per person price=40 Rs\n");
    printf("Enter  the no of candidates:-");
    scanf("%d",&candidates);
    Total_rs=candidates*40;
    printf("Your total amount is= %d Rs ",Total_rs);
    break;
    }
    printf("\nGet your tickets_\n");
    printf("\t___Happy Journey___");
    return 0;
}
