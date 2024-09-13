-- Problem: B. Maximum Multiple Sum
-- Contest: Codeforces - Codeforces Round 952 (Div. 4)
-- URL: https://codeforces.com/problemset/problem/1985/B
-- Memory Limit: 256 MB
-- Time Limit: 1000 ms

import Control.Monad (replicateM_)
import Data.List (maximumBy)
import Data.Ord (comparing)

getMultipliesSumUntilX n x = (n, sum $ map (n *) [1..(x `div` n)])

getMaxMultiplySum t = fst $ maximumBy (comparing snd) t

main = do
    t <- getLine
    replicateM_ (read t :: Int) $ do
        _n <- getLine
        let n = read _n :: Int
        let getMultiplesSumUntilN value = getMultipliesSumUntilX value n
        let possibilities = map getMultiplesSumUntilN [2..n]
        print $ getMaxMultiplySum possibilities
