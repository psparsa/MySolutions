-- Problem: B. Good Kid
-- Contest: Codeforces - Codeforces Round 898 (Div. 4)
-- URL: https://codeforces.com/problemset/problem/1873/B
-- Memory Limit: 256 MB
-- Time Limit: 1000 ms

import Control.Monad (replicateM_)
import Data.List (elemIndex)
import Data.Maybe (fromMaybe)

mapWithIndex f = zipWith f [0..]

main = do
    t <- getLine
    replicateM_ (read t :: Int) $ do
        _ <- getLine
        numbers <- map read . words <$> getLine
        let min = minimum numbers
        let minIndex = fromMaybe 0 (elemIndex min numbers)
        let updatedList = mapWithIndex (\index item -> if index == minIndex then item + 1 else item) numbers
        print (product updatedList)
        