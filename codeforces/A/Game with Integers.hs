-- Problem: A. Game with Integers
-- Contest: Codeforces - Codeforces Round 909 (Div. 3)
-- URL: https://codeforces.com/problemset/problem/1899/A
-- Memory Limit: 256 MB
-- Time Limit: 1000 ms

import Control.Monad (replicateM_)

main = do
    t <- getLine
    replicateM_ (read t :: Int) $ do
        _n <- getLine
        let n = read _n :: Int
        putStrLn (if rem n 3 == 0 then "Second" else "First")