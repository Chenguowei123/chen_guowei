#ifndef PIECEWORKER_H
#define PIECEWORKER_H


class PieceWorker : public Employee
{
    public:
        void PieceWorker(int =0);
        void setWage(int);
        void getWage(int);
        void setPieces(int);
        void getPieces(int);
        void Earnings() const;
    private:
        int wage;
        int pieces;
};

#endif // PIECEWORKER_H
