-- Problem: A. Vlad and the Best of Five
-- Contest: Codeforces - Codeforces Round 928 (Div. 4)
-- URL: https://codeforces.com/problemset/problem/1926/A
-- Memory Limit: 256 MB
-- Time Limit: 1000 ms

import Control.Monad (replicateM_)

countAB (a, b) 'A' = (a + 1, b)
countAB (a, b) 'B' = (a, b + 1)

main = do
    t <- getLine
    replicateM_ (read t :: Int) $ do
        s <- getLine
        let (a, b) = foldl countAB (0, 0) s
        putStrLn (if a > b then "A" else "B")