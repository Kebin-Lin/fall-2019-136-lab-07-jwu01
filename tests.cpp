#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"
#include "funcs.h"

TEST_CASE("remove leading spaces"){
   CHECK(removeLeadingSpaces("       int x = 1;  ") == "int x = 1;  ");
}

TEST_CASE("unindent"){
   CHECK(unindent("bad.cpp") ==  R"(int main(){)" "\n"
                                 R"(// Hi, I'm a program!)" "\n"
                                 R"(int x = 1;)" "\n"
                                 R"(for(int i = 0; i < 10; i++) {)" "\n"
                                 R"(cout << i;)" "\n"
                                 R"(cout << endl;)" "\n"
                                 R"(})" "\n"
                                 R"(})" "\n");

}

TEST_CASE("countchar"){
    CHECK(countChar("int main(){" , '{') == 1);
    CHECK(countChar("int main(){" , '}') == 0);
}

TEST_CASE("indent"){
   CHECK(indent(unindent("bad.cpp")) == R"(int main(){)" "\n"
                                        "\t" R"(// Hi, I'm a program!)" "\n"
                                        "\t" R"(int x = 1;)" "\n"
                                        "\t" R"(for(int i = 0; i < 10; i++) {)" "\n"
                                        "\t" "\t" R"(cout << i;)" "\n"
                                        "\t" "\t" R"(cout << endl;)" "\n"
                                        "\t" R"(})" "\n"
                                        R"(})" "\n");

}
