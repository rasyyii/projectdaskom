#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>


void mainmenu(void);
void administration(void);
void customer(void);
void aboutus(void);
void addSongs(void);
void editSongs(void);
void removeSongs(void);
void viewrecord(void);
void addsongs(void);
void purchasing(void);


int main()
{
	mainmenu();
	return 0;
}

/*void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}*/

void mainmenu(void)
{
	system("cls");
	printf("                                 **************************************************************************\n");
	printf("                                                     WELCOME TO MUSIC STORE\n");
	printf("                                 **************************************************************************\n\n\n");
	printf("          1. ADMIN--> \n\n          2. CUSTOMER--> \n\n          3. ABOUT US--> \n\n          4. Exit--> \n\n\n             Enter Your Choice --->");
	int choice;
	scanf("%d",&choice);
	if(choice==1)
	{	
		system("cls");
		administration();
		
	}
	else if(choice==2)
	{	
		system("cls");
		customer();
		
	}
	else if(choice==3)
	{
		system("cls");
		aboutus();
	}
	else if(choice==4)
	{
		system("cls");
		printf("\n\n\n");
		printf("*******************************THANK YOU**************************************\n");

		printf("*********(INSERT MOTTO HERE)***************\n\n");
		exit(0);
	}
}

void administration(void)
{
	//Password();
	system("cls");
	printf("**************************************WELCOME TO THE ADMIN SECTION************************************************\n\n");
	printf("          1. Add New Songs\n\n          2. Edit Songs\n\n          3. Remove Songs\n\n          4. View The Songs\n\n                 5. Back To Main Menu \n\n             Enter Your Choice --->");
	int n;
	scanf("%d",&n);
		printf("\n\n");
	int wait;
	//printf("In progress :");
	for(wait=0;wait<=100000;wait++)
	{
		printf("\rIn progress : %d",wait/1000);
	}
	printf("\n\n");
	switch(n)
	{	
		case 1: system("cls");
			addSongs();
		break;
		
		case 2: system("cls");
			editSongs();
		break;
			
		case 3: system("cls");
			removeSongs();
		break;
			
		case 4: system("cls");
			viewrecord();
		break;
		
		case 5:system("cls");
			mainmenu();
		break;
		
		default: printf("Wrong Input !! PLease Re-enter The Correct Option");
		if(getch())
		administration();
		break;
	}
	/*
	if(n==1)
	{
		addSongs();
	}
	else if(n==2)
	{
		editSongs();
	}
	else if(n==3)
	{
		removeSongs();
	}
	else if(n==4)
	{
		viewrecord();
	}
	else if(n==5)
	{
		system("cls");
		mainmenu();
	}
	else
	{
		printf("Wrong Input !! PLease Re-enter The Correct Option");
		if(getch())
		administration();
	}
	*/
	
}
void customer(void)
{
	printf("**************************************WELCOME TO THE CUSTOMER SECTION************************************************\n\n");
	printf("          1. View Songs\n\n          2. Add Songs\n\n          3. Purchasing\n\n          4. Back To Main Menu\n\n                           Enter Your Choice --->");
	int n;
	scanf("%d",&n);
		printf("\n\n");
	int wait;
	//printf("In progress :");
	for(wait=0;wait<=100000;wait++)
	{
		printf("\rIn progress : %d",wait/1000);
	}
	printf("\n\n");
	if(n==1)
	{
		viewrecord();
	}
	else if(n==2)
	{
		addsongs();
	}
	else if(n==3)
	{
		purchasing();
	}
	else if(n==4)
	{
		system("cls");
		mainmenu();
	}
	else
	{
		printf("Wrong Input !! PLease Re-enter The Correct Option");
		if(getch())
		administration();
	}
}

void aboutus(void)
{
}

void addSongs(void)
{
	printf("Hai");
}

void editSongs(void)
{
}

void removeSongs(void)
{
}

void viewrecord(void)
{
}

void addsongs(void)
{
	printf("Enter  ");
}

void purchasing(void)
{
}


