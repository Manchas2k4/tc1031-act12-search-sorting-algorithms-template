// =================================================================
//
// File: run_test.cpp 
// Author: Pedro Perez
// Description: This file implements various tests on the 
//				implemented code.
//
// Copyright (c) 2020 by Tecnologico de Monterrey.  
// All Rights Reserved. May be reproduced for any non-commercial 
// purpose.
// =================================================================
#include <gtest/gtest.h>
#include "header.h"
#include "activity.h"
//				0  1  2   3   4   5   6   7   8   9   10  11  12  13  14  15  16  17  18  19
int output[] = {1, 2, 16, 24, 29, 30, 42, 45, 49, 56, 63, 76, 77, 82, 89, 92, 93, 93, 94, 94};
 
TEST(Activity12, WorstScenarioSort)  { 
	int temp[] = {94, 94, 93, 93, 92, 89, 82, 77, 76, 63, 56, 49, 45, 42, 30, 29, 24, 16, 2, 1};
	vector<int> input(temp, temp + sizeof(temp) / sizeof(int));
	
	ordenaEnumeracion(input);
	EXPECT_STREQ(vec2str(input).c_str(), arr2str(output, 20).c_str());
}
 
TEST(Activity12, AverageScenarioSort)  { 
	int temp[] = {92, 1, 76, 89, 94, 30, 16, 24, 77, 93, 45, 56, 94, 93, 63, 29, 42, 82, 49, 2};
	vector<int> input(temp, temp + sizeof(temp) / sizeof(int));
	
	ordenaEnumeracion(input);
	EXPECT_STREQ(vec2str(input).c_str(), arr2str(output, 20).c_str());
}

TEST(Activity12, BestScenarioSort)  { 
	int temp[] = {1, 2, 16, 24, 29, 30, 42, 45, 49, 56, 63, 76, 77, 82, 89, 92, 93, 93, 94, 94};
	vector<int> input(temp, temp + sizeof(temp) / sizeof(int));
	
	ordenaEnumeracion(input);
	EXPECT_STREQ(vec2str(input).c_str(), arr2str(output, 20).c_str());
}

TEST(Activity12, NotFoundSearch) {
	vector<int> input(output, output + sizeof(output) / sizeof(int));
	
	EXPECT_EQ(-1, busqTernaria(input, 3));
	EXPECT_EQ(-1, busqTernaria(input, 85));
	EXPECT_EQ(-1, busqTernaria(input, 200));
}

TEST(Activity12, FoundSerach) {
	vector<int> input(output, output + sizeof(output) / sizeof(int));
	
	EXPECT_EQ(1, busqTernaria(input, 2));
	EXPECT_EQ(10, busqTernaria(input, 63));
	EXPECT_EQ(18, busqTernaria(input, 94));
}
 
int main(int argc, char **argv) {
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}