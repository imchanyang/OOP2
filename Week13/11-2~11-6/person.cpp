#include "person.h"
//
Person :: Person ()
: identity (0) {
}

Person :: Person (long id)
: identity (id) {
    assert (identity >= 100000000 && identity <= 999999999);
}

Person :: Person (const Person& person)
: identity (person.identity){
}
// 소멸자
Person:: ~Person() {
}
// 접근자 멤버 함수
void Person :: print () const {
    cout << "Identity: " << identity << endl;
}