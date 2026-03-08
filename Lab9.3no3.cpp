#include <stdio.h>
#include<string.h>
int checkLogin(char *login, char *passwd, char *logindb, char *passdb); 

int main() {
	char logindb[5][64]={"user1","user2","user3","user4","user5"};
	char passworddb[5][64]={"pass1","pass2","pass3","pass4","pass5"};
	char login[64], password[64],accepted=0;
	printf("Enter login : "); gets(login);
	printf("Enter password : "); gets(password);
	for(int i=0;i<5;i++){
		if( checkLogin(login, password,logindb[i], passworddb[i]) == 1) {
			accepted = 1;
			break;
		} 
	}
	if (accepted){
		printf("Welcome\n");
	}
	else {
		printf("Incorrect login or password\n");
	}
}
int checkLogin(char *login, char *passwd, char *logindb, char *passdb) {
	if( !strcmp(login,logindb) && !strcmp(passwd,passdb))
		return 1;
	else
		return 0;
}
