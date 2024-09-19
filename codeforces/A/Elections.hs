-- Problem: A. Elections
-- Contest: Codeforces - Codeforces Round 748 (Div. 3)
-- URL: https://codeforces.com/problemset/problem/1593/A
-- Memory Limit: 256 MB
-- Time Limit: 1000 ms

import Control.Monad (replicateM_)

main :: IO ()
main = do
  t <- readLn
  replicateM_ t $ do
    s <- getLine
    let candidates = map (\i -> read i :: Int) (words s)
    let winner = foldl max 0 candidates
    let isWinnerUnique = length (filter (== winner) candidates) == 1
    let ans = map (\i -> show (if i == winner && isWinnerUnique then 0 else (winner - i) + 1)) candidates
    putStrLn $ unwords ans
