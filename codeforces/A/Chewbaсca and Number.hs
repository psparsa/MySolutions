-- Problem: A. Chewbaсca and Number
-- Contest: Codeforces - Codeforces Round 291 (Div. 2)
-- URL: https://codeforces.com/contest/514/problem/A
-- Memory Limit: 256 MB
-- Time Limit: 1000 ms

import           Data.Char (digitToInt, intToDigit)

tweakDigit :: Char -> Char
tweakDigit c = do
  let a = digitToInt c
  let b = 9 - a
  if b >= 0 && b < a then intToDigit b else c

tweakFirstDigit :: Char -> Char
tweakFirstDigit c = do
  let a = digitToInt c
  let b = 9 - a
  if b > 0 && b < a then intToDigit b else c

main :: IO ()
main = do
  s <- getLine :: IO String
  putStrLn (tweakFirstDigit (head s) : map tweakDigit (tail s))
