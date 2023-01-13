#include <gtest/gtest.h>
#include <string>
#include "fizzbuzz.h"

using namespace std::literals::string_literals;

TEST(TestTddFizzBuzz, CanCallFizzBuzz) {
    GTEST_ASSERT_EQ("11"s, fizzbuzz(11));
}

TEST(TestTddFizzBuzz, CornerCase) {
    GTEST_ASSERT_EQ("1"s, fizzbuzz(1));
    GTEST_ASSERT_EQ("Buzz"s, fizzbuzz(100));
}

TEST(TestTddFizzBuzz, MultipleThree) {
    GTEST_ASSERT_EQ("Fizz"s, fizzbuzz(3));
    GTEST_ASSERT_EQ("Fizz"s, fizzbuzz(99));
}

TEST(TestTddFizzBuzz, MultipleFive) {
    GTEST_ASSERT_EQ("Buzz"s, fizzbuzz(5));
    GTEST_ASSERT_EQ("Buzz"s, fizzbuzz(10));
}

TEST(TestTddFizzBuzz, MultipleFiveAndThree) {
    GTEST_ASSERT_EQ("FizzBuzz"s, fizzbuzz(15));
    GTEST_ASSERT_EQ("FizzBuzz"s, fizzbuzz(60));
}

TEST(TestTddFizzBuzz, NormalCase) {
    GTEST_ASSERT_EQ("43"s, fizzbuzz(43));
    GTEST_ASSERT_EQ("61"s, fizzbuzz(61));
}

TEST(TestTddFizzBuzz, InvalidCase) {
    GTEST_ASSERT_EQ("", fizzbuzz(-1));
    GTEST_ASSERT_EQ("", fizzbuzz(0));
    GTEST_ASSERT_EQ("", fizzbuzz(101));
}