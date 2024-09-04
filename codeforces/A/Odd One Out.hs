-- Problem: A. Odd One Out
-- Contest: Codeforces - Codeforces Round 918 (Div. 4)
-- URL: https://codeforces.com/problemset/problem/1915/A
-- Memory Limit: 256 MB
-- Time Limit: 1000 ms

import Control.Monad (replicateM_)

answer [a,b,c]
    | a == b = c
    | b == c = a
    | otherwise = b

main = do
    n <- getLine
    replicateM_ (read n :: Int) $ do
        line <- getLine
        let numbers = words line
        putStrLn (answer numbers)