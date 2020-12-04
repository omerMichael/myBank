#define ACCOUNTS 50
double bank [ACCOUNTS][2];

void openAccount(double amount);
void Balance(int account_number);
void deposit(int account_number,double amount);
void withdrawal(int account_number,double amount);
void closeAc(int account_number);
void Interest(double  interest_rate);
void print();
void closeAll();
void BufferClean();