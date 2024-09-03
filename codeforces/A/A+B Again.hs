-- Problem: A. A+B Again?
-- Contest: Codeforces - Codeforces Round 964 (Div. 4) (Codeforces format)
-- URL: https://codeforces.com/problemset/problem/1999/A
-- Memory Limit: 256 MB
-- Time Limit: 1000 ms

import Control.Monad (replicateM_)

main = do
    n <- getLine
    replicateM_ (read n) $ do
        x <- getLine
        print $ read [head x] + read [last x]