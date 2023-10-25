#pragma once


#ifndef APP_H
#define APP_H

#define admin_mode  0
#define the_user_mode 1


typedef struct data_base_t
{
	char name[25];
	char gender[7];
	int age;
	char flag;
	char reserve;
	int id_ver;

}data_base_t;
data_base_t arr[1000] ;




void Admin(void);
void the_user(void);

void Add_new_patient_record(void);
void Edit_patient_record(void);
void Reserve_a_slot_with_the_doctor(void);
void Cancel_reservation(void);

void View_patient_record(void);
void View_todays_reservations(void);

void appliction(void);



#endif

