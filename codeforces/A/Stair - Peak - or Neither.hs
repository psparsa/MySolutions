-- Problem: A. Stair, Peak, or Neither?
-- Contest: Codeforces - Codeforces Round 937 (Div. 4)
-- URL: https://codeforces.com/problemset/problem/1950/A
-- Memory Limit: 256 MB
-- Time Limit: 1000 ms

import Control.Monad (replicateM_)

answer a b c
    | a < b && b < c = "STAIR"
    | a < b && b > c = "PEAK"
    | otherwise = "NONE"


main = do
    _n <- getLine
    let n = (read _n :: Int)
    replicateM_ n $ do
        input <- getLine
        let [a,b,c] = map read (words input) :: [Int]
        putStrLn (answer a b c)
