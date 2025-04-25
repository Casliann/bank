#ifndef ACCOUNT_H
#define ACCOUNT_H

#include "customer.h"

#ifndef VERSION
#define VERSION "1.0.0"
#endif 

int login(User *user);
int create_account(User *user);
int delete_account(User *user);
int check_customer_balance(User *user) ;

#endif