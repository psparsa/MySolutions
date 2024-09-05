-- Problem: B. ICPC Balloons
-- Contest: Codeforces - Codeforces Round 806 (Div. 4)
-- URL: https://codeforces.com/problemset/problem/1703/B
-- Memory Limit: 256 MB
-- Time Limit: 1000 ms

import Control.Monad (replicateM_)
import Data.List (nub)

main = do
    t <- getLine
    replicateM_ (read t :: Int) $ do
        _ <- getLine
        s <- getLine
        let doubleRewards = length (nub s)
        print ((doubleRewards*2) + (length s - doubleRewards))