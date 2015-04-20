/*hotel.h*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 100 

int END;
int END2;

struct name{
  int p_roomNo;
  int p_charge;
  int p_reservation;
  char p_name[20];
  char p_roomTyp[5];
  char p_address[MAX];
  char p_tel[20];
  int p_roomNo_r;
  int p_charge_r;
  int p_reservation_r;
  char p_name_r[20];
  char p_roomTyp_r[5];
  char p_address_r[MAX];
  char p_tel_r[20];
}customer[MAX];
