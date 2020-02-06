#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

#include <string>
using std::string;

int total(){
    return  0;
}


TEST_CASE("An empty string returns zero"){
    CHECK(total() == 1);
}