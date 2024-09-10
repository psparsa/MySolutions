-- Problem: A. Legs
-- Contest: Codeforces - Codeforces Round 962 (Div. 3)
-- URL: https://codeforces.com/problemset/problem/1996/A
-- Memory Limit: 256 MB
-- Time Limit: 2000 ms

import Control.Monad (replicateM_)

main = do
    t <- getLine
    replicateM_ (read t :: Int) $ do
        _n <- getLine
        let n = read _n :: Int
        let possibleChickenLegs = rem n 4
        let possibleCowLegs = n - possibleChickenLegs
        let minimumPossibleAnimals = div possibleChickenLegs 2 + div possibleCowLegs 4
        print minimumPossibleAnimals