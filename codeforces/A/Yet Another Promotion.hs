-- Problem: A. Yet Another Promotion
-- Contest: Codeforces - Codeforces Round 852 (Div. 2)
-- URL: https://codeforces.com/problemset/problem/1793/A
-- Memory Limit: 256 MB
-- Time Limit: 1000 ms

import           Control.Monad (replicateM_)

getValues :: IO [Integer]
getValues = map read . words <$> getLine

main :: IO ()
main = do
  t <- readLn
  replicateM_ t $ do
    [a, b] <- getValues
    [n, m] <- getValues

    let q = n `div` (m + 1)
        r = n `mod` (m + 1)

    print (q * min (a * m) (b * (m + 1)) + r * min a b)
