//
// Created by Jiayi on 2022/3/17.
//

#ifndef NEW_LIBRARIAN_H
#define NEW_LIBRARIAN_H
#include "book_management.h"
#include "user.h"

//图书管理员操作：
void add_book();
void remove_book();
int search_id(int);
void display_user();
void delete_user();


User* librarian;
#endif //NEW_LIBRARIAN_H
