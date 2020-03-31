#include "all_tests.h"

/* change this to the version of tennis you want to work on */
#include "tennis1.h"
#include<iostream>
#include <cassert>

using namespace std;
void test_LoveAll_0_0()
{
	cout<<__FUNCTION__;
    assert("Love-All" == tennis_score(0, 0));
}

void test_FifteenAll_1_1()
{
	cout<<__FUNCTION__;
    assert("Fifteen-All" == tennis_score(1, 1));
}

void test_ThirtyAll_2_2()
{
	cout<<__FUNCTION__;
    assert("Thirty-All" == tennis_score(2, 2));
}

void test_Deuce_3_3()
{
	cout<<__FUNCTION__;
    assert("Deuce" == tennis_score(3, 3));
}

void test_Deuce_4_4()
{
	cout<<__FUNCTION__;
    assert("Deuce" == tennis_score(4, 4));
}

void test_FifteenLove_1_0()
{
	cout<<__FUNCTION__;
    assert("Fifteen-Love" == tennis_score(1, 0));
}

void test_LoveFifteen_0_1()
{
	cout<<__FUNCTION__;
    assert("Love-Fifteen" == tennis_score(0, 1));
}

void test_ThirtyLove_2_0()
{
	cout<<__FUNCTION__;
    assert("Thirty-Love" == tennis_score(2, 0));
}

void test_LoveThirty_0_2()
{
	cout<<__FUNCTION__;
    assert("Love-Thirty" == tennis_score(0, 2));
}

void test_FortyLove_3_0()
{
	cout<<__FUNCTION__;
    assert("Forty-Love" == tennis_score(3, 0));
}

void test_LoveForty_0_3()
{
	cout<<__FUNCTION__;
    assert("Love-Forty" == tennis_score(0, 3));
}

void test_Winforplayer1_4_0()
{
	cout<<__FUNCTION__;
    assert("Win for player1" == tennis_score(4, 0));
}

void test_Winforplayer2_0_4()
{
	cout<<__FUNCTION__;
    assert("Win for player2" == tennis_score(0, 4));
}

void test_ThirtyFifteen_2_1()
{
	cout<<__FUNCTION__;
    assert("Thirty-Fifteen" == tennis_score(2, 1));
}

void test_FifteenThirty_1_2()
{
	cout<<__FUNCTION__;
    assert("Fifteen-Thirty" == tennis_score(1, 2));
}

void test_FortyFifteen_3_1()
{
	cout<<__FUNCTION__;
    assert("Forty-Fifteen" == tennis_score(3, 1));
}

void test_FifteenForty_1_3()
{
	cout<<__FUNCTION__;
    assert("Fifteen-Forty" == tennis_score(1, 3));
}

void test_Winforplayer1_4_1()
{
	cout<<__FUNCTION__;
    assert("Win for player1" == tennis_score(4, 1));
}

void test_Winforplayer2_1_4()
{
	cout<<__FUNCTION__;
    assert("Win for player2" == tennis_score(1, 4));
}

void test_FortyThirty_3_2()
{
	cout<<__FUNCTION__;
    assert("Forty-Thirty" == tennis_score(3, 2));
}

void test_ThirtyForty_2_3()
{
	cout<<__FUNCTION__;
    assert("Thirty-Forty" == tennis_score(2, 3));
}

void test_Winforplayer1_4_2()
{
	cout<<__FUNCTION__;
    assert("Win for player1" == tennis_score(4, 2));
}

void test_Winforplayer2_2_4()
{
	cout<<__FUNCTION__;
    assert("Win for player2" == tennis_score(2, 4));
}

void test_Advantageplayer1_4_3()
{
	cout<<__FUNCTION__;
    assert("Advantage player1" == tennis_score(4, 3));
}

void test_Advantageplayer2_3_4()
{
	cout<<__FUNCTION__;
    assert("Advantage player2" == tennis_score(3, 4));
}

void test_Advantageplayer1_5_4()
{
	cout<<__FUNCTION__;
    assert("Advantage player1" == tennis_score(5, 4));
}

void test_Advantageplayer2_4_5()
{
	cout<<__FUNCTION__;
    assert("Advantage player2" == tennis_score(4, 5));
}

void test_Advantageplayer1_15_14()
{
	cout<<__FUNCTION__;
    assert("Advantage player1" == tennis_score(15, 14));
}

void test_Advantageplayer2_14_15()
{
	cout<<__FUNCTION__;
    assert("Advantage player2" == tennis_score(14, 15));
}

void test_Winforplayer1_6_4()
{
	cout<<__FUNCTION__;
    assert("Win for player1" == tennis_score(6, 4));
}

void test_Winforplayer2_4_6()
{
	cout<<__FUNCTION__;
    assert("Win for player2" == tennis_score(4, 6));
}

void test_Winforplayer1_16_14()
{
	cout<<__FUNCTION__;
    assert("Win for player1" == tennis_score(16, 14));
}

void test_Winforplayer2_14_16()
{
	cout<<__FUNCTION__;
    assert("Win for player2" == tennis_score(14, 16));
}