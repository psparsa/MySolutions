-- Problem: A. Buttons
-- Contest: Codeforces - Codeforces Round 893 (Div. 2)
-- URL: https://codeforces.com/contest/1858/problem/A
-- Memory Limit: 256 MB
-- Time Limit: 1000 ms

import           Control.Monad (replicateM_)

main :: IO ()
main = do
  t <- readLn :: IO Int
  replicateM_ t $ do
    [a, b, c] <- map read . words <$> getLine

    let ans = if even c
                then if a > b
                       then 1
                       else 2
                else if a < b
                       then 2
                       else 1

    putStrLn $ if ans == 1
                 then "First"
                 else "Second"
