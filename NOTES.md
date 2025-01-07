Things optimized in the code:
- Some bitboard shift functions is removed (but you can do it by using -Os/-O3)
- Used instricts (GCC only, __builtin_ctzll and __builtin_popcountll, other compilers still use manual implementation)

STRICTLY REMOVED:
- `Board::status()`
- `Termination`
- `Board::unicode()`
- `SquareSet`
