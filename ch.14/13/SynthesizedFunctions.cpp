//: C14:SynthesizedFunctions.cpp
// �������, ��������������� ������������
#include <iostream>
using namespace std;

class GameBoard {
public:
  GameBoard() { cout << "GameBoard()\n"; }
  GameBoard(const GameBoard&) { 
    cout << "GameBoard(const GameBoard&)\n"; 
  }
  GameBoard& operator=(const GameBoard&) {
    cout << "GameBoard::operator=()\n";
    return *this;
  }
  ~GameBoard() { cout << "~GameBoard()\n"; }
};

class Game {
  GameBoard gb; // ����������
public:
  // ����� ������������ �� ��������� ��� GameBoard:
  Game() { cout << "Game()\n"; }
  // ���������� ����������� GameBoard ������ ���������� ����,
  // ����� ������ ���� ����� ������������� ������
  // ����������� �� ���������:
  Game(const Game& g) : gb(g.gb) { 
    cout << "Game(const Game&)\n"; 
  }
  Game(int) { cout << "Game(int)\n"; }
  Game& operator=(const Game& g) {
    // �������� ������������ ��� GameBoard ������ ���������� ����,
    // ����� gb ������ �� ����� ��������� ��������!
    gb = g.gb;
    cout << "Game::operator=()\n";
    return *this;
  }
  class Other {}; // ��������� �����
  // �������������� ���������� ����:
  operator Other() const {
    cout << "Game::operator Other()\n";
    return Other();
  }
  ~Game() { cout << "~Game()\n"; }
};

class Chess : public Game 
{
public:
  Chess() { cout << "Chess()\n"; }
  Chess(const Chess &chess) : Game(chess) { cout << "Chess(const Chess&)\n"; }
  Chess& operator=(const Chess &chess)
  {
    Game::operator=(chess);
    cout << "Chess::operator=()\n";
  }
};

void f(Game::Other) {}

class Checkers : public Game {
public:
  // ����� ������������ �� ��������� ��� �������� ������:
  Checkers() { cout << "Checkers()\n"; }
  // ���������� ����������� �������� ������ ������ ���������� ����,
  // ����� ������ ���� ����� ������������� ������
  // ����������� �� ���������:
  Checkers(const Checkers& c) : Game(c) {
    cout << "Checkers(const Checkers& c)\n";
  }
  Checkers& operator=(const Checkers& c) {
    // ������ operator=() ��� �������� ������ ������ ���������� ����,
    // ����� ��������� �������� ������ �� ��������� � ������������!
    Game::operator=(c);
    cout << "Checkers::operator=()\n";
    return *this;
  }
};

int main() {
  Chess d1;  // ����������� �� ���������
  Chess d2(d1); // ���������� �����������
//! Chess d3(1); // ������: ��� ������������ � int
  d1 = d2; // ������������ ������� operator=
  f(d1); // ���������� ���� �����������
  Game::Other go;
//!  d1 = go; // ��� ������� ���� operator= �� ������������
  Checkers c1, c2(c1);
  c1 = c2;
} ///:~