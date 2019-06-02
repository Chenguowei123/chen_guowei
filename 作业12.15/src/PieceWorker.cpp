#include "PieceWorker.h"

void PieceWorker::setWage(int w)
{
    wage=w;
}
void PieceWorker::setPieces(int p)
{
    pieces=p;
}
void PieceWorker::getWage()
{
    return wage;
}
void PieceWorker::getPieces()
{
    return pieces;
}
double PieceWorker::Earnings()
{
    return getWage()*getPieces();
}
