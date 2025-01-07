#include "chess.cpp"
#include <chrono>
#include <iomanip>
#include <iostream>
using namespace chess;
using namespace std;
int perf(Board& board, int depth){
    int nodes=0;
    for (Move i:board.generate_legal_moves()){
        board.push(i);
        if (depth-1==0)nodes++;
        else nodes+=perf(board,depth-1);
        board.pop();
    }
    return nodes;
}
int main(){
    Board board;

    // Start time measurement
    auto start = std::chrono::steady_clock::now();

    int nodes=perf(board,5);

    // End time measurement
    auto end = std::chrono::steady_clock::now();

    // Calculate elapsed time
    std::chrono::duration<double> duration = end - start;
    std::cout << setprecision(10)<<nodes/duration.count() <<"/"<<duration.count()<<" seconds" <<std::endl;
using namespace chess;
using namespace std;
int perf(Board& board, int depth){
    int nodes=0;
    for (Move i:board.generate_legal_moves()){
        board.push(i);
        if (depth-1==0)nodes++;
        else nodes+=perf(board,depth-1);
        board.pop();
    }
    return nodes;
}
int main(){
    Board board;

    // Start time measurement
    auto start = std::chrono::steady_clock::now();

    int nodes=perf(board,5);

    // End time measurement
    auto end = std::chrono::steady_clock::now();

    // Calculate elapsed time
    std::chrono::duration<double> duration = end - start;
    std::cout << setprecision(10)<<nodes/duration.count() <<"/"<<duration.count()<<" seconds" <<std::endl;
}

