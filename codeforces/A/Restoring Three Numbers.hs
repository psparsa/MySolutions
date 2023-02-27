-- Problem: A. Restoring Three Numbers
-- Contest: Codeforces - Codeforces Round #552 (Div. 3)
-- URL: https://codeforces.com/problemset/problem/1154/A
-- Memory Limit: 256 MB
-- Time Limit: 1000 ms

import Data.List

readInt :: String -> Int
readInt = read

main = do
  x <- getLine
  let list = sort (map readInt (words x))
  let biggest = last list
  let a = biggest - head list
  let b = biggest - list !! 1
  let c = biggest - list !! 2
  putStrLn (show a ++ " " ++ show b ++ " " ++ show c)