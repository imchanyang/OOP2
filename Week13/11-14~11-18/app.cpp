#include "person.h"

int main ( ){
    Date date1 (5, 6, 1980);
    Person person1 (111111456, date1);
    Date date2 (4, 23, 1978);
    Person person2 (345332446, date2);

    person1.print ( );
    person2.print ( );
    return 0;
}