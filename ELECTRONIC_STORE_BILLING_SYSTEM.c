//XYZ ELECTRONICS BILLING SYSTEM
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
struct costum
{
	char name[50];
	char address[100];
};
char m1[100],l1[100],t1[100],r1[100];
char m2[100],l2[100],t2[100],r2[100];
char m3[100],l3[100],t3[100],r3[100];
char m4[100],l4[100],t4[100],r4[100];
char m5[100],l5[100],t5[100],r5[100];
char m6[100],t6[100];
char m7[100];
char m8[100];
char m9[100];
char m10[100];
char m11[100];
int  item;
float totalbill=0;
float gst;
float finalbill;
int n;
int mb;
int lb;
int tb;
int rb;
int flag1=0;
int flag2=0;
int flag3=0;
int flag4=0;
int flag5=0;
int flag6=0;
int flag7=0;
int flag8=0;
int flag9=0;
int flag10=0;
int flag11=0;
int flag12=0;
int flag13=0;
int flag14=0;
int flag15=0;
int flag16=0;
int flag17=0;
int flag18=0;
int flag19=0;
int flag20=0;
int flag21=0;
int flag22=0;
int flag23=0;
int flag24=0;
int flag25=0;
int flag26=0;
int flag27=0;
long long mn;
void bill()
{
    struct costum *s;
	printf("\n\t\t\t\t============================================================\n");
	printf("\n\t\t\t\t---------------------GENERATING THE INVOICE -----------------\n");
	printf("\n\t\t\t\tPlease Enter the Details of customer ");
	printf("\n\t\t\t\t---------------------------------------------------------------");
    s=(struct costum*)malloc(1*sizeof(struct costum));
    printf("\n\t\t\t\tEnter name of the coustmer: ");
    scanf("%s",s->name);
	printf("\n\t\t\t\tEnter coustmer mobile number:");
	scanf("%lld",&mn);
	printf("\n\t\t\t\tEnter customer Location: ");
	scanf("%s",s->address);
	printf("\n\t\t\t\tInvoice Generated press any button To print Invoice\n");
	fflush(stdin);
	getch();
	printf("\n");-
	printf("\n");
	printf("\n");
	printf("\t\t\t\t|--------------------------------------------------------------------------|\n");
    printf("\t\t\t\t|\t\t\tXYZ   ELECTRONICS-WARANGAL                         |\n");
	printf("\t\t\t\t|\t\t           GSTIN:XXXXXXXXXXXXXX                            |\n");
	printf("\t\t\t\t|--------------------------------------------------------------------------|\n");
	printf("\n");
	printf("\t\t\t\t Email : xyz@electronics.in\n");
	printf("\t\t\t\t Phone : 9xxxxxxxxx, 9xxxxxxxxx\n");
	printf("\t\t\t\t|---------------------------------------------------------------------------|\n");
	printf("\n\t\t\t\t\t\t\t\tTAX INVOICE\n");
	time_t t = time(NULL); 
	struct tm tm = *localtime(&t);
	printf("\n");
	printf("\t\t\t\t\t\t\tDate and time: %d-%02d-%02d %02d:%02d:%02d\n",tm.tm_mday, tm.tm_mon + 1,tm.tm_year + 1900, tm.tm_hour, tm.tm_min, tm.tm_sec);
    printf("\n\t\t\t\t Cashier:Cashier Name\n");
	printf("\t\t\t\t|---------------------------------------------------------------------------|\n");
	printf("\t\t\t\tCustomer Name :%s\n",s->name);
	fflush(stdin);
	printf("\t\t\t\tMobile Number :%lld\n",mn);
	printf("\t\t\t\tLocation :%s\n",s->address);
	free(s);
	printf("\n\t\t\t\tThank you for Shopping at XYZ   Electronics-Location\n");
	printf("\n\t\t\t\t==========================================================================\n");
	if(flag1>0)
	{
			printf("\n\t\t\t\t%s\n",m1);
	}
	if(flag2>0)
	{
			printf("\n\t\t\t\t%s\n",m2);
	}
	if(flag3>0)
	{
			printf("\n\t\t\t\t%s\n",m3);
	}
	if(flag4>0)
	{
			printf("\n\t\t\t\t%s\n",m4);
	}
	if(flag5>0)
	{
			printf("\n\t\t\t\t%s\n",m5);
	}
	if(flag6>0)
	{
			printf("\n\t\t\t\t%s\n",m6);
	}
	if(flag7>0)
	{
		printf("\n\t\t\t\t%s\n",m7);
	}
	if(flag8>0)
	{
		printf("\n\t\t\t\t%s\n",m8);
	}
	if(flag9>0)
	{
		printf("\n\t\t\t\t%s\n",m9);
	}
	if(flag10>0)
	{
		printf("\n\t\t\t\t%s\n",m10);
	}
	if(flag11>0)
	{
		printf("\n\t\t\t\t%s\n",m11);
  }
	if(flag12>0)
	{
		  printf("\n\t\t\t\t%s\n",l1);
	}
	if(flag13>0)
	{
		  printf("\n\t\t\t\t%s\n",l2);
	}
	if(flag14>0)
	{
		printf("\n\t\t\t\t%s\n",l3);
	}
	if(flag15>0)
	{
		printf("\n\t\t\t\t%s\n",l4);
	}
	if(flag16>0)
	{
		 printf("\n\t\t\t\t%s\n",l5);
	}
	if(flag17>0)
	{
		printf("\n\t\t\t\t%s\n",t1);
	}
	if(flag18>0)
	{
		printf("\n\t\t\t\t%s\n",t2);
	}
	if(flag19>0)
	{
		printf("\n\t\t\t\t%s\n",t3);
	}
	if(flag20>0)
	{
		printf("\n\t\t\t\t%s\n",t4);
	}
	if(flag21>0)
	{
		printf("\n\t\t\t\t%s\n",t5);
	}
	if(flag22>0)
	{
		printf("\n\t\t\t\t%s\n",t6);
	}
	if(flag23>0)
	{
		printf("\n\t\t\t\t%s\n",r1);
	}
	if(flag24>0)
	{
		printf("\n\t\t\t\t%s\n",r2);
	}
	if(flag25>0)
	{
		printf("\n\t\t\t\t%s\n",r3);
	}
	if(flag26>0)
	{
		printf("\n\t\t\t\t%s\n",r4);
	}
	if(flag27>0)
	{
		printf("\n\t\t\t\t%s\n",r5);
	}
	gst=0.18*totalbill;
    printf("\n\t\t\t\t==========================================================================\n");
	printf("\t\t\t\tShopping Bill Excluding GST is                 	  :%.2f\n",totalbill);
	printf("\t\t\t\tGoods and Service Tax|18 Percent (GST)            :%.2f",gst);
	finalbill=gst+totalbill;
	printf("\n\t\t\t\t---------------------------------------------------------------------------\n");
	printf("\t\t\t\tTotal Shopping Bill is                            :%.2f/-INR\n",finalbill);
	printf("\t\t\t\t---------------------------------------------------------------------------\n");
	printf("\t\t\t\t\tTerms & Conditions\n");
	printf("\t\t\t\t---------------------------------------------------------------------------\n");
	printf("\t\t\t\t1.Subject to Location Jurisdiction\n");
	printf("\t\t\t\t2.Goods once sold cannot be taken back or Exchanged\n");
	printf("\t\t\t\t3.Warranty Terms\n");
	printf("\t\t\t\t4.Service will be done only at authorised service canter only\n");
	printf("\t\t\t\t5.Original bill and warranty card is must for service\n");
	printf("\t\t\t\t6.No Replacement\n");
	printf("\t\t\t\t7.One Year warranty from OEM from date of purchase\n");
}
void mobiles()
{
	printf("\n\t\t\t\t------------------TOP BRANDS--------------");
	printf("\n\t\t\t\tApple");
	printf("\n\t\t\t\t1.iPhone 13 Pro Max      |1,24,999.00/- INR");
	printf("\n\t\t\t\t2.iPhone 13 Pro          |1,04,999.00/- INR");
	printf("\n\t\t\t\t3.iPhone SB Edition 2022 |1,64,999.00/- INR\n");
	printf("\n\t\t\t\t--------------------------------------------");
	printf("\n\t\t\t\tSamsung");
	printf("\n\t\t\t\t4.S22 Ultra              |99,999.00/-INR ");
	printf("\n\t\t\t\t5.NOTE 22+           	   |99,999.00/-INR\n");
	printf("\n\t\t\t\t--------------------------------------------");
	printf("\n\t\t\t\tOneplus");
	printf("\n\t\t\t\t6.Oneplus 10 Pro  	   |49,999.00/-INR");
	printf("\n\t\t\t\t7.Oneplus Nord 2         |29,999.00/-INR\n");
	printf("\n\t\t\t\t--------------------------------------------");
	printf("\n\t\t\t\tRedmi");
	printf("\n\t\t\t\t8.Redmi Note 11 Pro      |19,999.00/-INR");
    printf("\n\t\t\t\t9.Redmi Note 11          |14,999.00/-INR\n");
    printf("\n\t\t\t\t--------------------------------------------");
    printf("\n\t\t\t\tRealme");
    printf("\n\t\t\t\t10.Realme 9 Pro          |19,999.00");
    printf("\n\t\t\t\t11.Realme 9              |14,999.00");
    printf("\n");
    printf("\n\t\t\t\tChoose your Mobile\n\t\t\t\t");
    scanf("\n\t\t\t\t%d",&mb);
    switch(mb)
    {
    	case 1:
			printf("\n");
    	   	printf("\n\t\t\t\tHow many iPhone 13 Pro Max that you  wanted to purchase :\n\t\t\t\t");
	        scanf("%d",&n);
	        printf("\n\t\t\t\tThe cost of %d iPhone 13 Pro Max is: %d\n",n,n*124999);
	        totalbill+=n*124999;
	        sprintf(m1,"The cost of %d iPhone 13 Pro Max                              :%d",n,n*124999);
	        flag1++;
	        break;
	    case 2:
	    	printf("\n\t\t\t\tHow many  iPhone 13 Pro  that you  wanted to purchase:\n\t\t\t\t");
	        scanf("%d",&n);
	        printf("\n\t\t\t\tThe cost of %d iPhone 13 Pro  is: %d\n",n,n*104999);
	        totalbill+=n*104999;
	        sprintf(m2,"The cost of %d iPhone 13 Pro  								  :%d",n,n*104999);
	        flag2++;
	        break;
	    case 3:
	    	printf("\n\t\t\t\tHow many   iPhone SB Edition 2022  that you  wanted to purchase:\n\t\t\t\t");
	        scanf("%d",&n);
	        printf("\n\t\t\t\tThe cost of %d iPhone SB Edition 2022  is: %d\n",n,n*164999);
	        totalbill+=n*164999;
	        sprintf(m3,"The cost of %d iPhone SB Edition 2022                         :%d",n,n*164999);
	        flag3++;
	    	break;
	    case 4:
	    	printf("\n\t\t\t\tHow many S22 Ultra that you  wanted to purchase:\n\t\t\t\t");
	        scanf("%d",&n);
	        printf("\n\t\t\t\tThe cost of %d S22 Ultra is: %d\n",n,n*99999);
	        totalbill+=n*99999;
	        sprintf(m4,"The cost of %d S22 Ultra                                       :%d",n,n*99999);
	        flag4++;
	    	break;
	    case 5:
	    	printf("\n\t\t\t\tHow many NOTE 22+ that you  wanted to purchase:\n\t\t\t\t");
	        scanf("%d",&n);
	        printf("\n\t\t\t\tThe cost of %d NOTE 22+ is: %d\n",n,n*99999);
	        totalbill+=n*99999;
	        sprintf(m5,"The cost of %d NOTE 22+                                       :%d",n,n*99999);
	        flag5++;
	    	break;
	    case 6:
	    	printf("\n\t\t\t\tHow many Oneplus 10 Pro that you  wanted to purchase:\n\t\t\t\t");
	        scanf("%d",&n);
	        printf("\n\t\t\t\tThe cost of %d Oneplus 10 Pro is: %d\n",n,n*49999);
	        totalbill+=n*49999;
	        sprintf(m6,"The cost of %d Oneplus 10 Pro                                  :%d",n,n*49999);
	        flag6++;
	    	break;
	    case 7:
		    printf("\n\t\t\t\tHow many Oneplus Nord 2 that you  wanted to purchase:\n\t\t\t\t");
	        scanf("%d",&n);
	        printf("\n\t\t\t\tThe cost of %d Oneplus Nord 2 is: %d\n",n,n*29999);
	        totalbill+=n*29999;
	        sprintf(m7,"The cost of %d Oneplus Nord 2                                 :%d",n,n*29999);
	        flag7++;
	    	break;
	    case 8:
	    	  printf("\n\t\t\t\tHow many Redmi Note 11 Pro that you  wanted to purchase:\n\t\t\t\t");
	        scanf("%d",&n);
	        printf("\n\t\t\t\tThe cost of %d Redmi Note 11 Pro is: %d\n",n,n*19999);
	        totalbill+=n*19999;
	        sprintf(m8,"The cost of %d Redmi Note 11 Pro                             : %d",n,n*19999);
	        flag8++;
	    	  break;
	    case 9:
	    	  printf("\n\t\t\t\tHow many Redmi Note 11  that you  wanted to purchase:\n\t\t\t\t");
	        scanf("%d",&n);
	        printf("\n\t\t\t\tThe cost of %d Redmi Note 11  is: %d\n",n,n*14999);
	        totalbill+=n*14999;
	        sprintf(m9,"The cost of %d Redmi Note 11                                 :%d",n,n*14999);
	        flag9++;
	    	break;
	    case 10:
	    	printf("\n\t\t\t\tHow many Realme 9 Pro   that you  wanted to purchase:\n\t\t\t\t");
	        scanf("%d",&n);
	        printf("\n\t\t\t\tThe cost of %d Realme 9 Pro   is: %d\n",n,n*19999);
	        totalbill+=n*19999;
	        sprintf(m10,"The cost of %d Realme 9 Pro                                 : %d",n,n*19999);
	        flag10++;
	    	break;
	    case 11:
	    	printf("\n\t\t\t\tHow many Realme 9 that you  wanted to purchase:\n\t\t\t\t");
	        scanf("%d",&n);
	        printf("\n\t\t\t\tThe cost of %d Realme 9  is: %d\n",n,n*14999);
	        totalbill+=n*14999;
	        sprintf(m11,"The cost of %d Realme 9                                     : %d",n,n*14999);
	        flag11++;
	    	break;
	    default:
	    	printf("\n\t\t\t\tNot Available");
	    }
}
void laptops()
{
  printf("\n\t\t\t\t-------------TOP MOBILE BRANDS------------------------");
	printf("\n\t\t\t\t1.DELL Insprion 5518 16 RAM 512 GB SSD      |69,999.00/-INR");
	printf("\n\t\t\t\t2.HP Pavillion 6122 16 GB RAM 512 GB SSD    |65,999.00/-INR");
	printf("\n\t\t\t\t3.LENOVO Slim 5 Pro 8GB RAM 512 GB SSD      |59,999.00/-INR");
	printf("\n\t\t\t\t4.ACER Swift 5 8 GB RAM 1TB HDD             |49,999.00/-INR");
	printf("\n\t\t\t\t5.APPLE MACBOOK M1 Pro 16 GB RAM 512 GB SSD |1,39,999.00/-INR");
	printf("\n\t\t\t\t---Choose  your Laptop---\n\t\t\t\t");
	scanf("\n\t\t\t\t%d",&lb);
	switch(lb)
	{
	  case 1:
	  	printf("\n\t\t\t\tHow many DELL Insprion 5518 16 RAM 512 GB SSD  that you wanted to purchase to purchase :\n\t\t\t\t");
        scanf("%d",&n);
        printf("\n\t\t\t\tThe cost of %d DELL Insprion 5518 16 RAM 512 GB SSD  is:%d\n",n,n*69999);
        totalbill+=n*69999;
        sprintf(l1,"The cost of %d DELL Insprion 5518 16 RAM 512 GB SSD  is      : %d",n,n*69999);
        flag12++;
        break;
    case 2:
       	printf("\n\t\t\t\tHow many HP Pavillion 6122 16 GB RAM 512 GB SSD  that you  wanted to purchase:\n\t\t\t\t");
        scanf("%d",&n);
        printf("\n\t\t\t\tThe cost of %d HP Pavillion 6122 16 GB RAM 512 GB SSD is:%d\n",n,n*65999);
        totalbill+=n*65999;
        sprintf(l2,"The cost of %d HP Pavillion 6122 16 GB RAM 512 GB SSD  is    : %d",n,n*65999);
        flag13++;
        break;
    case 3:
        printf("\n\t\t\t\tHow many LENOVO Slim 5 Pro 8GB RAM 512 GB SSD that you  wanted to purchase:\n\t\t\t\t");
        scanf("%d",&n);
        printf("\n\t\t\t\tThe cost of %d LENOVO Slim 5 Pro 8GB RAM 512 GB SSD is:%d\n",n,n*59999);
        totalbill+=n*59999;
        sprintf(l3,"The cost of %d LENOVO Slim 5 Pro 8GB RAM 512 GB SSD  is      : %d",n,n*59999);
        flag14++;
        break;
    case 4:
    	  printf("\n\t\t\t\tHow many ACER Swift 5 8 GB RAM 1TB HDD that you  wanted to purchase:\n\t\t\t\t");
        scanf("%d",&n);
        printf("\n\t\t\t\tThe cost of %d ACER Swift 5 8 GB RAM 1TB HDD is:%d\n",n,n*49999);
        totalbill+=n*49999;
        sprintf(l4,"The cost of %d ACER Swift 5 8 GB RAM 1TB HDD  is             : %d",n,n*49999);
        flag15++;
        break;
    case 5:
    	printf("\n\t\t\t\tHow many APPLE MACBOOK M1 Pro 16 GB RAM 512 GB SSD  that you  wanted to purchase:\n\t\t\t\t");
        scanf("%d",&n);
        printf("\n\t\t\t\tThe cost of %d APPLE MACBOOK M1 Pro 16 GB RAM 512 GB SSD  is:%d\n",n,n*139999);
        printf("\t\t\t\t|--------------------------------------------------------------------------|\n");
        totalbill+=n*139999;
        sprintf(l5,"The cost of %d APPLE MACBOOK M1 Pro 16 GB RAM 512 GB SSD   is: %d",n,n*139999);

        flag16++;
        break;

	}
}
void tvs()
{
	printf("\t\t\t\t1.Sony Bravia 4K Ultra HD Android LED TV                    |69,990.00/-INR\n");
    printf("\t\t\t\t2.Samsung 4K Ultra HD Smart LED TV - QA43Q60TAKXXL          |65,890.00/-INR\n");
    printf("\t\t\t\t3.Toshiba Vidaa OS Series 4K Ultra HD Smart LED TV - 43U5050|29,990.00/-INR\n");
    printf("\t\t\t\t4.LG Full HD LED Smart TV 43LM5650PTA                       |33,999.00/-INR\n");
    printf("\t\t\t\t5.TCL AI 4K Ultra HD Certified Android Smart LED TV 55P715  |45,999.00/-INR\n");
    printf("\t\t\t\t6.OnePlus U Series 4K LED Smart Android TV - 50U1S          |46,999.00/-INR\n");
    printf("\n\t\t\t\t----Choose your TV--------\n\t\t\t\t");
    scanf("\n\t\t\t\t%d",&tb);
    switch(tb)
    {
    	case 1:
	      	printf("\n\t\t\t\tHow many Sony Bravia 4K Ultra HD Android LED TV   that you  wanted to purchase:\n\t\t\t\t");
	        scanf("%d",&n);
	        printf("\n\t\t\t\tThe cost of %d Sony Bravia 4K Ultra HD Android LED TV  is:%d\n",n,n*69990);
	        totalbill+=n*69990;
	        sprintf(t1,"The cost of %d Sony Bravia 4K Ultra HD Android LED TV      is: %d",n,n*69990);
	        flag17++;
	        break;
    	case 2:
    		  printf("\n\t\t\t\tHow many Samsung 4K Ultra HD Smart LED TV - QA43Q60TAKXXL   that you  wanted to purchase:\n");
	        scanf("%d",&n);
	        printf("\n\t\t\t\tThe cost of %d Samsung 4K Ultra HD Smart LED TV - QA43Q60TAKXXL  is:%d\n",n,n*65890);
	        totalbill+=n*65890;
	        sprintf(t2,"The cost of %d Samsung 4K Ultra HD Smart LED TV - is         : %d",n,n*65890);
	        flag18++;
	        break;
	    case 3:
	    	printf("\n\t\t\t\tHow many Toshiba Vidaa OS Series 4K Ultra HD Smart LED TV  that you  wanted to purchase:\n");
	        scanf("%d",&n);
	        printf("\n\t\t\t\tThe cost of %d Toshiba Vidaa OS Series 4K Ultra HD Smart LED TV  is:%d\n",n,n*29990);
	        totalbill+=n*29990;
	        sprintf(t3,"The cost of %d Toshiba OS Series 4K Ultra HD Smart LED TV  is: %d",n,n*29990);
	        flag19++;
	        break;
	    case 4:
	    	printf("\n\t\t\t\tHow many LG Full HD LED Smart TV 43LM5650PTA  that you  wanted to purchase:\n");
	        scanf("%d",&n);
	        printf("\n\t\t\t\tThe cost of %d LG Full HD LED Smart TV 43LM5650PTA is:%d\n",n,n*33999);
	        totalbill+=n*33999;
	        sprintf(t4,"The cost of %d LG Full HD LED Smart TV 43LM5650PTA         is: %d",n,n*33999);
	        flag20++;
	        break;
	    case 5:
	    	printf("\n\t\t\t\tHow many TCL AI 4K Ultra HD Certified Android Smart LED TV 55P715  that you  wanted to purchase:\n");
	        scanf("%d",&n);
	        printf("\n\t\t\t\tThe cost of %d TCL AI 4K Ultra HD Certified Android Smart LED TV 55P715  is:%d\n",n,n*45999);
	        totalbill+=n*45999;
	        sprintf(t5,"The cost of %d TCL AI 4K Ultra HD Certified Smart TV  is     : %d",n,n*45999);
	        flag21++;
	        break;
	    case 6:
	    	printf("\n\t\t\t\tHow many OnePlus U Series 4K LED Smart Android TV - 50U1S  that you  wanted to purchase:\n");
	        scanf("%d",&n);
	        printf("\n\t\t\t\tThe cost of %d OnePlus U Series 4K LED Smart Android TV - 50U1S  is:%d\n",n,n*46999);
	        totalbill+=n*46999;
	        sprintf(t6,"The cost of %d OnePlus U Series 4K LED Smart Android TV    is: %d",n,n*46999);
	        flag22++;
	        break;
}
}
void ref()
{
	   	printf("\t\t\t\t1.Whirlpool 190 L 3 Star Single Door Refrigerator           |15,400.00\n");
	    printf("\t\t\t\t2.LG 190 L 4 Star Direct Cool Single Door Refrigerator      |15,000.00\n");
	    printf("\t\t\t\t3.Samsung 192 L 2 Star Direct-Cool Single-door Refrigerator |15,900.00\n");
	    printf("\t\t\t\t4.Whirlpool 245 L Frost Free Double Door Refrigerator       |18,490.00\n");
	    printf("\t\t\t\t5.LG 260 L 4 Star Frost Free Double Door Refrigerator       |25,000.00");
		printf("\n\t\t\t\t--------Choose your Refrigerator-----------\n\t\t\t\t");
		scanf("\n\t\t\t\t%d",&rb);
		switch(rb)
		{
		case 1:
		    printf("\n\t\t\t\tHow many Whirlpool 190 L 3 Star Single Door Refrigerator  that you  wanted to purchase:\n");
	        scanf("%d",&n);
	        printf("\n\t\t\t\tThe cost of %d Whirlpool 190 L 3 Star Single Door Refrigerator   is:%d\n",n,n*15400);
	        totalbill+=n*15400;
	        sprintf(r1,"The cost of %d Whirlpool 190 L 3 Star Single Door Refrigerator: %d",n,n*15400);
	        flag23++;
	        break;
		case 2:
		    printf("\n\t\t\t\tHow many LG 190 L4 Star Direct Cool Single Door Refrigerator that you  wanted to purchase:\n");
	        scanf("%d",&n);
	        printf("\n\t\t\t\tThe cost of %d LG 190 L4 Star Direct Cool Single Door Refrigerator is:%d\n",n,n*15000);
	        totalbill+=n*15000;
	        sprintf(r2,"The cost of %d LG 190 L4 Star Direct Cool SD Refrigerator  is: %d",n,n*15000);
	        flag24++;
	        break;
		case 3:
		    printf("\n\t\t\t\tHow many Samsung 192 L 2 Star Direct-Cool Single-door Refrigerator  that you  wanted to purchase:\n");
	        scanf("%d",&n);
	        printf("\n\t\t\t\tThe cost of %d Samsung 192 L 2 Star Direct-Cool Single-door Refrigerator is:%d\n",n,n*15900);
	        totalbill+=n*15900;
	        sprintf(r3,"The cost of %d Samsung 192 L2 Star Direct-Cool SD Fridge is  : %d",n,n*15900);
	        flag25++;
	        break;
		case 4:
            printf("\n\t\t\t\tHow many Whirlpool 245 L Frost Free Double Door Refrigerator  that you  wanted to purchase:\n");
	        scanf("%d",&n);
	        printf("\n\t\t\t\tThe cost of %d Whirlpool 245 L Frost Free Double Door Refrigerator   is:%d\n",n,n*18490);
	        totalbill+=n*18490;
	        sprintf(r4,"The cost of %dWhirlpool 245L Frost Free Double Door Fridge is: %d",n,n*18490);
	        flag26++;
	        break;
		case 5:
		    printf("\n\t\t\t\tHow many LG 260 L 4 Star Frost Free Double Door Refrigerator that you  wanted to purchase:\n");
	        scanf("%d",&n);
	        printf("\n\t\t\t\tThe cost of %d LG 260 L 4 Star Frost Free Double Door Refrigeratorr   is:%d\n",n,n*25000);
	        totalbill+=n*25000;
	        sprintf(r5,"The cost of %d LG 260 L4 Star Frost Double Door Fridge     is: %d",n,n*25000);
	        flag27++;
	        break;
}
}
void main()
{
	  printf("\n\t\t\t\t|=======================================================================|");
	  printf("\n\t\t\t\t|\t\tWELCOME TO   XYZ ELECTRONICS BILLING SYSTEM             |\n");
      printf("\t\t\t\t|\t\t\tXYZ ELECTRONICS-LOCATION                      |\n");
      printf("\t\t\t\t|=======================================================================|");
 int c;
do{
    printf("\t\t\t\t\t\t\t\t\n");
	printf("\n\t\t\t\t1.Mobiles");
	printf("\n\t\t\t\t2.Laptops");
	printf("\n\t\t\t\t3.TV");
	printf("\n\t\t\t\t4.Refridgerators");
	printf("\n\t\t\t\t5.Exit!");
	printf("\n");
	printf("\n\t\t\t\tSelect your items\n\t\t\t\t\t");
	scanf("\n\t\t\t\t\t\t\t\t\t%d",&item);

	
	switch(item)
	{
		case 1:
			mobiles();
			break;
		case 2:
			laptops();
			break;
		case 3:
			 tvs();
			break;
		case 4:
		     ref();
			 break;
		case 5:
			exit(0);
			break;
		default:
		    printf("\n\t\t\t\tNot Available\n");
		    printf("\n\t\t\t\tThank you for visting us!");
		    exit(0);
	   }
	printf("\n\t\t\t\tDo that you wanted to purchase to order more\n");
	printf("\n\t\t\t\t1.YES\n\t\t\t\t2.NO\n\t\t\t\t");
	scanf("\t\t\t\t\t%d",&c);
	}while(c==1);
	if(c!=1)
	{
		bill();
	}
}
