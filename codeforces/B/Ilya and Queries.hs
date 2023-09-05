-- Problem: B. Ilya and Queries
-- Contest: Codeforces - Codeforces Round 186 (Div. 2)
-- URL: https://codeforces.com/problemset/problem/313/B
-- Memory Limit: 256 MB
-- Time Limit: 2000 ms

import           Control.Monad (replicateM_)
import           Data.Array    (elems, listArray, (!))

getValues :: IO [Int]
getValues = map read . words <$> getLine

main :: IO ()
main = do
    s <- getLine :: IO String
    m <- readLn :: IO Int

    let n = length s
        memoized' = listArray (1, n-1) $ zipWith (\x y -> if x == y then 1 else 0) s (tail s)
        memoized = listArray (1, n) $ scanl (+) 0 (elems memoized')

    replicateM_ m $ do
        [l, r] <- getValues
        print ((memoized ! r) - (memoized ! l))
