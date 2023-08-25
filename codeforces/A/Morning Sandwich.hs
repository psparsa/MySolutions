-- Problem: A. Morning Sandwich
-- Contest: Codeforces - Educational Codeforces Round 152 (Rated for Div. 2)
-- URL: https://codeforces.com/problemset/problem/1849/A
-- Memory Limit: 256 MB
-- Time Limit: 2000 ms

import           Control.Monad (replicateM_)

getValues :: IO [Integer]
getValues = map read . words <$> getLine

main :: IO ()
main = do
    t <- readLn
    replicateM_ t $ do
        [b, c, h] <- getValues

        let f = c + h
        print (if b > f then (f*2)+1 else (b*2)-1)
