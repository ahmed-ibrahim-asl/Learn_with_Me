/*** Macros section start ***/
#define MaxNumber_of_Users    5 
#define maxLengthOf_UserName  20
/*** Macros section end ***/


/*** Function Prototype section start ***/
void NewAccount();               
short userInDataBaseOrNot(char *accountName, short size); 

void mainDisplay(void);
void loginDisplay(void);
void userInterface(char* userName);
void viewBalance(char *userName);

void Deposit(char* userName);
void withDrawMoney(char* userName);

void clearScreen(); 

/*** Function Prototype section stop ***/



struct customer{
    char name[maxLengthOf_UserName];
    long balance;

    short pin;
};

