#include <stdio.h>
#include <stdlib.h>

struct User
{
	//char c;
	char *name;
	char *email;
	int age;
};

struct User *new_user(char *name, char *email, int age)
{
	struct User *user;
	
	user = malloc(sizeof(struct User));
	if (user == NULL)
		return (NULL);
	user->name = name;
	(*user).email = email;
	user->age = age;

	return (user);
}

int main(void)
{
	struct User *user;
	struct User s;

	user = new_user("Foo", "foo@foo.bar", 98);
	if (user == NULL)
		return (1);
	printf("User %s created !\n", (*user).name);
	printf("Email is: %s\n", user->email);
	printf("And he is %d years of age\n", (*user).age);
	printf("sizeof struct is %ld\n", sizeof(s));
	return (0);
}
