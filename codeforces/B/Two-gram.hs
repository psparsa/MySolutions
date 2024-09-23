-- Problem: B. Two-gram
-- Contest: Codeforces - Codeforces Round 479 (Div. 3)
-- URL: https://codeforces.com/problemset/problem/977/B
-- Memory Limit: 256 MB
-- Time Limit: 1000 ms

import Data.List (maximumBy)
import Data.Ord (comparing)

count x = length . filter (== x)

main :: IO ()
main = do
    n <- readLn
    s <- getLine
    let pairs = [take 2 (drop i s) | i <- [0 .. n - 2]]
    putStrLn $ maximumBy (comparing (`count` pairs)) pairs
