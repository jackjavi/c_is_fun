#include <stdio.h>

struct User
{
	char *name;
	char *email;
	int age;
};

int main(void)
{
	struct User user;
	struct User *ptr;

	ptr = &user;
	/* Deferencing the pointer before
	   access the data with the '.' symbol */
	(*ptr).name = "Foo Bar";
	/* Using the '->' works the same, and
	   is so much easier */
	ptr->email = "foo@hbtn.com";
	printf("%s\n", ptr->email);
	return (0);
}
