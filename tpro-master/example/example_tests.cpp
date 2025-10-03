#include "iostream"
#include "cstdio"

#include "example.h"

#include "../catch_amalgamated.hpp"

/*
уникальное название набора тестов - test1
набор тестов принадлежит группам testgroup1 и testgtroup2 - каждую группу тестов можно запускать по отдельности, запустяться только наборы тестов, принадлежащие запускаемой группе
*/
TEST_CASE("test1", "[testgroup1][testgroup2]")  
{
	REQUIRE(sum(5, 10) == 15);
	REQUIRE(sum(5,5) != 15);
}

/*
уникальное название набора тестов - test2
набор тестов принадлежит только группе testgroup1 
*/
TEST_CASE("test2","[testgroup1]")
{
    REQUIRE_THROWS_AS(sum(0,0), std::runtime_error);
    REQUIRE_THROWS(sum(0,0));
    
}
