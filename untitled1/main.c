#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "test.h"
#include "include/my.h"

int view_struct(struct s_person *person)
{
    my_putstr(person->first_name);
    my_putstr(person->last_name);
    my_put_nbr(person->age);

    return (0);
}

struct s_person *new_person(char *first_name, char *last_name, int age)
{
    struct s_person *person;

    person = malloc(sizeof(struct s_person));
    if (person == NULL)
        return (NULL);
    person->first_name = my_strdup(first_name);
    person->last_name = my_strdup(last_name);
    person->age = age;
    return (person);
}

int main(int ac, char **av) {
    struct s_person *person;
    person = new_person("Sherlock", "Holmes", 30);
    return (0);
}
