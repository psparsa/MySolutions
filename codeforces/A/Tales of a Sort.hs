-- Problem: A. Tales of a Sort
-- Contest: Codeforces - Codeforces Round 890 (Div. 2) supported by Constructor Institute
-- URL: https://codeforces.com/problemset/problem/1856/A
-- Memory Limit: 256 MB
-- Time Limit: 1000 ms

import           Control.Monad (replicateM_)

main :: IO ()
main = do
  t <- readLn :: IO Int
  replicateM_ t $ do
    n <- getLine
    a <- map read . words <$> getLine

    let ans = foldl (\acc (x, y) -> if x > y then max acc x else acc) 0 (zip a (tail a))
    print ans
