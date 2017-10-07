/**
 * Unit Tests for Piezas
**/

#include <gtest/gtest.h>
#include "Piezas.h"
 
class PiezasTest : public ::testing::Test
{
	protected:
		PiezasTest(){} //constructor runs before each test
		virtual ~PiezasTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor) 
};

/*TEST(PiezasTest, sanityCheck)
{
	ASSERT_TRUE(true);
}*/


TEST(PiezasTest, dropPieceX) {
    Piezas testBoard;
    ASSERT_EQ(testBoard.dropPiece(0), X);
}

TEST(PiezasTest, dropPieceO) {
    Piezas testBoard;
    testBoard.dropPiece(1);
    ASSERT_EQ(testBoard.dropPiece(0), O);
}

TEST(PiezasTest, dropleftBoundary) {
  Piezas testBoard;
  ASSERT_EQ(Invalid, testBoard.dropPiece(-1));
}

TEST(PiezasTest, droprightBoundary) {
  Piezas testBoard;
  ASSERT_EQ(Invalid, testBoard.dropPiece(5));
}

TEST(PiezasTest, pieceAtSuccess) {
    Piezas testBoard;
    testBoard.dropPiece(0);
    ASSERT_EQ(testBoard.pieceAt(2,0), X);
}

TEST(PiezasTest, pieceAtBlank) {
    Piezas testBoard;
    ASSERT_EQ(testBoard.pieceAt(0,0), Blank);
}

TEST(PiezasTest, minRowBoundary) {
  Piezas testBoard;
  ASSERT_EQ(Invalid, testBoard.pieceAt(-1, 0));
}

TEST(PiezasTest, minColBoundary) {
  Piezas testBoard;
  ASSERT_EQ(Invalid, testBoard.pieceAt(0,-1));
}

TEST(PiezasTest, maxRowBoundary) {
  Piezas testBoard;
  ASSERT_EQ(Invalid, testBoard.pieceAt(5,0));
}

TEST(PiezasTest, maxColBoundary) {
  Piezas testBoard;
  ASSERT_EQ(Invalid, testBoard.pieceAt(0,5));
}
/*TEST(PiezasTest, sanityCheck)
TEST(PiezasTest, sanityCheck)
TEST(PiezasTest, sanityCheck)
TEST(PiezasTest, sanityCheck)
TEST(PiezasTest, sanityCheck)
TEST(PiezasTest, sanityCheck)
TEST(PiezasTest, sanityCheck)
TEST(PiezasTest, sanityCheck)*/