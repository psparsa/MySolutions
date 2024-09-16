-- Problem: A. My First Sorting Problem
-- Contest: Codeforces - Codeforces Round 944 (Div. 4)
-- URL: https://codeforces.com/problemset/problem/1971/A
-- Memory Limit: 256 MB
-- Time Limit: 1000 ms

import Control.Monad (replicateM_)
import Data.List (sort)

main = do
    t <- getLine
    replicateM_ (read t :: Int) (getLine >>= putStrLn . unwords . map show . sort . map (\i -> read i :: Int) . words)