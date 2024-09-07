-- Problem: C. Prepend and Append
-- Contest: Codeforces - Codeforces Round 849 (Div. 4)
-- URL: https://codeforces.com/problemset/problem/1791/C
-- Memory Limit: 256 MB
-- Time Limit: 1000 ms

import Control.Monad (replicateM_)
import Data.List (elemIndex)

main = do
    t <- getLine
    replicateM_ (read t :: Int) $ do
        _ <- getLine
        s <- getLine
        let zipped = zip s (reverse s)
        let mapped = map (\(a,b) -> if a == b then 1 else 0) zipped
        let firstIndex = elemIndex 1 mapped
        print $ maybe 0 (\index -> length s - (index * 2)) firstIndex

