
-- Problem: B. Atilla's Favorite Problem
-- Contest: Codeforces - Codeforces Round 835 (Div. 4)
-- URL: https://codeforces.com/problemset/problem/1760/B
-- Memory Limit: 256 MB
-- Time Limit: 1000 ms

import Control.Monad (replicateM_)
import Data.Char (ord)

alphabetPosition c = ord c - ord 'a' + 1

main = do
    t <- getLine
    replicateM_ (read t :: Int) $ do
        _ <- getLine
        s <- getLine
        print $ maximum $ map alphabetPosition s