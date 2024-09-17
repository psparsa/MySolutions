-- Problem: A. Minimize!
-- Contest: Codeforces - Codeforces Round 971 (Div. 4)
-- URL: https://codeforces.com/contest/2009/problem/A
-- Memory Limit: 256 MB
-- Time Limit: 1000 ms

import Control.Monad (replicateM_)
 
main = do
  t <- getLine
  replicateM_ (read t ::Int) $ do
   s <- getLine
   let [a, b] = map (\i -> read i ::Int) (words s)
   print (b - a)
