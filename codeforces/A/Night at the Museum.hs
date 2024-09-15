-- Problem: A. Night at the Museum
-- Contest: Codeforces - Codeforces Round 376 (Div. 2)
-- URL: https://codeforces.com/problemset/problem/731/A
-- Memory Limit: 256 MB
-- Time Limit: 1000 ms

import Data.Char (ord)

steps :: Char -> Char -> Int
steps prevChar destChar = min dist (26 - dist)
  where dist = abs (ord prevChar - ord destChar)

main :: IO ()
main = getLine >>= print . snd . foldl (\(prevChar, takenSteps) destChar -> (destChar, takenSteps + steps prevChar destChar)) ('a', 0)