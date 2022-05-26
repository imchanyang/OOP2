#include "person.h"

Person :: Person (long id, Date bd)
: identity (id), birthDate (bd){
    assert (identity > 111111111 && identity < 999999999);
}

Person :: ~Person ( ){
}

void Person :: print ( ) const{
    cout << "주민등록번호: " << identity << endl;
    cout << "생년월일: ";
    birthDate.print ();
    cout << endl << endl;
}