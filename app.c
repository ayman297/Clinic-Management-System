#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_DEPRECATE  
#define _CRT_NONSTDC_NO_DEPRECATE


#include<stdio.h>
#include"app.h"
int  password , i ,x ,id  ;
int mode, admain_choise;
int counter_of_pass = 0;
int slot; 
int resrvion[5] = {0};


void Add_new_patient_record(void)
{
	printf("Please inter ID \n ");
	scanf("%d",&id);
	while ((getchar()) != '\n');
	if (arr[id].flag == 0)
	{
		printf("Please inter age \n ");
		scanf("%d", &arr[id].age);
		while ((getchar()) != '\n');

		printf("Please inter name\n ");
		gets(arr[id].name);

		printf("Please inter gender  \n ");
		gets(arr[id].gender);
		arr[id].flag = 1;
	}
	else
	{
		printf(" the patient is exist\n ");
	}
	
}


void Edit_patient_record(void)
{
	printf("Please inter ID \n ");
	scanf("%d", &id);
	while ((getchar()) != '\n');
	
		printf("Please inter age \n ");
		scanf("%d", &arr[id].age);
		while ((getchar()) != '\n');

		printf("Please inter name\n ");
		gets(arr[id].name);

		printf("Please inter gender  \n ");
		gets(arr[id].gender);
}
void Reserve_a_slot_with_the_doctor(void)
{
	printf("the available slots is \n ");
	for (i = 0; i < 5; i++)
	{
		if (resrvion[i] == 0)
		{
			switch (i)
			{
			case(0):printf("2pm    to 2:30pm slot 1 \n "); break;
			case(1):printf("2:30pm to 3:00pm slot 2 \n "); break;
			case(2):printf("3pm    to 3:30pm slot 3 \n "); break;
			case(3):printf("4pm    to 4:30pm slot 4 \n "); break;
			case(4):printf("4:30pm to 5:00pm slot 5 \n "); break;
			default:break;
			}
		}
	}
	//*************************************************************************
	printf("Please inter ID \n ");
	scanf("%d", &id);
	while ((getchar()) != '\n');
	

	printf("chose the avilabe slot \n ");
	scanf("%d", &slot);
	
	resrvion[(slot - 1)] = id;
	arr[id].reserve = slot;
	


}
void Cancel_reservation(void)
{
	printf("Please inter ID \n ");
	scanf("%d", &id);
	resrvion[((arr[id].reserve) - 1)] = 0;
	arr[id].reserve = 0;
	
}


void View_patient_record(void)
{
	printf("Please inter ID \n ");
	scanf("%d", &id);
	if (arr[id].flag == 1)
	{
		for (i = id; i <= id; i++)
		{
			printf("patian of id %d ", id);
			printf("with name %s\n", arr[i].name);
			printf("age is %d\n", arr[i].age);
			printf("gender is %s\n", arr[i].gender);

		}
	}
	else
	{
		printf(" there is no data \n ");
	}
}

void View_todays_reservations(void)
{
	printf("today ..... \n\n ");
	for (i = 0; i < 5; i++)
	{
		if (resrvion[i] != 0)
		{
			switch (i)
			{
			case(0):printf("2pm    to 2:30pm with pation id %d \n ", resrvion[i]); break;
			case(1):printf("2:30pm to 3:00pm with pation id %d \n ", resrvion[i]); break;
			case(2):printf("3pm    to 3:30pm with pation id %d \n ", resrvion[i]); break;
			case(3):printf("4pm    to 4:30pm with pation id %d \n ", resrvion[i]); break;
			case(4):printf("4:30pm to 5:00pm with pation id %d \n ", resrvion[i]); break;
			default:break;
			}

		}
		
			
		
	}
}

void Admin(void)
{
	printf("to Add_new_patient_record press 0\nto Edit_patient_record press 1\nto Reserve_a_slot_with_the_doctor press 2\n");
	printf("to Cancel_reservation press 3\n to exit press 4\n ");
	scanf("%d", &admain_choise);
	switch (admain_choise)
	{
	case(0):Add_new_patient_record(); break;
	case(1):Edit_patient_record(); break;
	case(2):Reserve_a_slot_with_the_doctor(); break;
	case(3):Cancel_reservation(); break;
	//case(4):exit = 255; break;
	default:break;
	}
}
void the_user(void)
{
	printf("to View_patient_record press 0\nto View_todays_reservations press 1\n");
	scanf("%d", &admain_choise);
	switch (admain_choise)
	{
	case(0):View_patient_record(); break;
	case(1):View_todays_reservations(); break;
	default:break;
	}
}

void appliction(void)
{
	
	printf("\n\nplease inter your mode \n");
	printf("for admain mode press 0 \n");
	printf("for  the user mode press 1 \n");
	scanf("%d", &mode);
	if (mode == admin_mode)
	{

		while ((counter_of_pass < 3))
		{
			printf("please inter password \n");
			scanf("%d", &password);
			if (password == 1234)
			{
				Admin();
				break;

			}
			else
			{
				counter_of_pass++;
				if(counter_of_pass<3)
				{
					printf("Try again \n");
				}


			}

		}
		printf("pass not correct \n");


	}
	else if(mode == the_user_mode)
	{
		the_user();
	}
	else
	{
		printf("your choise is not correct \n");

	}

}
 