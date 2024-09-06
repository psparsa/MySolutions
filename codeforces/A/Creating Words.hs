-- Problem: A. Creating Words
-- Contest: Codeforces - Codeforces Round 952 (Div. 4)
-- URL: https://codeforces.com/problemset/problem/1985/A
-- Memory Limit: 256 MB
-- Time Limit: 1000 ms

import Control.Monad (replicateM_)

main = do
    n <- getLine
    replicateM_ (read n :: Int) $ do
        line <- getLine
        let [a,b] = words line
        let (ac:ax) = a
        let (bc:bx) = b
        putStrLn ((bc:ax) ++ " " ++ (ac:bx))
