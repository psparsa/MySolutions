-- Problem: B. Following Directions
-- Contest: Codeforces - Codeforces Round 849 (Div. 4)
-- URL: https://codeforces.com/problemset/problem/1791/B
-- Memory Limit: 256 MB
-- Time Limit: 1000 ms

import Control.Monad (replicateM_)
import Data.List (find)
import Data.Maybe (isJust)

data Pos = Pos { x :: Int, y :: Int }
type Dir = Char

move :: Pos -> Dir -> Pos
move (Pos x y) dir
    | dir == 'L' = Pos (x - 1) y
    | dir == 'R' = Pos (x + 1) y
    | dir == 'U' = Pos x (y + 1)
    | dir == 'D' = Pos x (y - 1)

main :: IO ()
main = do
    t <- getLine
    replicateM_ (read t :: Int) $ do
        _ <- getLine
        moves <- getLine
        let crossedPositions = scanl move (Pos 0 0) moves
        let hasCrossedTargetPos = find (\(Pos x y) -> x == 1 && y == 1) crossedPositions
        putStrLn $ if isJust hasCrossedTargetPos then "YES" else "NO"
