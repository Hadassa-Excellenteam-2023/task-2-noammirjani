#pragma once
#include "Piece.h"
#include "Location.h"
#include "PieceFactory.h"


class Rook : public Piece {
public:
    Rook(char);
    bool move(const Location&, const Location&) const override;

private:
    static bool m_creator;

};