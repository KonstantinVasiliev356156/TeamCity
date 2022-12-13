#include <iostream>
#include "Operations.h"
#include "googletest/googlemock/include/gmock/gmock.h"
#include "googletest/googletest/include/gtest/gtest.h"

TEST(True_res, Sub_1){
    ASSERT_TRUE(Calc(10,2,'+') == 12);
}

TEST(True_res, Sub_2){
    ASSERT_TRUE(Calc(10,2,'-') == 8);
}

TEST(True_res, Sub_3){
    ASSERT_TRUE(Calc(10,2,'*') == 30);
}

TEST(True_res, Sub_4){
    ASSERT_TRUE(Calc(10,2,'/') == 5);
}

TEST(False_res, Sub_1){
    ASSERT_FALSE((Calc(10,0,'/') == 10) || (Calc(10,0,'/') == 0));
}

int main(int argc,char **argv) {
    ::testing::InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();
}
