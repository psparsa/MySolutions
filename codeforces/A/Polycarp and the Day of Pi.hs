-- Problem: A. Polycarp and the Day of Pi
-- Contest: Codeforces - Codeforces Round 847 (Div. 3)
-- URL: https://codeforces.com/problemset/problem/1790/A
-- Memory Limit: 256 MB
-- Time Limit: 1000 ms

import Control.Monad (replicateM_)

count :: [(Char, Char)] -> Int -> Int
count [] acc = acc
count (x : xs) acc
    | uncurry (==) x = count xs (acc + 1)
    | otherwise = acc

main = do
    t <- readLn
    replicateM_ t $ do
        n <- getLine
        let pi = "314159265358979323846264338327"
        let zipped = zip n pi
        let ans = count zipped 0
        print ans