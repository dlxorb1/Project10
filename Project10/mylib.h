#pragma once
#ifndef mylib_h
#define mylib_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TRUE 1
#define FALSE 0
#define MAX_MEMBERS 100
#define MAX_ARRAY 30
#define MAX_BOOKS 100

extern char* ids[MAX_MEMBERS];
extern char* passwds[MAX_MEMBERS];
extern char* books[MAX_BOOKS];
extern char* cur_user;

void init_lib();
int login();

#endif //mylib_h
