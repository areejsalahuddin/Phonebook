#ifndef PHONE_H_INCLUDED
#define PHONE_H_INCLUDED
typedef struct date;
typedef struct phonebook;
void load();
void add();
int searchP(int c);
void del();
void save();
void prnt();
void Modify();
int isValidEmail(char *email);
void phonenumber(int m);
void sortbyDOB();
void sortbyLname();
void Lname(int m);
void Fname(int m);
int isValidAddress(char *address);


#endif // PHONE_H_INCLUDED
