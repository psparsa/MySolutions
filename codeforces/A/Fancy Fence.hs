-- Problem: A. Fancy Fence
-- Contest: Codeforces - Codeforces Round 165 (Div. 2)
-- URL: https://codeforces.com/problemset/problem/270/A
-- Memory Limit: 256 MB
-- Time Limit: 2000 ms

import Control.Monad (replicateM_)

main :: IO ()
main = do
    t <- readLn
    replicateM_ t $ do
        a <- readLn
        let ans = if 360 `mod` (180 - a) == 0 then "YES" else "NO"
        putStrLn ans
